#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
// @byteDeclarationInRam reference class
//--------------------------------------------------------------------------------------------------

cPtr_byteDeclarationInRam::cPtr_byteDeclarationInRam (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_declarationInRam (inCompiler COMMA_THERE),
mProperty_mName (),
mProperty_mSizeExpression (),
mProperty_mBitSliceTable (),
mProperty_mBitDefinitionString (),
mProperty_mProtection () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_byteDeclarationInRam::printNonNullClassInstanceProperties (void) const {
    cPtr_declarationInRam::printNonNullClassInstanceProperties () ;
    mProperty_mName.printNonNullClassInstanceProperties ("mName") ;
    mProperty_mSizeExpression.printNonNullClassInstanceProperties ("mSizeExpression") ;
    mProperty_mBitSliceTable.printNonNullClassInstanceProperties ("mBitSliceTable") ;
    mProperty_mBitDefinitionString.printNonNullClassInstanceProperties ("mBitDefinitionString") ;
    mProperty_mProtection.printNonNullClassInstanceProperties ("mProtection") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_byteDeclarationInRam::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mName.objectCompare (p->mProperty_mName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSizeExpression.objectCompare (p->mProperty_mSizeExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitSliceTable.objectCompare (p->mProperty_mBitSliceTable) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitDefinitionString.objectCompare (p->mProperty_mBitDefinitionString) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mProtection.objectCompare (p->mProperty_mProtection) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_byteDeclarationInRam::objectCompare (const GALGAS_byteDeclarationInRam & inOperand) const {
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

GALGAS_byteDeclarationInRam::GALGAS_byteDeclarationInRam (void) :
GALGAS_declarationInRam () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_byteDeclarationInRam GALGAS_byteDeclarationInRam::
init_21__21__21__21__21_ (const GALGAS_lstring & in_mName,
                          const GALGAS_immediatExpression & in_mSizeExpression,
                          const GALGAS_bitSliceTable & in_mBitSliceTable,
                          const GALGAS_string & in_mBitDefinitionString,
                          const GALGAS_registerProtection & in_mProtection,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_byteDeclarationInRam * object = nullptr ;
  macroMyNew (object, cPtr_byteDeclarationInRam (inCompiler COMMA_THERE)) ;
  object->byteDeclarationInRam_init_21__21__21__21__21_ (in_mName, in_mSizeExpression, in_mBitSliceTable, in_mBitDefinitionString, in_mProtection, inCompiler) ;
  const GALGAS_byteDeclarationInRam result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_byteDeclarationInRam::
byteDeclarationInRam_init_21__21__21__21__21_ (const GALGAS_lstring & in_mName,
                                               const GALGAS_immediatExpression & in_mSizeExpression,
                                               const GALGAS_bitSliceTable & in_mBitSliceTable,
                                               const GALGAS_string & in_mBitDefinitionString,
                                               const GALGAS_registerProtection & in_mProtection,
                                               Compiler * /* inCompiler */) {
  mProperty_mName = in_mName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mBitSliceTable = in_mBitSliceTable ;
  mProperty_mBitDefinitionString = in_mBitDefinitionString ;
  mProperty_mProtection = in_mProtection ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam::GALGAS_byteDeclarationInRam (const cPtr_byteDeclarationInRam * inSourcePtr) :
GALGAS_declarationInRam (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_byteDeclarationInRam) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam GALGAS_byteDeclarationInRam::class_func_new (const GALGAS_lstring & in_mName,
                                                                         const GALGAS_immediatExpression & in_mSizeExpression,
                                                                         const GALGAS_bitSliceTable & in_mBitSliceTable,
                                                                         const GALGAS_string & in_mBitDefinitionString,
                                                                         const GALGAS_registerProtection & in_mProtection
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_byteDeclarationInRam result ;
  macroMyNew (result.mObjectPtr, cPtr_byteDeclarationInRam (in_mName, in_mSizeExpression, in_mBitSliceTable, in_mBitDefinitionString, in_mProtection COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_byteDeclarationInRam::readProperty_mName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setProperty_mName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_byteDeclarationInRam::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setProperty_mSizeExpression (const GALGAS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_byteDeclarationInRam::readProperty_mBitSliceTable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitSliceTable () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mBitSliceTable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setProperty_mBitSliceTable (const GALGAS_bitSliceTable & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mBitSliceTable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_byteDeclarationInRam::readProperty_mBitDefinitionString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mBitDefinitionString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setProperty_mBitDefinitionString (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mBitDefinitionString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_byteDeclarationInRam::readProperty_mProtection (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerProtection () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mProtection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setProperty_mProtection (const GALGAS_registerProtection & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mProtection = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @byteDeclarationInRam class
//--------------------------------------------------------------------------------------------------

cPtr_byteDeclarationInRam::cPtr_byteDeclarationInRam (const GALGAS_lstring & in_mName,
                                                      const GALGAS_immediatExpression & in_mSizeExpression,
                                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                                      const GALGAS_string & in_mBitDefinitionString,
                                                      const GALGAS_registerProtection & in_mProtection
                                                      COMMA_LOCATION_ARGS) :
cPtr_declarationInRam (THERE),
mProperty_mName (),
mProperty_mSizeExpression (),
mProperty_mBitSliceTable (),
mProperty_mBitDefinitionString (),
mProperty_mProtection () {
  mProperty_mName = in_mName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mBitSliceTable = in_mBitSliceTable ;
  mProperty_mBitDefinitionString = in_mBitDefinitionString ;
  mProperty_mProtection = in_mProtection ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_byteDeclarationInRam::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam ;
}

void cPtr_byteDeclarationInRam::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@byteDeclarationInRam:") ;
  mProperty_mName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitSliceTable.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitDefinitionString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mProtection.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_byteDeclarationInRam::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_byteDeclarationInRam (mProperty_mName, mProperty_mSizeExpression, mProperty_mBitSliceTable, mProperty_mBitDefinitionString, mProperty_mProtection COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @byteDeclarationInRam generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_byteDeclarationInRam ("byteDeclarationInRam",
                                                                            & kTypeDescriptor_GALGAS_declarationInRam) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_byteDeclarationInRam::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_byteDeclarationInRam::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_byteDeclarationInRam (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam GALGAS_byteDeclarationInRam::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_byteDeclarationInRam result ;
  const GALGAS_byteDeclarationInRam * p = (const GALGAS_byteDeclarationInRam *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_byteDeclarationInRam *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("byteDeclarationInRam", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatInteger reference class
//--------------------------------------------------------------------------------------------------

cPtr_immediatInteger::cPtr_immediatInteger (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatInteger::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_immediatInteger::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_immediatInteger * p = (const cPtr_immediatInteger *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatInteger) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_immediatInteger::objectCompare (const GALGAS_immediatInteger & inOperand) const {
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

GALGAS_immediatInteger::GALGAS_immediatInteger (void) :
GALGAS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_immediatInteger GALGAS_immediatInteger::
init_21_ (const GALGAS_luint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_immediatInteger * object = nullptr ;
  macroMyNew (object, cPtr_immediatInteger (inCompiler COMMA_THERE)) ;
  object->immediatInteger_init_21_ (in_mValue, inCompiler) ;
  const GALGAS_immediatInteger result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatInteger::
immediatInteger_init_21_ (const GALGAS_luint & in_mValue,
                          Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger::GALGAS_immediatInteger (const cPtr_immediatInteger * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatInteger) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger GALGAS_immediatInteger::class_func_new (const GALGAS_luint & in_mValue
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_immediatInteger result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatInteger (in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_immediatInteger::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_immediatInteger * p = (cPtr_immediatInteger *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatInteger) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatInteger::setProperty_mValue (const GALGAS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatInteger * p = (cPtr_immediatInteger *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatInteger) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatInteger class
//--------------------------------------------------------------------------------------------------

cPtr_immediatInteger::cPtr_immediatInteger (const GALGAS_luint & in_mValue
                                            COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatInteger::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger ;
}

void cPtr_immediatInteger::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatInteger:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatInteger::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatInteger (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatInteger generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatInteger ("immediatInteger",
                                                                       & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatInteger::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatInteger::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatInteger (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger GALGAS_immediatInteger::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_immediatInteger result ;
  const GALGAS_immediatInteger * p = (const GALGAS_immediatInteger *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatInteger *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatInteger", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatRegister reference class
//--------------------------------------------------------------------------------------------------

cPtr_immediatRegister::cPtr_immediatRegister (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mRegister () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatRegister::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_immediatRegister::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_immediatRegister * p = (const cPtr_immediatRegister *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatRegister) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_immediatRegister::objectCompare (const GALGAS_immediatRegister & inOperand) const {
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

GALGAS_immediatRegister::GALGAS_immediatRegister (void) :
GALGAS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_immediatRegister GALGAS_immediatRegister::
init_21_ (const GALGAS_registerExpression & in_mRegister,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_immediatRegister * object = nullptr ;
  macroMyNew (object, cPtr_immediatRegister (inCompiler COMMA_THERE)) ;
  object->immediatRegister_init_21_ (in_mRegister, inCompiler) ;
  const GALGAS_immediatRegister result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatRegister::
immediatRegister_init_21_ (const GALGAS_registerExpression & in_mRegister,
                           Compiler * /* inCompiler */) {
  mProperty_mRegister = in_mRegister ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister::GALGAS_immediatRegister (const cPtr_immediatRegister * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatRegister) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister GALGAS_immediatRegister::class_func_new (const GALGAS_registerExpression & in_mRegister
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_immediatRegister result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatRegister (in_mRegister COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_immediatRegister::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_immediatRegister * p = (cPtr_immediatRegister *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRegister) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatRegister::setProperty_mRegister (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatRegister * p = (cPtr_immediatRegister *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRegister) ;
    p->mProperty_mRegister = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatRegister class
//--------------------------------------------------------------------------------------------------

cPtr_immediatRegister::cPtr_immediatRegister (const GALGAS_registerExpression & in_mRegister
                                              COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
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

acPtr_class * cPtr_immediatRegister::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatRegister (mProperty_mRegister COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatRegister generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister ("immediatRegister",
                                                                        & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatRegister::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatRegister::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatRegister (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister GALGAS_immediatRegister::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_immediatRegister result ;
  const GALGAS_immediatRegister * p = (const GALGAS_immediatRegister *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatRegister *> (p)) {
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

cPtr_immediatSlice::cPtr_immediatSlice (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mRegisterName (),
mProperty_mSliceExpressionList () {
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

ComparisonResult cPtr_immediatSlice::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_immediatSlice * p = (const cPtr_immediatSlice *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatSlice) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterName.objectCompare (p->mProperty_mRegisterName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSliceExpressionList.objectCompare (p->mProperty_mSliceExpressionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_immediatSlice::objectCompare (const GALGAS_immediatSlice & inOperand) const {
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

GALGAS_immediatSlice::GALGAS_immediatSlice (void) :
GALGAS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_immediatSlice GALGAS_immediatSlice::
init_21__21_ (const GALGAS_lstring & in_mRegisterName,
              const GALGAS_immediatSliceExpressionList & in_mSliceExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatSlice * object = nullptr ;
  macroMyNew (object, cPtr_immediatSlice (inCompiler COMMA_THERE)) ;
  object->immediatSlice_init_21__21_ (in_mRegisterName, in_mSliceExpressionList, inCompiler) ;
  const GALGAS_immediatSlice result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatSlice::
immediatSlice_init_21__21_ (const GALGAS_lstring & in_mRegisterName,
                            const GALGAS_immediatSliceExpressionList & in_mSliceExpressionList,
                            Compiler * /* inCompiler */) {
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mSliceExpressionList = in_mSliceExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice::GALGAS_immediatSlice (const cPtr_immediatSlice * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatSlice) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice GALGAS_immediatSlice::class_func_new (const GALGAS_lstring & in_mRegisterName,
                                                           const GALGAS_immediatSliceExpressionList & in_mSliceExpressionList
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_immediatSlice result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatSlice (in_mRegisterName, in_mSliceExpressionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_immediatSlice::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSlice::setProperty_mRegisterName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSlice::readProperty_mSliceExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatSliceExpressionList () ;
  }else{
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    return p->mProperty_mSliceExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSlice::setProperty_mSliceExpressionList (const GALGAS_immediatSliceExpressionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    p->mProperty_mSliceExpressionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatSlice class
//--------------------------------------------------------------------------------------------------

cPtr_immediatSlice::cPtr_immediatSlice (const GALGAS_lstring & in_mRegisterName,
                                        const GALGAS_immediatSliceExpressionList & in_mSliceExpressionList
                                        COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
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

acPtr_class * cPtr_immediatSlice::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatSlice (mProperty_mRegisterName, mProperty_mSliceExpressionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatSlice generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice ("immediatSlice",
                                                                     & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatSlice::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSlice (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice GALGAS_immediatSlice::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_immediatSlice result ;
  const GALGAS_immediatSlice * p = (const GALGAS_immediatSlice *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatSlice *> (p)) {
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

cPtr_bitNumberLabelValue::cPtr_bitNumberLabelValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLabelValue (),
mProperty_mBitNumberIndexValue () {
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

ComparisonResult cPtr_bitNumberLabelValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_bitNumberLabelValue * p = (const cPtr_bitNumberLabelValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumberLabelValue.objectCompare (p->mProperty_mBitNumberLabelValue) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumberIndexValue.objectCompare (p->mProperty_mBitNumberIndexValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_bitNumberLabelValue::objectCompare (const GALGAS_bitNumberLabelValue & inOperand) const {
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

GALGAS_bitNumberLabelValue::GALGAS_bitNumberLabelValue (void) :
GALGAS_bitNumberExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue::
init_21__21_ (const GALGAS_lstring & in_mBitNumberLabelValue,
              const GALGAS_luint & in_mBitNumberIndexValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_bitNumberLabelValue * object = nullptr ;
  macroMyNew (object, cPtr_bitNumberLabelValue (inCompiler COMMA_THERE)) ;
  object->bitNumberLabelValue_init_21__21_ (in_mBitNumberLabelValue, in_mBitNumberIndexValue, inCompiler) ;
  const GALGAS_bitNumberLabelValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLabelValue::
bitNumberLabelValue_init_21__21_ (const GALGAS_lstring & in_mBitNumberLabelValue,
                                  const GALGAS_luint & in_mBitNumberIndexValue,
                                  Compiler * /* inCompiler */) {
  mProperty_mBitNumberLabelValue = in_mBitNumberLabelValue ;
  mProperty_mBitNumberIndexValue = in_mBitNumberIndexValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue::GALGAS_bitNumberLabelValue (const cPtr_bitNumberLabelValue * inSourcePtr) :
GALGAS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLabelValue) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue::class_func_new (const GALGAS_lstring & in_mBitNumberLabelValue,
                                                                       const GALGAS_luint & in_mBitNumberIndexValue
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue result ;
  macroMyNew (result.mObjectPtr, cPtr_bitNumberLabelValue (in_mBitNumberLabelValue, in_mBitNumberIndexValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_bitNumberLabelValue::readProperty_mBitNumberLabelValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    return p->mProperty_mBitNumberLabelValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLabelValue::setProperty_mBitNumberLabelValue (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    p->mProperty_mBitNumberLabelValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_bitNumberLabelValue::readProperty_mBitNumberIndexValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    return p->mProperty_mBitNumberIndexValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLabelValue::setProperty_mBitNumberIndexValue (const GALGAS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    p->mProperty_mBitNumberIndexValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLabelValue class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLabelValue::cPtr_bitNumberLabelValue (const GALGAS_lstring & in_mBitNumberLabelValue,
                                                    const GALGAS_luint & in_mBitNumberIndexValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (THERE),
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

acPtr_class * cPtr_bitNumberLabelValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitNumberLabelValue (mProperty_mBitNumberLabelValue, mProperty_mBitNumberIndexValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bitNumberLabelValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue ("bitNumberLabelValue",
                                                                           & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberLabelValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberLabelValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLabelValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue result ;
  const GALGAS_bitNumberLabelValue * p = (const GALGAS_bitNumberLabelValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitNumberLabelValue *> (p)) {
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

cPtr_baseline_5F_instruction_5F_FD::cPtr_baseline_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
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

ComparisonResult cPtr_baseline_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FD_5F_base_5F_code) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FD::GALGAS_baseline_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD GALGAS_baseline_5F_instruction_5F_FD::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                      const GALGAS_registerExpression & in_mRegisterExpression,
                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FD::
baseline_5F_instruction_5F_FD_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                    const GALGAS_registerExpression & in_mRegisterExpression,
                                                    const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code = in_mInstruction_5F_FD_5F_base_5F_code ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD::GALGAS_baseline_5F_instruction_5F_FD (const cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD GALGAS_baseline_5F_instruction_5F_FD::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                           const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                                           const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                           const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FD (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD::readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FD::setProperty_mInstruction_5F_FD_5F_base_5F_code (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    p->mProperty_mInstruction_5F_FD_5F_base_5F_code = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_FD::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FD::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FD::setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FD::cPtr_baseline_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FD_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FD generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ("baseline_instruction_FD",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD GALGAS_baseline_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD result ;
  const GALGAS_baseline_5F_instruction_5F_FD * p = (const GALGAS_baseline_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FD *> (p)) {
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

cPtr_baseline_5F_instruction_5F_F::cPtr_baseline_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterExpression () {
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

ComparisonResult cPtr_baseline_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_F * p = (const cPtr_baseline_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFAinstruction.objectCompare (p->mProperty_mFAinstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_instruction_5F_F & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_F::GALGAS_baseline_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F GALGAS_baseline_5F_instruction_5F_F::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                  const GALGAS_registerExpression & in_mRegisterExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_F::
baseline_5F_instruction_5F_F_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F::GALGAS_baseline_5F_instruction_5F_F (const cPtr_baseline_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F GALGAS_baseline_5F_instruction_5F_F::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                         const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                         const GALGAS_registerExpression & in_mRegisterExpression
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_F result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_F (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_F::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_F::setProperty_mFAinstruction (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    p->mProperty_mFAinstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_F::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_F::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_F::cPtr_baseline_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_F generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ("baseline_instruction_F",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F GALGAS_baseline_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_F result ;
  const GALGAS_baseline_5F_instruction_5F_F * p = (const GALGAS_baseline_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_F *> (p)) {
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

cPtr_baseline_5F_instruction_5F_FB::cPtr_baseline_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
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

ComparisonResult cPtr_baseline_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitOrientedOp.objectCompare (p->mProperty_mBitOrientedOp) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FB::GALGAS_baseline_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB GALGAS_baseline_5F_instruction_5F_FB::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                      const GALGAS_registerExpression & in_mRegisterExpression,
                      const GALGAS_bitNumberExpression & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FB::
baseline_5F_instruction_5F_FB_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                    const GALGAS_registerExpression & in_mRegisterExpression,
                                                    const GALGAS_bitNumberExpression & in_mBitNumber,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB::GALGAS_baseline_5F_instruction_5F_FB (const cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB GALGAS_baseline_5F_instruction_5F_FB::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                           const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                           const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                           const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FB result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FB (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_instruction_5F_FB::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FB::setProperty_mBitOrientedOp (const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_FB::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FB::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_baseline_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FB::setProperty_mBitNumber (const GALGAS_bitNumberExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FB::cPtr_baseline_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FB generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ("baseline_instruction_FB",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB GALGAS_baseline_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FB result ;
  const GALGAS_baseline_5F_instruction_5F_FB * p = (const GALGAS_baseline_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FB *> (p)) {
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

cPtr_baseline_5F_instruction_5F_CALL::cPtr_baseline_5F_instruction_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_CALL * p = (const cPtr_baseline_5F_instruction_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_CALL::objectCompare (const GALGAS_baseline_5F_instruction_5F_CALL & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_CALL::GALGAS_baseline_5F_instruction_5F_CALL (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_CALL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_CALL::
baseline_5F_instruction_5F_CALL_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL::GALGAS_baseline_5F_instruction_5F_CALL (const cPtr_baseline_5F_instruction_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_CALL (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_CALL * p = (cPtr_baseline_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_CALL::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_CALL * p = (cPtr_baseline_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_CALL::cPtr_baseline_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_CALL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ("baseline_instruction_CALL",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL result ;
  const GALGAS_baseline_5F_instruction_5F_CALL * p = (const GALGAS_baseline_5F_instruction_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_CALL *> (p)) {
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

cPtr_baseline_5F_instruction_5F_JSR::cPtr_baseline_5F_instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_JSR * p = (const cPtr_baseline_5F_instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_JSR::objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_JSR::GALGAS_baseline_5F_instruction_5F_JSR (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_JSR (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_JSR_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JSR::
baseline_5F_instruction_5F_JSR_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mTargetLabel,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR::GALGAS_baseline_5F_instruction_5F_JSR (const cPtr_baseline_5F_instruction_5F_JSR * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                             const GALGAS_lstring & in_mTargetLabel
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_JSR (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_JSR * p = (cPtr_baseline_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_JSR::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_JSR * p = (cPtr_baseline_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_JSR::cPtr_baseline_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel
                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_JSR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ("baseline_instruction_JSR",
                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JSR result ;
  const GALGAS_baseline_5F_instruction_5F_JSR * p = (const GALGAS_baseline_5F_instruction_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_JSR *> (p)) {
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

cPtr_baseline_5F_instruction_5F_GOTO::cPtr_baseline_5F_instruction_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_GOTO * p = (const cPtr_baseline_5F_instruction_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_GOTO::objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_GOTO::GALGAS_baseline_5F_instruction_5F_GOTO (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_GOTO::
baseline_5F_instruction_5F_GOTO_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO::GALGAS_baseline_5F_instruction_5F_GOTO (const cPtr_baseline_5F_instruction_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_GOTO (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_GOTO * p = (cPtr_baseline_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_GOTO::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_GOTO * p = (cPtr_baseline_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_GOTO::cPtr_baseline_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_GOTO generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ("baseline_instruction_GOTO",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_GOTO result ;
  const GALGAS_baseline_5F_instruction_5F_GOTO * p = (const GALGAS_baseline_5F_instruction_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_GOTO *> (p)) {
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

cPtr_baseline_5F_instruction_5F_JUMP::cPtr_baseline_5F_instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_JUMP * p = (const cPtr_baseline_5F_instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_JUMP::objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_JUMP::GALGAS_baseline_5F_instruction_5F_JUMP (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_JUMP_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JUMP::
baseline_5F_instruction_5F_JUMP_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP::GALGAS_baseline_5F_instruction_5F_JUMP (const cPtr_baseline_5F_instruction_5F_JUMP * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_JUMP (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_JUMP * p = (cPtr_baseline_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_JUMP::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_JUMP * p = (cPtr_baseline_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_JUMP::cPtr_baseline_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_JUMP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ("baseline_instruction_JUMP",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JUMP result ;
  const GALGAS_baseline_5F_instruction_5F_JUMP * p = (const GALGAS_baseline_5F_instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_JUMP *> (p)) {
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

cPtr_baseline_5F_instruction_5F_TRIS::cPtr_baseline_5F_instruction_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_TRIS::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_TRIS * p = (const cPtr_baseline_5F_instruction_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_TRIS::objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_TRIS::GALGAS_baseline_5F_instruction_5F_TRIS (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mOperand,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_TRIS * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_TRIS (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_TRIS_init_21__21_ (in_mInstructionLocation, in_mOperand, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_TRIS result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_TRIS::
baseline_5F_instruction_5F_TRIS_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mOperand,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS::GALGAS_baseline_5F_instruction_5F_TRIS (const cPtr_baseline_5F_instruction_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mOperand
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_TRIS result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_TRIS (in_mInstructionLocation, in_mOperand COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_TRIS::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_TRIS * p = (cPtr_baseline_5F_instruction_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_TRIS::setProperty_mOperand (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_TRIS * p = (cPtr_baseline_5F_instruction_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_TRIS::cPtr_baseline_5F_instruction_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mOperand
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_TRIS::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_TRIS generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ("baseline_instruction_TRIS",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_TRIS (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_TRIS result ;
  const GALGAS_baseline_5F_instruction_5F_TRIS * p = (const GALGAS_baseline_5F_instruction_5F_TRIS *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_TRIS *> (p)) {
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

cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mLowerBoundExpression (),
mProperty_mUpperBoundExpression (),
mProperty_mInstructionList (),
mProperty_mEndOfInstruction () {
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

ComparisonResult cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfInstruction.objectCompare (p->mProperty_mEndOfInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::
init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                              const GALGAS_lstring & in_mConstantName,
                              const GALGAS_immediatExpression & in_mLowerBoundExpression,
                              const GALGAS_immediatExpression & in_mUpperBoundExpression,
                              const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                              const GALGAS_location & in_mEndOfInstruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::
baseline_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mConstantName,
                                                                          const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                          const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                          const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                          const GALGAS_location & in_mEndOfInstruction,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstruction = in_mEndOfInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                       const GALGAS_lstring & in_mConstantName,
                                                                                                                       const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                                       const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                                       const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                                       const GALGAS_location & in_mEndOfInstruction
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setProperty_mConstantName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setProperty_mLowerBoundExpression (const GALGAS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setProperty_mUpperBoundExpression (const GALGAS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setProperty_mInstructionList (const GALGAS_baseline_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mEndOfInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mEndOfInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setProperty_mEndOfInstruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mEndOfInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_STATIC_REPEAT class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_lstring & in_mConstantName,
                                                                                                    const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                    const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                    const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                    const GALGAS_location & in_mEndOfInstruction
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mLowerBoundExpression, mProperty_mUpperBoundExpression, mProperty_mInstructionList, mProperty_mEndOfInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_STATIC_REPEAT generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ("baseline_instruction_STATIC_REPEAT",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT *> (p)) {
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

cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
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

ComparisonResult cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_baseline_5F_instruction & in_mInstruction,
                          const GALGAS_bool & in_mSkipIfSet,
                          const GALGAS_registerExpression & in_mRegisterExpression,
                          const GALGAS_bitNumberExpression & in_mBitNumber,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::
baseline_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                   const GALGAS_bool & in_mSkipIfSet,
                                                                   const GALGAS_registerExpression & in_mRegisterExpression,
                                                                   const GALGAS_bitNumberExpression & in_mBitNumber,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                 const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                                                 const GALGAS_bool & in_mSkipIfSet,
                                                                                                                 const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                 const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (in_mInstructionLocation, in_mInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::setProperty_mSkipIfSet (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::setProperty_mBitNumber (const GALGAS_bitNumberExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                              const GALGAS_bool & in_mSkipIfSet,
                                                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_IF_BitTest generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ("baseline_instruction_IF_BitTest",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getBaseCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_getBaseCode (GALGAS_uint & outArgument_outBaseCode,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outBaseCode = GALGAS_uint (uint32_t (7168U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outBaseCode = GALGAS_uint (uint32_t (6144U)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getBaseCode  (out_outBaseCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getMnemonic'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_getMnemonic (GALGAS_string & outArgument_outMnemonic,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outMnemonic = GALGAS_string ("BTFSS") ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSC") ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getMnemonic  (out_outMnemonic, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mIncrement (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
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

ComparisonResult cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_baseline_5F_instruction & in_mInstruction,
                          const GALGAS_bool & in_mIncrement,
                          const GALGAS_registerExpression & in_mRegisterExpression,
                          const GALGAS_bool & in_m_5F_W_5F_isDestination,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mIncrement, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::
baseline_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                  const GALGAS_bool & in_mIncrement,
                                                                  const GALGAS_registerExpression & in_mRegisterExpression,
                                                                  const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                               const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                                               const GALGAS_bool & in_mIncrement,
                                                                                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                               const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (in_mInstructionLocation, in_mInstruction, in_mIncrement, in_mRegisterExpression, in_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::setProperty_mIncrement (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                            const GALGAS_bool & in_mIncrement,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mIncrement, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_IF_IncDec generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ("baseline_instruction_IF_IncDec",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec *> (p)) {
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

cPtr_baseline_5F_incDecRegisterInCondition::cPtr_baseline_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
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

ComparisonResult cPtr_baseline_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_baseline_5F_incDecRegisterInCondition::GALGAS_baseline_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition GALGAS_baseline_5F_incDecRegisterInCondition::
init_21__21__21__21_ (const GALGAS_registerExpression & in_mRegisterExpression,
                      const GALGAS_bool & in_mIncrement,
                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                      const GALGAS_bool & in_mBranchIfZero,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_incDecRegisterInCondition_init_21__21__21__21_ (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero, inCompiler) ;
  const GALGAS_baseline_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_incDecRegisterInCondition::
baseline_5F_incDecRegisterInCondition_init_21__21__21__21_ (const GALGAS_registerExpression & in_mRegisterExpression,
                                                            const GALGAS_bool & in_mIncrement,
                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                            const GALGAS_bool & in_mBranchIfZero,
                                                            Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition::GALGAS_baseline_5F_incDecRegisterInCondition (const cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition GALGAS_baseline_5F_incDecRegisterInCondition::class_func_new (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                           const GALGAS_bool & in_mIncrement,
                                                                                                           const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                                           const GALGAS_bool & in_mBranchIfZero
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_incDecRegisterInCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_incDecRegisterInCondition (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_incDecRegisterInCondition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setProperty_mIncrement (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setProperty_mBranchIfZero (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_incDecRegisterInCondition::cPtr_baseline_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
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

acPtr_class * cPtr_baseline_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_incDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_incDecRegisterInCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ("baseline_incDecRegisterInCondition",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition GALGAS_baseline_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_incDecRegisterInCondition result ;
  const GALGAS_baseline_5F_incDecRegisterInCondition * p = (const GALGAS_baseline_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_incDecRegisterInCondition *> (p)) {
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

cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
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

ComparisonResult cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
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

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::
init_21__21_ (const GALGAS_registerExpression & in_mRegisterExpression,
              const GALGAS_bitNumberExpression & in_mBitNumber,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::
baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                         const GALGAS_bitNumberExpression & in_mBitNumber,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::class_func_new (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                                     const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (in_mRegisterExpression, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setProperty_mBitNumber (const GALGAS_bitNumberExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_bitTest_in_structured_if_condition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
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

acPtr_class * cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_bitTest_in_structured_if_condition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("baseline_bitTest_in_structured_if_condition",
                                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bitTest_in_structured_if_condition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_model::GALGAS_baseline_5F_model (void) :
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

GALGAS_baseline_5F_model::~ GALGAS_baseline_5F_model (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_baseline_5F_model GALGAS_baseline_5F_model::init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mProgramName,
                                                                                             const GALGAS_lstring & in_mDeviceName,
                                                                                             const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                                                                             const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                                                                             const GALGAS_lstringlist & in_mUnusedRegisterList,
                                                                                             const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                                                                             const GALGAS_baseline_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                                                                             const GALGAS_lstringlist & in_mUnusedRoutineList,
                                                                                             const GALGAS_location & in_mEndOfProgram,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_model result ;
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

void GALGAS_baseline_5F_model::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_model::GALGAS_baseline_5F_model (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_configDefinitionList & inOperand2,
                                                    const GALGAS_ramDefinitionList & inOperand3,
                                                    const GALGAS_lstringlist & inOperand4,
                                                    const GALGAS_constantDefinitionList & inOperand5,
                                                    const GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                    const GALGAS_lstringlist & inOperand7,
                                                    const GALGAS_location & inOperand8) :
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

GALGAS_baseline_5F_model GALGAS_baseline_5F_model::class_func_new (const GALGAS_lstring & in_mProgramName,
                                                                   const GALGAS_lstring & in_mDeviceName,
                                                                   const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                                                   const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                                                   const GALGAS_lstringlist & in_mUnusedRegisterList,
                                                                   const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                                                   const GALGAS_baseline_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                                                   const GALGAS_lstringlist & in_mUnusedRoutineList,
                                                                   const GALGAS_location & in_mEndOfProgram,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_model result ;
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

ComparisonResult GALGAS_baseline_5F_model::objectCompare (const GALGAS_baseline_5F_model & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mProgramName.objectCompare (inOperand.mProperty_mProgramName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDeviceName.objectCompare (inOperand.mProperty_mDeviceName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConfigDefinitionList.objectCompare (inOperand.mProperty_mConfigDefinitionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRamDefinitionList.objectCompare (inOperand.mProperty_mRamDefinitionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mUnusedRegisterList.objectCompare (inOperand.mProperty_mUnusedRegisterList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantDefinitionList.objectCompare (inOperand.mProperty_mConstantDefinitionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRoutineDefinitionList.objectCompare (inOperand.mProperty_mRoutineDefinitionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mUnusedRoutineList.objectCompare (inOperand.mProperty_mUnusedRoutineList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfProgram.objectCompare (inOperand.mProperty_mEndOfProgram) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_model::isValid (void) const {
  return mProperty_mProgramName.isValid () && mProperty_mDeviceName.isValid () && mProperty_mConfigDefinitionList.isValid () && mProperty_mRamDefinitionList.isValid () && mProperty_mUnusedRegisterList.isValid () && mProperty_mConstantDefinitionList.isValid () && mProperty_mRoutineDefinitionList.isValid () && mProperty_mUnusedRoutineList.isValid () && mProperty_mEndOfProgram.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_model::drop (void) {
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

void GALGAS_baseline_5F_model::description (String & ioString,
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
//
//     @baseline_model generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_model ("baseline_model",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_model::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_model ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_model::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_model (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_model GALGAS_baseline_5F_model::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_model result ;
  const GALGAS_baseline_5F_model * p = (const GALGAS_baseline_5F_model *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_model *> (p)) {
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

cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::
init_21_ (const GALGAS_lstring & in_mLabel,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_LABEL_init_21_ (in_mLabel, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::
baseline_5F_intermediate_5F_pseudo_5F_LABEL_init_21_ (const GALGAS_lstring & in_mLabel,
                                                      Compiler * /* inCompiler */) {
  mProperty_mLabel = in_mLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (const GALGAS_lstring & in_mLabel
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (in_mLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::setProperty_mLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
    p->mProperty_mLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (mProperty_mLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_LABEL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ("baseline_intermediate_pseudo_LABEL",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (p)) {
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

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsRegular.objectCompare (p->mProperty_mIsRegular) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::
init_21__21_ (const GALGAS_lstring & in_mRoutineName,
              const GALGAS_bool & in_mIsRegular,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_init_21__21_ (in_mRoutineName, in_mIsRegular, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::
baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_init_21__21_ (const GALGAS_lstring & in_mRoutineName,
                                                                     const GALGAS_bool & in_mIsRegular,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::class_func_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                                                             const GALGAS_bool & in_mIsRegular
                                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (in_mRoutineName, in_mIsRegular COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::setProperty_mRoutineName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::readProperty_mIsRegular (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    return p->mProperty_mIsRegular ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::setProperty_mIsRegular (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    p->mProperty_mIsRegular = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                                          const GALGAS_bool & in_mIsRegular
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (mProperty_mRoutineName, mProperty_mIsRegular COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_BEGIN_ROUTINE generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ("baseline_intermediate_pseudo_BEGIN_ROUTINE",
                                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *> (p)) {
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

cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mPage () {
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPage.objectCompare (p->mProperty_mPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::
init_21__21_ (const GALGAS_lstring & in_mRoutineName,
              const GALGAS_uint & in_mPage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_init_21__21_ (in_mRoutineName, in_mPage, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::
baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_init_21__21_ (const GALGAS_lstring & in_mRoutineName,
                                                                   const GALGAS_uint & in_mPage,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::class_func_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                                                         const GALGAS_uint & in_mPage
                                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (in_mRoutineName, in_mPage COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::setProperty_mRoutineName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::readProperty_mPage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    return p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::setProperty_mPage (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    p->mProperty_mPage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_END_ROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                                      const GALGAS_uint & in_mPage
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (mProperty_mRoutineName, mProperty_mPage COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_END_ROUTINE generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ("baseline_intermediate_pseudo_END_ROUTINE",
                                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *> (p)) {
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

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_intermediate_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_GOTO * p = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_GOTO::objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_GOTO::GALGAS_baseline_5F_intermediate_5F_GOTO (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::
baseline_5F_intermediate_5F_GOTO_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO::GALGAS_baseline_5F_intermediate_5F_GOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                 const GALGAS_lstring & in_mTargetLabel
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_GOTO (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_GOTO::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_GOTO generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ("baseline_intermediate_GOTO",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_GOTO result ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO * p = (const GALGAS_baseline_5F_intermediate_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_GOTO *> (p)) {
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

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_JUMP * p = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCurrentPage.objectCompare (p->mProperty_mCurrentPage) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetPage.objectCompare (p->mProperty_mTargetPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_JUMP::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_JUMP::GALGAS_baseline_5F_intermediate_5F_JUMP (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP GALGAS_baseline_5F_intermediate_5F_JUMP::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_lstring & in_mTargetLabel,
                      const GALGAS_uint & in_mCurrentPage,
                      const GALGAS_uint & in_mTargetPage,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_JUMP_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::
baseline_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_lstring & in_mTargetLabel,
                                                       const GALGAS_uint & in_mCurrentPage,
                                                       const GALGAS_uint & in_mTargetPage,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP::GALGAS_baseline_5F_intermediate_5F_JUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP GALGAS_baseline_5F_intermediate_5F_JUMP::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                 const GALGAS_lstring & in_mTargetLabel,
                                                                                                 const GALGAS_uint & in_mCurrentPage,
                                                                                                 const GALGAS_uint & in_mTargetPage
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_JUMP (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JUMP::readProperty_mCurrentPage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mCurrentPage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP::setProperty_mCurrentPage (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    p->mProperty_mCurrentPage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JUMP::readProperty_mTargetPage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetPage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP::setProperty_mTargetPage (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    p->mProperty_mTargetPage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_uint & in_mCurrentPage,
                                                                              const GALGAS_uint & in_mTargetPage
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mCurrentPage, mProperty_mTargetPage COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_JUMP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ("baseline_intermediate_JUMP",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP GALGAS_baseline_5F_intermediate_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JUMP result ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP * p = (const GALGAS_baseline_5F_intermediate_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_JUMP *> (p)) {
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

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_intermediate_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_CALL * p = (const cPtr_baseline_5F_intermediate_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_CALL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_CALL::GALGAS_baseline_5F_intermediate_5F_CALL (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_CALL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::
baseline_5F_intermediate_5F_CALL_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL::GALGAS_baseline_5F_intermediate_5F_CALL (const cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                 const GALGAS_lstring & in_mTargetLabel
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_CALL (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_CALL::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_CALL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ("baseline_intermediate_CALL",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_CALL result ;
  const GALGAS_baseline_5F_intermediate_5F_CALL * p = (const GALGAS_baseline_5F_intermediate_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_CALL *> (p)) {
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

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_JSR * p = (const cPtr_baseline_5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCurrentPage.objectCompare (p->mProperty_mCurrentPage) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetPage.objectCompare (p->mProperty_mTargetPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_JSR::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_JSR::GALGAS_baseline_5F_intermediate_5F_JSR (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR GALGAS_baseline_5F_intermediate_5F_JSR::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_lstring & in_mTargetLabel,
                      const GALGAS_uint & in_mCurrentPage,
                      const GALGAS_uint & in_mTargetPage,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_JSR (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_JSR_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::
baseline_5F_intermediate_5F_JSR_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mTargetLabel,
                                                      const GALGAS_uint & in_mCurrentPage,
                                                      const GALGAS_uint & in_mTargetPage,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR::GALGAS_baseline_5F_intermediate_5F_JSR (const cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR GALGAS_baseline_5F_intermediate_5F_JSR::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mTargetLabel,
                                                                                               const GALGAS_uint & in_mCurrentPage,
                                                                                               const GALGAS_uint & in_mTargetPage
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_JSR (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JSR::readProperty_mCurrentPage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mCurrentPage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR::setProperty_mCurrentPage (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    p->mProperty_mCurrentPage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JSR::readProperty_mTargetPage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetPage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR::setProperty_mTargetPage (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetPage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel,
                                                                            const GALGAS_uint & in_mCurrentPage,
                                                                            const GALGAS_uint & in_mTargetPage
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mCurrentPage, mProperty_mTargetPage COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_JSR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ("baseline_intermediate_JSR",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR GALGAS_baseline_5F_intermediate_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JSR result ;
  const GALGAS_baseline_5F_intermediate_5F_JSR * p = (const GALGAS_baseline_5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_JSR *> (p)) {
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

cPtr_baseline_5F_intermediate_5F_TRIS::cPtr_baseline_5F_intermediate_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOperand (),
mProperty_mOpcode () {
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_TRIS * p = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOpcode.objectCompare (p->mProperty_mOpcode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_TRIS::objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_TRIS::GALGAS_baseline_5F_intermediate_5F_TRIS (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS GALGAS_baseline_5F_intermediate_5F_TRIS::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_lstring & in_mOperand,
                  const GALGAS_uint & in_mOpcode,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_TRIS * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_TRIS (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_TRIS_init_21__21__21_ (in_mInstructionLocation, in_mOperand, in_mOpcode, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::
baseline_5F_intermediate_5F_TRIS_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_lstring & in_mOperand,
                                                   const GALGAS_uint & in_mOpcode,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mOpcode = in_mOpcode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS::GALGAS_baseline_5F_intermediate_5F_TRIS (const cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS GALGAS_baseline_5F_intermediate_5F_TRIS::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                 const GALGAS_lstring & in_mOperand,
                                                                                                 const GALGAS_uint & in_mOpcode
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_TRIS result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_TRIS (in_mInstructionLocation, in_mOperand, in_mOpcode COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_TRIS::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_TRIS::setProperty_mOperand (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_TRIS::readProperty_mOpcode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    return p->mProperty_mOpcode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_TRIS::setProperty_mOpcode (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    p->mProperty_mOpcode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_TRIS::cPtr_baseline_5F_intermediate_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mOperand,
                                                                              const GALGAS_uint & in_mOpcode
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_TRIS::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand, mProperty_mOpcode COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_TRIS generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ("baseline_intermediate_TRIS",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_TRIS (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS GALGAS_baseline_5F_intermediate_5F_TRIS::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_TRIS result ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS * p = (const GALGAS_baseline_5F_intermediate_5F_TRIS *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_TRIS *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_TRIS", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveBaselineAccess'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_resolveBaselineAccess (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                            GALGAS_baseline_5F_intermediate_5F_registerExpression & outArgument_outIntermediateRegisterDescription,
                                                            GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_offset_705 ;
  const GALGAS_registerExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_705, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 21)) ;
  const GALGAS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 22)) ;
  const GALGAS_registerExpression temp_2 = this ;
  GALGAS_string var_assemblyString_820 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_offset_705.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_assemblyString_820.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_705.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)).getter_hexString (SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)) ;
    }
  }
  GALGAS_uintlist var_registerAddressList_1037 ;
  GALGAS_registerProtection var_protection_1102 ;
  const GALGAS_registerExpression temp_4 = this ;
  GALGAS_uint joker_1061 ; // Joker input parameter
  GALGAS_string joker_1090 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_1037, joker_1061, outArgument_outBitSliceTable, joker_1090, var_protection_1102, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 29)) ;
  const GALGAS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), GALGAS_bool (true), var_protection_1102, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 37)) ;
  GALGAS_uint var_registerAddress_1250 = GALGAS_uint (uint32_t (0U)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_registerAddressList_1037.getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 40)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_bool var_found_1326 = GALGAS_bool (false) ;
      cEnumerator_uintlist enumerator_1349 (var_registerAddressList_1037, EnumerationOrder::up) ;
      bool bool_7 = var_found_1326.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 42)).isValidAndTrue () ;
      if (enumerator_1349.hasCurrentObject () && bool_7) {
        while (enumerator_1349.hasCurrentObject () && bool_7) {
          var_registerAddress_1250 = enumerator_1349.current_mValue (HERE) ;
          var_found_1326 = GALGAS_bool (ComparisonKind::lowerOrEqual, enumerator_1349.current_mValue (HERE).objectCompare (GALGAS_uint (uint32_t (31U)))) ;
          enumerator_1349.gotoNextObject () ;
          if (enumerator_1349.hasCurrentObject ()) {
            bool_7 = var_found_1326.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 42)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_found_1326.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 46)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_registerExpression temp_9 = this ;
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("the register cannot be accessed directly; use indirect addressing throught FSR register"), fixItArray10  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 47)) ;
        }
      }
    }
  }
  outArgument_outIntermediateRegisterDescription = GALGAS_baseline_5F_intermediate_5F_registerExpression::init_21__21_ (var_assemblyString_820, var_registerAddress_1250.add_operation (var_offset_705.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 53)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveBaselineAccess (cPtr_registerExpression * inObject,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
                                                GALGAS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                                GALGAS_bitSliceTable & out_outBitSliceTable,
                                                GALGAS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outIntermediateRegisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_resolveBaselineAccess  (constin_inRegisterTable, constin_inConstantMap, out_outIntermediateRegisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_GOTO optimizeGOTO'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_optimizeGOTO (const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GALGAS_uint constinArgument_inLineIndex,
                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                 GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_reachedLabelSet_10622 ;
  {
  GALGAS_baseline_5F_intermediate_5F_instruction joker_10614 ; // Joker input parameter
  routine_findBaselineFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 265)), ioArgument_ioGeneratedInstructionList, joker_10614, var_reachedLabelSet_10622, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 265)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_GOTO temp_1 = this ;
    test_0 = var_reachedLabelSet_10622.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 266)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 267)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)).add_operation (GALGAS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_line_11034 ;
    const GALGAS_baseline_5F_intermediate_5F_GOTO temp_2 = this ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_11034, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 271)) ;
    GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_11170 ;
    {
    routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_11034.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 273)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_11170, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 273)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_11249 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_11170.ptr ())) ;
      if (nullptr == var_literalOp_11249.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (ComparisonKind::equal, var_literalOp_11249.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 278)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_11249, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 279)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 284)).add_operation (GALGAS_string (": GOTO branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 284)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_baseline_5F_intermediate_5F_GOTO var_goto_11813 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (var_firstInstruction_11170.ptr ())) ;
        if (nullptr == var_goto_11813.ptr ()) {
          test_5 = kBoolFalse ;
        }
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            const GALGAS_baseline_5F_intermediate_5F_GOTO temp_7 = this ;
            test_6 = GALGAS_bool (ComparisonKind::notEqual, temp_7.readProperty_mTargetLabel ().objectCompare (var_goto_11813.readProperty_mTargetLabel ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              const GALGAS_baseline_5F_intermediate_5F_GOTO temp_8 = this ;
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_8.readProperty_mInstructionLocation (), var_goto_11813.readProperty_mTargetLabel (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)) ;
              }
              ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
              const GALGAS_baseline_5F_intermediate_5F_GOTO temp_9 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GALGAS_string (": GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (temp_9.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GALGAS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (var_goto_11813.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GALGAS_string (" replaced by GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (var_goto_11813.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)) ;
            }
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    inObject->method_optimizeGOTO  (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JUMP optimizeJUMP'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_optimizeJUMP (const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GALGAS_uint constinArgument_inLineIndex,
                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                 GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_line_12906 ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_12906, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 312)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_13085 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_12906.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 315)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_13085, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 314)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_13162 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_13085.ptr ())) ;
    if (nullptr == var_literalOp_13162.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::equal, var_literalOp_13162.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 323)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_13162, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 324)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 329)).add_operation (GALGAS_string (": JUMP branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 329)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_baseline_5F_intermediate_5F_GOTO var_goto_13704 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (var_firstInstruction_13085.ptr ())) ;
      if (nullptr == var_goto_13704.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_5 = this ;
          test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mTargetLabel ().objectCompare (var_goto_13704.readProperty_mTargetLabel ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_6 = this ;
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_7 = this ;
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_8 = this ;
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_goto_13704.readProperty_mTargetLabel (), temp_7.readProperty_mCurrentPage (), temp_8.readProperty_mTargetPage (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 334)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_9 = this ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (temp_9.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (GALGAS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (var_goto_13704.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 344)).add_operation (GALGAS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 344)).add_operation (var_goto_13704.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GALGAS_baseline_5F_intermediate_5F_JUMP var_jump_14364 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JUMP *> (var_firstInstruction_13085.ptr ())) ;
        if (nullptr == var_jump_14364.ptr ()) {
          test_10 = kBoolFalse ;
        }
        if (kBoolTrue == test_10) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_12 = this ;
            test_11 = GALGAS_bool (ComparisonKind::notEqual, temp_12.readProperty_mTargetLabel ().objectCompare (var_jump_14364.readProperty_mTargetLabel ())).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              const GALGAS_baseline_5F_intermediate_5F_JUMP temp_13 = this ;
              const GALGAS_baseline_5F_intermediate_5F_JUMP temp_14 = this ;
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_13.readProperty_mInstructionLocation (), var_jump_14364.readProperty_mTargetLabel (), temp_14.readProperty_mCurrentPage (), var_jump_14364.readProperty_mTargetPage (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 350)) ;
              }
              ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
              const GALGAS_baseline_5F_intermediate_5F_JUMP temp_15 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (temp_15.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (GALGAS_string (" branching to JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (var_jump_14364.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 360)).add_operation (GALGAS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 360)).add_operation (var_jump_14364.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 361)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)) ;
            }
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    inObject->method_optimizeJUMP  (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_CALL optimizeCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_optimizeCALL (const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GALGAS_uint constinArgument_inLineIndex,
                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                 GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_line_15492 ;
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_15492, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 376)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_15671 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_15492.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 379)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_15671, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 378)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_15748 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_15671.ptr ())) ;
    if (nullptr == var_literalOp_15748.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::equal, var_literalOp_15748.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 387)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          const GALGAS_baseline_5F_intermediate_5F_CALL temp_3 = this ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 391)), var_literalOp_15748.readProperty_mLiteralValue (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 388)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_CALL temp_4 = this ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (GALGAS_string (": CALL "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (GALGAS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (var_literalOp_15748.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 397)).add_operation (GALGAS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 397)).add_operation (var_literalOp_15748.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 398)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeCALL (cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_CALL) ;
    inObject->method_optimizeCALL  (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JSR optimizeJSR'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_optimizeJSR (const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                               const GALGAS_uint constinArgument_inLineIndex,
                                                               GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                               GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_line_17000 ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_17000, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 413)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_17179 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_17000.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 416)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_17179, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 415)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_17256 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_17179.ptr ())) ;
    if (nullptr == var_literalOp_17256.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::equal, var_literalOp_17256.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 424)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          const GALGAS_baseline_5F_intermediate_5F_JSR temp_3 = this ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 428)), var_literalOp_17256.readProperty_mLiteralValue (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 425)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_JSR temp_4 = this ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (GALGAS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (var_literalOp_17256.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 434)).add_operation (GALGAS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 434)).add_operation (var_literalOp_17256.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 435)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJSR (cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_JSR) ;
    inObject->method_optimizeJSR  (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_optimizeBEGIN_5F_ROUTINE (const GALGAS_uint constinArgument_inLineIndex,
                                                                                                   GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction var_nextInstruction_18570 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 451)) ;
  GALGAS_bool var_reachable_18701 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL var__18728 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (var_nextInstruction_18570.ptr ())) ;
    if (nullptr == var__18728.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      var_reachable_18701 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_reachable_18701.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 461)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 462)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 467)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 467)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBEGIN_5F_ROUTINE (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                   const GALGAS_uint constin_inLineIndex,
                                                   GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                   GALGAS_string & io_ioListFileContents,
                                                   GALGAS_bool & io_ioOptimizationsDone,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    inObject->method_optimizeBEGIN_5F_ROUTINE  (constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
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

ComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsRegular.objectCompare (p->mProperty_mIsRegular) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::
init_21__21_ (const GALGAS_lstring & in_mRoutineName,
              const GALGAS_bool & in_mIsRegular,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_init_21__21_ (in_mRoutineName, in_mIsRegular, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::
baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_init_21__21_ (const GALGAS_lstring & in_mRoutineName,
                                                               const GALGAS_bool & in_mIsRegular,
                                                               Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::class_func_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                                                 const GALGAS_bool & in_mIsRegular
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (in_mRoutineName, in_mIsRegular COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::setProperty_mRoutineName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::readProperty_mIsRegular (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    return p->mProperty_mIsRegular ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::setProperty_mIsRegular (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    p->mProperty_mIsRegular = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_BEGINOFROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                              const GALGAS_bool & in_mIsRegular
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
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

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (mProperty_mRoutineName, mProperty_mIsRegular COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_BEGINOFROUTINE generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ("baseline_assembly_pseudo_BEGINOFROUTINE",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *> (p)) {
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

cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mPage () {
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

ComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPage.objectCompare (p->mProperty_mPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::
init_21__21_ (const GALGAS_lstring & in_mRoutineName,
              const GALGAS_uint & in_mPage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_init_21__21_ (in_mRoutineName, in_mPage, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::
baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_init_21__21_ (const GALGAS_lstring & in_mRoutineName,
                                                             const GALGAS_uint & in_mPage,
                                                             Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::class_func_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                                             const GALGAS_uint & in_mPage
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (in_mRoutineName, in_mPage COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::setProperty_mRoutineName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::readProperty_mPage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    return p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::setProperty_mPage (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    p->mProperty_mPage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_ENDOFROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                          const GALGAS_uint & in_mPage
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
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

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (mProperty_mRoutineName, mProperty_mPage COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_ENDOFROUTINE generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ("baseline_assembly_pseudo_ENDOFROUTINE",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *> (p)) {
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

cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::
init_21_ (const GALGAS_lstring & in_mLabel,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_LABEL_init_21_ (in_mLabel, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::
baseline_5F_assembly_5F_pseudo_5F_LABEL_init_21_ (const GALGAS_lstring & in_mLabel,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLabel = in_mLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::class_func_new (const GALGAS_lstring & in_mLabel
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (in_mLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::setProperty_mLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
    p->mProperty_mLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
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

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (mProperty_mLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_LABEL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ("baseline_assembly_pseudo_LABEL",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL *> (p)) {
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

cPtr_baseline_5F_assembly_5F_GOTO::cPtr_baseline_5F_assembly_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_assembly_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_assembly_5F_GOTO * p = (const cPtr_baseline_5F_assembly_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_assembly_5F_GOTO::objectCompare (const GALGAS_baseline_5F_assembly_5F_GOTO & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_GOTO::GALGAS_baseline_5F_assembly_5F_GOTO (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::
baseline_5F_assembly_5F_GOTO_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_lstring & in_mTargetLabel,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO::GALGAS_baseline_5F_assembly_5F_GOTO (const cPtr_baseline_5F_assembly_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                         const GALGAS_lstring & in_mTargetLabel
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_GOTO (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_GOTO * p = (cPtr_baseline_5F_assembly_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_GOTO::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_GOTO * p = (cPtr_baseline_5F_assembly_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_GOTO::cPtr_baseline_5F_assembly_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTargetLabel
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_assembly_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_GOTO generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ("baseline_assembly_GOTO",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_GOTO result ;
  const GALGAS_baseline_5F_assembly_5F_GOTO * p = (const GALGAS_baseline_5F_assembly_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_GOTO *> (p)) {
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

cPtr_baseline_5F_assembly_5F_CALL::cPtr_baseline_5F_assembly_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_assembly_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_assembly_5F_CALL * p = (const cPtr_baseline_5F_assembly_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_assembly_5F_CALL::objectCompare (const GALGAS_baseline_5F_assembly_5F_CALL & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_CALL::GALGAS_baseline_5F_assembly_5F_CALL (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_CALL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::
baseline_5F_assembly_5F_CALL_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_lstring & in_mTargetLabel,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL::GALGAS_baseline_5F_assembly_5F_CALL (const cPtr_baseline_5F_assembly_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                         const GALGAS_lstring & in_mTargetLabel
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_CALL (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_CALL * p = (cPtr_baseline_5F_assembly_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_CALL::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_CALL * p = (cPtr_baseline_5F_assembly_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_CALL::cPtr_baseline_5F_assembly_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTargetLabel
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_assembly_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_CALL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ("baseline_assembly_CALL",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_CALL result ;
  const GALGAS_baseline_5F_assembly_5F_CALL * p = (const GALGAS_baseline_5F_assembly_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_CALL *> (p)) {
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

cPtr_baseline_5F_assembly_5F_TRIS::cPtr_baseline_5F_assembly_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOperand (),
mProperty_mOpcode () {
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

ComparisonResult cPtr_baseline_5F_assembly_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_assembly_5F_TRIS * p = (const cPtr_baseline_5F_assembly_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOpcode.objectCompare (p->mProperty_mOpcode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_assembly_5F_TRIS::objectCompare (const GALGAS_baseline_5F_assembly_5F_TRIS & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_TRIS::GALGAS_baseline_5F_assembly_5F_TRIS (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS GALGAS_baseline_5F_assembly_5F_TRIS::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_lstring & in_mOperand,
                  const GALGAS_uint & in_mOpcode,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_TRIS * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_TRIS (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_TRIS_init_21__21__21_ (in_mInstructionLocation, in_mOperand, in_mOpcode, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_TRIS result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::
baseline_5F_assembly_5F_TRIS_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mOperand,
                                               const GALGAS_uint & in_mOpcode,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mOpcode = in_mOpcode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS::GALGAS_baseline_5F_assembly_5F_TRIS (const cPtr_baseline_5F_assembly_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS GALGAS_baseline_5F_assembly_5F_TRIS::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                         const GALGAS_lstring & in_mOperand,
                                                                                         const GALGAS_uint & in_mOpcode
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_TRIS result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_TRIS (in_mInstructionLocation, in_mOperand, in_mOpcode COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_TRIS::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_TRIS::setProperty_mOperand (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_TRIS::readProperty_mOpcode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    return p->mProperty_mOpcode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_TRIS::setProperty_mOpcode (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    p->mProperty_mOpcode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_TRIS::cPtr_baseline_5F_assembly_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mOperand,
                                                                      const GALGAS_uint & in_mOpcode
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_baseline_5F_assembly_5F_TRIS::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand, mProperty_mOpcode COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_TRIS generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ("baseline_assembly_TRIS",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_TRIS (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS GALGAS_baseline_5F_assembly_5F_TRIS::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_TRIS result ;
  const GALGAS_baseline_5F_assembly_5F_TRIS * p = (const GALGAS_baseline_5F_assembly_5F_TRIS *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_TRIS *> (p)) {
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

cPtr_midrange_5F_instruction_5F_banksel_5F_register::cPtr_midrange_5F_instruction_5F_banksel_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mWarningOnUselessBanksel () {
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

ComparisonResult cPtr_midrange_5F_instruction_5F_banksel_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (const cPtr_midrange_5F_instruction_5F_banksel_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWarningOnUselessBanksel.objectCompare (p->mProperty_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_banksel_5F_register::objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_banksel_5F_register::GALGAS_midrange_5F_instruction_5F_banksel_5F_register (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register GALGAS_midrange_5F_instruction_5F_banksel_5F_register::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_registerExpression & in_mRegister,
                  const GALGAS_bool & in_mWarningOnUselessBanksel,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_banksel_5F_register * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_banksel_5F_register (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_banksel_5F_register_init_21__21__21_ (in_mInstructionLocation, in_mRegister, in_mWarningOnUselessBanksel, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::
midrange_5F_instruction_5F_banksel_5F_register_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                 const GALGAS_registerExpression & in_mRegister,
                                                                 const GALGAS_bool & in_mWarningOnUselessBanksel,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register::GALGAS_midrange_5F_instruction_5F_banksel_5F_register (const cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register GALGAS_midrange_5F_instruction_5F_banksel_5F_register::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                             const GALGAS_registerExpression & in_mRegister,
                                                                                                                             const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel_5F_register result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register (in_mInstructionLocation, in_mRegister, in_mWarningOnUselessBanksel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_banksel_5F_register::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_banksel_5F_register::setProperty_mRegister (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    p->mProperty_mRegister = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_banksel_5F_register::readProperty_mWarningOnUselessBanksel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_banksel_5F_register::setProperty_mWarningOnUselessBanksel (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    p->mProperty_mWarningOnUselessBanksel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_banksel_register class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel_5F_register::cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                          const GALGAS_registerExpression & in_mRegister,
                                                                                                          const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_banksel_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_banksel_5F_register (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_banksel_register generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ("midrange_instruction_banksel_register",
                                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register GALGAS_midrange_5F_instruction_5F_banksel_5F_register::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel_5F_register result ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register * p = (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_banksel_5F_register *> (p)) {
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

cPtr_midrange_5F_instruction_5F_savebank::cPtr_midrange_5F_instruction_5F_savebank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mInstructionList (),
mProperty_mEndOfSaveBankInstruction () {
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

ComparisonResult cPtr_midrange_5F_instruction_5F_savebank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_savebank * p = (const cPtr_midrange_5F_instruction_5F_savebank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfSaveBankInstruction.objectCompare (p->mProperty_mEndOfSaveBankInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_savebank::objectCompare (const GALGAS_midrange_5F_instruction_5F_savebank & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_savebank::GALGAS_midrange_5F_instruction_5F_savebank (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank GALGAS_midrange_5F_instruction_5F_savebank::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_registerExpression & in_mRegister,
                      const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                      const GALGAS_location & in_mEndOfSaveBankInstruction,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_savebank * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_savebank (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_savebank_init_21__21__21__21_ (in_mInstructionLocation, in_mRegister, in_mInstructionList, in_mEndOfSaveBankInstruction, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_savebank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_savebank::
midrange_5F_instruction_5F_savebank_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_registerExpression & in_mRegister,
                                                          const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                          const GALGAS_location & in_mEndOfSaveBankInstruction,
                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfSaveBankInstruction = in_mEndOfSaveBankInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank::GALGAS_midrange_5F_instruction_5F_savebank (const cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_savebank) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank GALGAS_midrange_5F_instruction_5F_savebank::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                       const GALGAS_registerExpression & in_mRegister,
                                                                                                       const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                       const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_savebank result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_savebank (in_mInstructionLocation, in_mRegister, in_mInstructionList, in_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_savebank::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_savebank::setProperty_mRegister (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    p->mProperty_mRegister = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_savebank::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_savebank::setProperty_mInstructionList (const GALGAS_midrange_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_instruction_5F_savebank::readProperty_mEndOfSaveBankInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mEndOfSaveBankInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_savebank::setProperty_mEndOfSaveBankInstruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    p->mProperty_mEndOfSaveBankInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_savebank class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_savebank::cPtr_midrange_5F_instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_registerExpression & in_mRegister,
                                                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                    const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_savebank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_savebank (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mInstructionList, mProperty_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_savebank generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ("midrange_instruction_savebank",
                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank GALGAS_midrange_5F_instruction_5F_savebank::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_savebank result ;
  const GALGAS_midrange_5F_instruction_5F_savebank * p = (const GALGAS_midrange_5F_instruction_5F_savebank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_savebank *> (p)) {
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

cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mLowerBoundExpression (),
mProperty_mUpperBoundExpression (),
mProperty_mInstructionList (),
mProperty_mEndOfInstruction () {
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

ComparisonResult cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfInstruction.objectCompare (p->mProperty_mEndOfInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::objectCompare (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::
init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                              const GALGAS_lstring & in_mConstantName,
                              const GALGAS_immediatExpression & in_mLowerBoundExpression,
                              const GALGAS_immediatExpression & in_mUpperBoundExpression,
                              const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                              const GALGAS_location & in_mEndOfInstruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::
midrange_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mConstantName,
                                                                          const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                          const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                          const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                          const GALGAS_location & in_mEndOfInstruction,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstruction = in_mEndOfInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                       const GALGAS_lstring & in_mConstantName,
                                                                                                                       const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                                       const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                                       const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                       const GALGAS_location & in_mEndOfInstruction
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setProperty_mConstantName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setProperty_mLowerBoundExpression (const GALGAS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setProperty_mUpperBoundExpression (const GALGAS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setProperty_mInstructionList (const GALGAS_midrange_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mEndOfInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mEndOfInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setProperty_mEndOfInstruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mEndOfInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_STATIC_REPEAT class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_lstring & in_mConstantName,
                                                                                                    const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                    const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                    const GALGAS_location & in_mEndOfInstruction
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mLowerBoundExpression, mProperty_mUpperBoundExpression, mProperty_mInstructionList, mProperty_mEndOfInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_STATIC_REPEAT generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ("midrange_instruction_STATIC_REPEAT",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT *> (p)) {
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

cPtr_midrange_5F_instruction_5F_FD::cPtr_midrange_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
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

ComparisonResult cPtr_midrange_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FD_5F_base_5F_code) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_FD::objectCompare (const GALGAS_midrange_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_FD::GALGAS_midrange_5F_instruction_5F_FD (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD GALGAS_midrange_5F_instruction_5F_FD::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                      const GALGAS_registerExpression & in_mRegisterExpression,
                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FD::
midrange_5F_instruction_5F_FD_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                    const GALGAS_registerExpression & in_mRegisterExpression,
                                                    const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code = in_mInstruction_5F_FD_5F_base_5F_code ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD::GALGAS_midrange_5F_instruction_5F_FD (const cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD GALGAS_midrange_5F_instruction_5F_FD::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                           const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                                           const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                           const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FD (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD::readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FD::setProperty_mInstruction_5F_FD_5F_base_5F_code (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    p->mProperty_mInstruction_5F_FD_5F_base_5F_code = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_FD::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FD::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FD::setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FD::cPtr_midrange_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FD_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_FD generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ("midrange_instruction_FD",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD GALGAS_midrange_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD result ;
  const GALGAS_midrange_5F_instruction_5F_FD * p = (const GALGAS_midrange_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FD *> (p)) {
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

cPtr_midrange_5F_instruction_5F_F::cPtr_midrange_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterExpression () {
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

ComparisonResult cPtr_midrange_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_F * p = (const cPtr_midrange_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFAinstruction.objectCompare (p->mProperty_mFAinstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_F::objectCompare (const GALGAS_midrange_5F_instruction_5F_F & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_F::GALGAS_midrange_5F_instruction_5F_F (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F GALGAS_midrange_5F_instruction_5F_F::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                  const GALGAS_registerExpression & in_mRegisterExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_F::
midrange_5F_instruction_5F_F_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F::GALGAS_midrange_5F_instruction_5F_F (const cPtr_midrange_5F_instruction_5F_F * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F GALGAS_midrange_5F_instruction_5F_F::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                         const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                         const GALGAS_registerExpression & in_mRegisterExpression
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_F result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_F (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_F::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_F::setProperty_mFAinstruction (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    p->mProperty_mFAinstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_F::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_F::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_F::cPtr_midrange_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_F generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ("midrange_instruction_F",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F GALGAS_midrange_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_F result ;
  const GALGAS_midrange_5F_instruction_5F_F * p = (const GALGAS_midrange_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_F *> (p)) {
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

cPtr_midrange_5F_instruction_5F_FB::cPtr_midrange_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
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

ComparisonResult cPtr_midrange_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitOrientedOp.objectCompare (p->mProperty_mBitOrientedOp) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_FB::objectCompare (const GALGAS_midrange_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_FB::GALGAS_midrange_5F_instruction_5F_FB (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB GALGAS_midrange_5F_instruction_5F_FB::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                      const GALGAS_registerExpression & in_mRegisterExpression,
                      const GALGAS_bitNumberExpression & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FB::
midrange_5F_instruction_5F_FB_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                    const GALGAS_registerExpression & in_mRegisterExpression,
                                                    const GALGAS_bitNumberExpression & in_mBitNumber,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB::GALGAS_midrange_5F_instruction_5F_FB (const cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB GALGAS_midrange_5F_instruction_5F_FB::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                           const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                           const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                           const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FB result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FB (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_instruction_5F_FB::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FB::setProperty_mBitOrientedOp (const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_FB::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FB::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_midrange_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FB::setProperty_mBitNumber (const GALGAS_bitNumberExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FB::cPtr_midrange_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_FB generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ("midrange_instruction_FB",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB GALGAS_midrange_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FB result ;
  const GALGAS_midrange_5F_instruction_5F_FB * p = (const GALGAS_midrange_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FB *> (p)) {
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

cPtr_midrange_5F_instruction_5F_CALL::cPtr_midrange_5F_instruction_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_instruction_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_CALL * p = (const cPtr_midrange_5F_instruction_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_CALL::objectCompare (const GALGAS_midrange_5F_instruction_5F_CALL & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_CALL::GALGAS_midrange_5F_instruction_5F_CALL (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL GALGAS_midrange_5F_instruction_5F_CALL::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_CALL (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::
midrange_5F_instruction_5F_CALL_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL::GALGAS_midrange_5F_instruction_5F_CALL (const cPtr_midrange_5F_instruction_5F_CALL * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL GALGAS_midrange_5F_instruction_5F_CALL::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CALL (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_CALL * p = (cPtr_midrange_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_CALL::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_CALL * p = (cPtr_midrange_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CALL::cPtr_midrange_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_CALL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ("midrange_instruction_CALL",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL GALGAS_midrange_5F_instruction_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CALL result ;
  const GALGAS_midrange_5F_instruction_5F_CALL * p = (const GALGAS_midrange_5F_instruction_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_CALL *> (p)) {
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

cPtr_midrange_5F_instruction_5F_JSR::cPtr_midrange_5F_instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_JSR * p = (const cPtr_midrange_5F_instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_JSR::objectCompare (const GALGAS_midrange_5F_instruction_5F_JSR & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_JSR::GALGAS_midrange_5F_instruction_5F_JSR (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR GALGAS_midrange_5F_instruction_5F_JSR::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_JSR (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_JSR_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::
midrange_5F_instruction_5F_JSR_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mTargetLabel,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR::GALGAS_midrange_5F_instruction_5F_JSR (const cPtr_midrange_5F_instruction_5F_JSR * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR GALGAS_midrange_5F_instruction_5F_JSR::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                             const GALGAS_lstring & in_mTargetLabel
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_JSR (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_JSR * p = (cPtr_midrange_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_JSR::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_JSR * p = (cPtr_midrange_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JSR::cPtr_midrange_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel
                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_JSR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ("midrange_instruction_JSR",
                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR GALGAS_midrange_5F_instruction_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JSR result ;
  const GALGAS_midrange_5F_instruction_5F_JSR * p = (const GALGAS_midrange_5F_instruction_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_JSR *> (p)) {
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

cPtr_midrange_5F_instruction_5F_JUMP::cPtr_midrange_5F_instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_JUMP * p = (const cPtr_midrange_5F_instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_JUMP::objectCompare (const GALGAS_midrange_5F_instruction_5F_JUMP & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_JUMP::GALGAS_midrange_5F_instruction_5F_JUMP (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP GALGAS_midrange_5F_instruction_5F_JUMP::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_JUMP_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::
midrange_5F_instruction_5F_JUMP_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP::GALGAS_midrange_5F_instruction_5F_JUMP (const cPtr_midrange_5F_instruction_5F_JUMP * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP GALGAS_midrange_5F_instruction_5F_JUMP::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_JUMP (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_JUMP * p = (cPtr_midrange_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_JUMP::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_JUMP * p = (cPtr_midrange_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JUMP::cPtr_midrange_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_JUMP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ("midrange_instruction_JUMP",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP GALGAS_midrange_5F_instruction_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JUMP result ;
  const GALGAS_midrange_5F_instruction_5F_JUMP * p = (const GALGAS_midrange_5F_instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_JUMP *> (p)) {
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

cPtr_midrange_5F_instruction_5F_GOTO::cPtr_midrange_5F_instruction_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_instruction_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_GOTO * p = (const cPtr_midrange_5F_instruction_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_GOTO::objectCompare (const GALGAS_midrange_5F_instruction_5F_GOTO & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_GOTO::GALGAS_midrange_5F_instruction_5F_GOTO (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO GALGAS_midrange_5F_instruction_5F_GOTO::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::
midrange_5F_instruction_5F_GOTO_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO::GALGAS_midrange_5F_instruction_5F_GOTO (const cPtr_midrange_5F_instruction_5F_GOTO * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO GALGAS_midrange_5F_instruction_5F_GOTO::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_GOTO (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_GOTO * p = (cPtr_midrange_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_GOTO::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_GOTO * p = (cPtr_midrange_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_GOTO::cPtr_midrange_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_GOTO generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ("midrange_instruction_GOTO",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO GALGAS_midrange_5F_instruction_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_GOTO result ;
  const GALGAS_midrange_5F_instruction_5F_GOTO * p = (const GALGAS_midrange_5F_instruction_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_GOTO *> (p)) {
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

cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
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

ComparisonResult cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_midrange_5F_instruction & in_mInstruction,
                          const GALGAS_bool & in_mSkipIfSet,
                          const GALGAS_registerExpression & in_mRegisterExpression,
                          const GALGAS_bitNumberExpression & in_mBitNumber,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::
midrange_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                   const GALGAS_bool & in_mSkipIfSet,
                                                                   const GALGAS_registerExpression & in_mRegisterExpression,
                                                                   const GALGAS_bitNumberExpression & in_mBitNumber,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                 const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                                                 const GALGAS_bool & in_mSkipIfSet,
                                                                                                                 const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                 const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (in_mInstructionLocation, in_mInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setProperty_mSkipIfSet (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setProperty_mBitNumber (const GALGAS_bitNumberExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                              const GALGAS_bool & in_mSkipIfSet,
                                                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_IF_BitTest generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ("midrange_instruction_IF_BitTest",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getBaseCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_getBaseCode (GALGAS_uint & outArgument_outBaseCode,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outBaseCode = GALGAS_uint (uint32_t (7168U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outBaseCode = GALGAS_uint (uint32_t (6144U)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getBaseCode  (out_outBaseCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getMnemonic'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_getMnemonic (GALGAS_string & outArgument_outMnemonic,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outMnemonic = GALGAS_string ("BTFSS") ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSC") ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getMnemonic  (out_outMnemonic, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mIncrement (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
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

ComparisonResult cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_midrange_5F_instruction & in_mInstruction,
                          const GALGAS_bool & in_mIncrement,
                          const GALGAS_registerExpression & in_mRegisterExpression,
                          const GALGAS_bool & in_m_5F_W_5F_isDestination,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mIncrement, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::
midrange_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                  const GALGAS_bool & in_mIncrement,
                                                                  const GALGAS_registerExpression & in_mRegisterExpression,
                                                                  const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                               const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                                               const GALGAS_bool & in_mIncrement,
                                                                                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                               const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (in_mInstructionLocation, in_mInstruction, in_mIncrement, in_mRegisterExpression, in_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setProperty_mIncrement (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                            const GALGAS_bool & in_mIncrement,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mIncrement, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_IF_IncDec generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ("midrange_instruction_IF_IncDec",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec *> (p)) {
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

cPtr_midrange_5F_incDecRegisterInCondition::cPtr_midrange_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
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

ComparisonResult cPtr_midrange_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_incDecRegisterInCondition::objectCompare (const GALGAS_midrange_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_midrange_5F_incDecRegisterInCondition::GALGAS_midrange_5F_incDecRegisterInCondition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition GALGAS_midrange_5F_incDecRegisterInCondition::
init_21__21__21__21_ (const GALGAS_registerExpression & in_mRegisterExpression,
                      const GALGAS_bool & in_mIncrement,
                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                      const GALGAS_bool & in_mBranchIfZero,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_incDecRegisterInCondition_init_21__21__21__21_ (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero, inCompiler) ;
  const GALGAS_midrange_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::
midrange_5F_incDecRegisterInCondition_init_21__21__21__21_ (const GALGAS_registerExpression & in_mRegisterExpression,
                                                            const GALGAS_bool & in_mIncrement,
                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                            const GALGAS_bool & in_mBranchIfZero,
                                                            Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition::GALGAS_midrange_5F_incDecRegisterInCondition (const cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition GALGAS_midrange_5F_incDecRegisterInCondition::class_func_new (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                           const GALGAS_bool & in_mIncrement,
                                                                                                           const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                                           const GALGAS_bool & in_mBranchIfZero
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_incDecRegisterInCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_incDecRegisterInCondition (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_incDecRegisterInCondition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setProperty_mIncrement (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setProperty_mBranchIfZero (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_incDecRegisterInCondition::cPtr_midrange_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
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

acPtr_class * cPtr_midrange_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_incDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_incDecRegisterInCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ("midrange_incDecRegisterInCondition",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition GALGAS_midrange_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_incDecRegisterInCondition result ;
  const GALGAS_midrange_5F_incDecRegisterInCondition * p = (const GALGAS_midrange_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_incDecRegisterInCondition *> (p)) {
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

cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
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

ComparisonResult cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
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

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::
init_21__21_ (const GALGAS_registerExpression & in_mRegisterExpression,
              const GALGAS_bitNumberExpression & in_mBitNumber,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::
midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                         const GALGAS_bitNumberExpression & in_mBitNumber,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::class_func_new (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                                     const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (in_mRegisterExpression, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setProperty_mBitNumber (const GALGAS_bitNumberExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_bitTest_in_structured_if_condition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
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

acPtr_class * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_bitTest_in_structured_if_condition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("midrange_bitTest_in_structured_if_condition",
                                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bitTest_in_structured_if_condition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_model::GALGAS_midrange_5F_model (void) :
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

GALGAS_midrange_5F_model::~ GALGAS_midrange_5F_model (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_midrange_5F_model GALGAS_midrange_5F_model::init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mProgramName,
                                                                                                         const GALGAS_lstring & in_mDeviceName,
                                                                                                         const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                                                                                         const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                                                                                         const GALGAS_lstringlist & in_mUnusedRegisterList,
                                                                                                         const GALGAS_midrange_5F_interruptDefinitionList & in_mInterruptDefinitionList,
                                                                                                         const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                                                                                         const GALGAS_midrange_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                                                                                         const GALGAS_lstringlist & in_mUnusedRoutineList,
                                                                                                         const GALGAS_bool & in_mNeedsComputedGoto_32_,
                                                                                                         const GALGAS_bool & in_mNeedsComputedGoto_34_,
                                                                                                         const GALGAS_location & in_mEndOfProgram,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_model result ;
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

void GALGAS_midrange_5F_model::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_model::GALGAS_midrange_5F_model (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_configDefinitionList & inOperand2,
                                                    const GALGAS_ramDefinitionList & inOperand3,
                                                    const GALGAS_lstringlist & inOperand4,
                                                    const GALGAS_midrange_5F_interruptDefinitionList & inOperand5,
                                                    const GALGAS_constantDefinitionList & inOperand6,
                                                    const GALGAS_midrange_5F_routineDefinitionList & inOperand7,
                                                    const GALGAS_lstringlist & inOperand8,
                                                    const GALGAS_bool & inOperand9,
                                                    const GALGAS_bool & inOperand10,
                                                    const GALGAS_location & inOperand11) :
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

GALGAS_midrange_5F_model GALGAS_midrange_5F_model::class_func_new (const GALGAS_lstring & in_mProgramName,
                                                                   const GALGAS_lstring & in_mDeviceName,
                                                                   const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                                                   const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                                                   const GALGAS_lstringlist & in_mUnusedRegisterList,
                                                                   const GALGAS_midrange_5F_interruptDefinitionList & in_mInterruptDefinitionList,
                                                                   const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                                                   const GALGAS_midrange_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                                                   const GALGAS_lstringlist & in_mUnusedRoutineList,
                                                                   const GALGAS_bool & in_mNeedsComputedGoto2,
                                                                   const GALGAS_bool & in_mNeedsComputedGoto4,
                                                                   const GALGAS_location & in_mEndOfProgram,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_model result ;
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

ComparisonResult GALGAS_midrange_5F_model::objectCompare (const GALGAS_midrange_5F_model & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mProgramName.objectCompare (inOperand.mProperty_mProgramName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDeviceName.objectCompare (inOperand.mProperty_mDeviceName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConfigDefinitionList.objectCompare (inOperand.mProperty_mConfigDefinitionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRamDefinitionList.objectCompare (inOperand.mProperty_mRamDefinitionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mUnusedRegisterList.objectCompare (inOperand.mProperty_mUnusedRegisterList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInterruptDefinitionList.objectCompare (inOperand.mProperty_mInterruptDefinitionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantDefinitionList.objectCompare (inOperand.mProperty_mConstantDefinitionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRoutineDefinitionList.objectCompare (inOperand.mProperty_mRoutineDefinitionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mUnusedRoutineList.objectCompare (inOperand.mProperty_mUnusedRoutineList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNeedsComputedGoto_32_.objectCompare (inOperand.mProperty_mNeedsComputedGoto_32_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNeedsComputedGoto_34_.objectCompare (inOperand.mProperty_mNeedsComputedGoto_34_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfProgram.objectCompare (inOperand.mProperty_mEndOfProgram) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_model::isValid (void) const {
  return mProperty_mProgramName.isValid () && mProperty_mDeviceName.isValid () && mProperty_mConfigDefinitionList.isValid () && mProperty_mRamDefinitionList.isValid () && mProperty_mUnusedRegisterList.isValid () && mProperty_mInterruptDefinitionList.isValid () && mProperty_mConstantDefinitionList.isValid () && mProperty_mRoutineDefinitionList.isValid () && mProperty_mUnusedRoutineList.isValid () && mProperty_mNeedsComputedGoto_32_.isValid () && mProperty_mNeedsComputedGoto_34_.isValid () && mProperty_mEndOfProgram.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_model::drop (void) {
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

void GALGAS_midrange_5F_model::description (String & ioString,
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
//
//     @midrange_model generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_model ("midrange_model",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_model::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_model ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_model::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_model (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_model GALGAS_midrange_5F_model::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_model result ;
  const GALGAS_midrange_5F_model * p = (const GALGAS_midrange_5F_model *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_model *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_model", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveMidrangeAccess'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_resolveMidrangeAccess (const GALGAS_uint constinArgument_inTotalBankCount,
                                                            const GALGAS_uint constinArgument_inCurrentBank,
                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                            GALGAS_midrange_5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                            GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_offset_648 ;
  const GALGAS_registerExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_648, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 21)) ;
  const GALGAS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 22)) ;
  const GALGAS_registerExpression temp_2 = this ;
  GALGAS_string var_assemblyString_763 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_offset_648.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_assemblyString_763.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_648.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)).getter_hexString (SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)) ;
    }
  }
  GALGAS_uintlist var_registerAddressList_967 ;
  GALGAS_uint var_size_1002 ;
  GALGAS_registerProtection var_protection_1045 ;
  const GALGAS_registerExpression temp_4 = this ;
  GALGAS_string joker_1033 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_967, var_size_1002, outArgument_outBitSliceTable, joker_1033, var_protection_1045, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 29)) ;
  const GALGAS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), GALGAS_bool (true), var_protection_1045, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 37)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_offset_648.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 39)).objectCompare (var_size_1002)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_registerExpression temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GALGAS_string ("maximum index value is ").add_operation (var_size_1002.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), fixItArray8  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)) ;
    }
  }
  GALGAS_uintlist var_acceptableBanks_1305 = GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("midrange_intermediate_classes.galgas", 43)) ;
  cEnumerator_uintlist enumerator_1343 (var_registerAddressList_967, EnumerationOrder::up) ;
  while (enumerator_1343.hasCurrentObject ()) {
    var_acceptableBanks_1305.addAssign_operation (enumerator_1343.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45)) ;
    enumerator_1343.gotoNextObject () ;
  }
  GALGAS_uint var_registerAddress_1437 = GALGAS_uint (uint32_t (0U)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::equal, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_intermediate_classes.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_uint var_bank_1575 = GALGAS_uint (uint32_t (0U)) ;
      GALGAS_bool var_ok_1598 = GALGAS_bool (true) ;
      if (constinArgument_inTotalBankCount.isValid ()) {
        uint32_t variant_1612 = constinArgument_inTotalBankCount.uintValue () ;
        bool loop_1612 = true ;
        while (loop_1612) {
          loop_1612 = GALGAS_bool (ComparisonKind::lowerThan, var_bank_1575.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1598 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).isValid () ;
          if (loop_1612) {
            loop_1612 = GALGAS_bool (ComparisonKind::lowerThan, var_bank_1575.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1598 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).boolValue () ;
          }
          if (loop_1612 && (0 == variant_1612)) {
            loop_1612 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)) ;
          }
          if (loop_1612) {
            variant_1612 -- ;
            var_ok_1598 = GALGAS_bool (false) ;
            cEnumerator_uintlist enumerator_1704 (var_registerAddressList_967, EnumerationOrder::up) ;
            bool bool_10 = var_ok_1598.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
            if (enumerator_1704.hasCurrentObject () && bool_10) {
              while (enumerator_1704.hasCurrentObject () && bool_10) {
                var_ok_1598 = GALGAS_bool (ComparisonKind::greaterOrEqual, enumerator_1704.current_mValue (HERE).objectCompare (var_bank_1575.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))).operator_and (GALGAS_bool (ComparisonKind::lowerThan, enumerator_1704.current_mValue (HERE).objectCompare (var_bank_1575.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)).add_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)) ;
                var_registerAddress_1437 = enumerator_1704.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 57)) ;
                enumerator_1704.gotoNextObject () ;
                if (enumerator_1704.hasCurrentObject ()) {
                  bool_10 = var_ok_1598.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
                }
              }
            }
            var_bank_1575.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 59)) ;
          }
        }
      }
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = var_ok_1598.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 61)).boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_string var_acceptableBankMessage_1933 = GALGAS_string::makeEmptyString () ;
          cEnumerator_uintlist enumerator_1971 (var_registerAddressList_967, EnumerationOrder::up) ;
          while (enumerator_1971.hasCurrentObject ()) {
            var_acceptableBankMessage_1933.plusAssign_operation(enumerator_1971.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)) ;
            if (enumerator_1971.hasNextObject ()) {
              var_acceptableBankMessage_1933.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)) ;
            }
            enumerator_1971.gotoNextObject () ;
          }
          const GALGAS_registerExpression temp_12 = this ;
          const GALGAS_registerExpression temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("as no bank is currently known, the '").add_operation (temp_13.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_string ("' register accessible from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (var_acceptableBankMessage_1933, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_string (", but should be able to be accessed from any bank setting"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)), fixItArray14  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_bool var_found_2355 = GALGAS_bool (false) ;
    cEnumerator_uintlist enumerator_2378 (var_registerAddressList_967, EnumerationOrder::up) ;
    bool bool_15 = var_found_2355.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
    if (enumerator_2378.hasCurrentObject () && bool_15) {
      while (enumerator_2378.hasCurrentObject () && bool_15) {
        var_found_2355 = GALGAS_bool (ComparisonKind::greaterOrEqual, enumerator_2378.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))).operator_and (GALGAS_bool (ComparisonKind::lowerThan, enumerator_2378.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)).add_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)) ;
        var_registerAddress_1437 = enumerator_2378.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 73)) ;
        enumerator_2378.gotoNextObject () ;
        if (enumerator_2378.hasCurrentObject ()) {
          bool_15 = var_found_2355.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = var_found_2355.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 75)).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_acceptableBankMessage_2604 = GALGAS_string::makeEmptyString () ;
        cEnumerator_uintlist enumerator_2642 (var_registerAddressList_967, EnumerationOrder::up) ;
        while (enumerator_2642.hasCurrentObject ()) {
          var_acceptableBankMessage_2604.plusAssign_operation(enumerator_2642.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)) ;
          if (enumerator_2642.hasNextObject ()) {
            var_acceptableBankMessage_2604.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)) ;
          }
          enumerator_2642.gotoNextObject () ;
        }
        const GALGAS_registerExpression temp_17 = this ;
        const GALGAS_registerExpression temp_18 = this ;
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_18.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string ("' register cannot be accessed from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string (" (valid bank setting: "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (var_acceptableBankMessage_2604, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), fixItArray19  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)) ;
      }
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_midrange_5F_intermediate_5F_registerExpression::init_21__21_ (var_assemblyString_763, var_registerAddress_1437.add_operation (var_offset_648.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveMidrangeAccess (cPtr_registerExpression * inObject,
                                                const GALGAS_uint constin_inTotalBankCount,
                                                const GALGAS_uint constin_inCurrentBank,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
                                                GALGAS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                GALGAS_bitSliceTable & out_outBitSliceTable,
                                                GALGAS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_resolveMidrangeAccess  (constin_inTotalBankCount, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLabel (),
mProperty_mIsDeletable () {
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

ComparisonResult cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsDeletable.objectCompare (p->mProperty_mIsDeletable) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GALGAS_midrange_5F_intermediate_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::
init_21__21_ (const GALGAS_lstring & in_mLabel,
              const GALGAS_bool & in_mIsDeletable,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_pseudo_5F_LABEL_init_21__21_ (in_mLabel, in_mIsDeletable, inCompiler) ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::
midrange_5F_intermediate_5F_pseudo_5F_LABEL_init_21__21_ (const GALGAS_lstring & in_mLabel,
                                                          const GALGAS_bool & in_mIsDeletable,
                                                          Compiler * /* inCompiler */) {
  mProperty_mLabel = in_mLabel ;
  mProperty_mIsDeletable = in_mIsDeletable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (const GALGAS_lstring & in_mLabel,
                                                                                                                       const GALGAS_bool & in_mIsDeletable
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (in_mLabel, in_mIsDeletable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::setProperty_mLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    p->mProperty_mLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::readProperty_mIsDeletable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mIsDeletable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::setProperty_mIsDeletable (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    p->mProperty_mIsDeletable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel,
                                                                                                    const GALGAS_bool & in_mIsDeletable
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (THERE),
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (mProperty_mLabel, mProperty_mIsDeletable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_pseudo_LABEL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ("midrange_intermediate_pseudo_LABEL",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL *> (p)) {
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

cPtr_midrange_5F_intermediate_5F_JUMP::cPtr_midrange_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mBit_31__31_ (),
mProperty_mBit_31__32_ () {
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

ComparisonResult cPtr_midrange_5F_intermediate_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_JUMP * p = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBit_31__31_.objectCompare (p->mProperty_mBit_31__31_) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBit_31__32_.objectCompare (p->mProperty_mBit_31__32_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_JUMP::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_JUMP::GALGAS_midrange_5F_intermediate_5F_JUMP (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP GALGAS_midrange_5F_intermediate_5F_JUMP::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_lstring & in_mTargetLabel,
                      const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                      const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_JUMP_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mBit_31__31_, in_mBit_31__32_, inCompiler) ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::
midrange_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_lstring & in_mTargetLabel,
                                                       const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                       const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mBit_31__31_ = in_mBit_31__31_ ;
  mProperty_mBit_31__32_ = in_mBit_31__32_ ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP::GALGAS_midrange_5F_intermediate_5F_JUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP GALGAS_midrange_5F_intermediate_5F_JUMP::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                 const GALGAS_lstring & in_mTargetLabel,
                                                                                                 const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                                                 const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_JUMP (in_mInstructionLocation, in_mTargetLabel, in_mBit_31__31_, in_mBit_31__32_ COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JUMP::readProperty_mBit_31__31_ (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mBit_31__31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP::setProperty_mBit_31__31_ (const GALGAS_midrange_5F_call_5F_goto_5F_bit & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    p->mProperty_mBit_31__31_ = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JUMP::readProperty_mBit_31__32_ (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mBit_31__32_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP::setProperty_mBit_31__32_ (const GALGAS_midrange_5F_call_5F_goto_5F_bit & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    p->mProperty_mBit_31__32_ = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_JUMP::cPtr_midrange_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                              const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mBit_31__31_, mProperty_mBit_31__32_ COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_JUMP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ("midrange_intermediate_JUMP",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP GALGAS_midrange_5F_intermediate_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP result ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP * p = (const GALGAS_midrange_5F_intermediate_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_JUMP *> (p)) {
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

cPtr_midrange_5F_intermediate_5F_GOTO::cPtr_midrange_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_GOTO * p = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_GOTO::objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_GOTO::GALGAS_midrange_5F_intermediate_5F_GOTO (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::
midrange_5F_intermediate_5F_GOTO_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO::GALGAS_midrange_5F_intermediate_5F_GOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                 const GALGAS_lstring & in_mTargetLabel
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_GOTO (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_GOTO * p = (cPtr_midrange_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_GOTO::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_GOTO * p = (cPtr_midrange_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_GOTO::cPtr_midrange_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_GOTO generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ("midrange_intermediate_GOTO",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO result ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO * p = (const GALGAS_midrange_5F_intermediate_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_GOTO *> (p)) {
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

cPtr_midrange_5F_intermediate_5F_CALL::cPtr_midrange_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_CALL * p = (const cPtr_midrange_5F_intermediate_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_CALL::objectCompare (const GALGAS_midrange_5F_intermediate_5F_CALL & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_CALL::GALGAS_midrange_5F_intermediate_5F_CALL (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_CALL (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GALGAS_midrange_5F_intermediate_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::
midrange_5F_intermediate_5F_CALL_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL::GALGAS_midrange_5F_intermediate_5F_CALL (const cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                 const GALGAS_lstring & in_mTargetLabel
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_CALL (in_mInstructionLocation, in_mTargetLabel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_CALL * p = (cPtr_midrange_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_CALL::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_CALL * p = (cPtr_midrange_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_CALL::cPtr_midrange_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_CALL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ("midrange_intermediate_CALL",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL result ;
  const GALGAS_midrange_5F_intermediate_5F_CALL * p = (const GALGAS_midrange_5F_intermediate_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_CALL *> (p)) {
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

cPtr_midrange_5F_intermediate_5F_JSR::cPtr_midrange_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mBit_31__31_ (),
mProperty_mBit_31__32_ () {
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

ComparisonResult cPtr_midrange_5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_JSR * p = (const cPtr_midrange_5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBit_31__31_.objectCompare (p->mProperty_mBit_31__31_) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBit_31__32_.objectCompare (p->mProperty_mBit_31__32_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_JSR::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JSR & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_JSR::GALGAS_midrange_5F_intermediate_5F_JSR (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR GALGAS_midrange_5F_intermediate_5F_JSR::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_lstring & in_mTargetLabel,
                      const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                      const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_JSR (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_JSR_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mBit_31__31_, in_mBit_31__32_, inCompiler) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::
midrange_5F_intermediate_5F_JSR_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mTargetLabel,
                                                      const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                      const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mBit_31__31_ = in_mBit_31__31_ ;
  mProperty_mBit_31__32_ = in_mBit_31__32_ ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR::GALGAS_midrange_5F_intermediate_5F_JSR (const cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR GALGAS_midrange_5F_intermediate_5F_JSR::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mTargetLabel,
                                                                                               const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                                               const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_JSR (in_mInstructionLocation, in_mTargetLabel, in_mBit_31__31_, in_mBit_31__32_ COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JSR::setProperty_mTargetLabel (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JSR::readProperty_mBit_31__31_ (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    return p->mProperty_mBit_31__31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JSR::setProperty_mBit_31__31_ (const GALGAS_midrange_5F_call_5F_goto_5F_bit & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    p->mProperty_mBit_31__31_ = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JSR::readProperty_mBit_31__32_ (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    return p->mProperty_mBit_31__32_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JSR::setProperty_mBit_31__32_ (const GALGAS_midrange_5F_call_5F_goto_5F_bit & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    p->mProperty_mBit_31__32_ = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_JSR::cPtr_midrange_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel,
                                                                            const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                            const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mBit_31__31_, mProperty_mBit_31__32_ COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_JSR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ("midrange_intermediate_JSR",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR GALGAS_midrange_5F_intermediate_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR result ;
  const GALGAS_midrange_5F_intermediate_5F_JSR * p = (const GALGAS_midrange_5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_JUMP optimizeJUMP'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_optimizeJUMP (const GALGAS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GALGAS_uint constinArgument_inLineIndex,
                                                                 GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                 GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_reachedLabelSet_9839 ;
  {
  GALGAS_midrange_5F_intermediate_5F_instruction joker_9831 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 233)), ioArgument_ioGeneratedInstructionList, joker_9831, var_reachedLabelSet_9839, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 233)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
    test_0 = var_reachedLabelSet_9839.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 235)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 236)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)).add_operation (GALGAS_string (": JUMP branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_line_10294 ;
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
    GALGAS_bool joker_10299 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_10294, joker_10299, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 240)) ;
    GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction_10433 ;
    {
    routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (var_line_10294.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 242)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_10433, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 242)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN var__10512 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (var_firstInstruction_10433.ptr ())) ;
      if (nullptr == var__10512.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        {
        const GALGAS_midrange_5F_intermediate_5F_JUMP temp_4 = this ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::init_21_ (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 247)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 252)).add_operation (GALGAS_string (": JUMP branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 252)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_11001 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_10433.ptr ())) ;
        if (nullptr == var_literalOp_11001.ptr ()) {
          test_5 = kBoolFalse ;
        }
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (ComparisonKind::equal, var_literalOp_11001.readProperty_mLiteralInstruction ().objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 255)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_11001, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 256)) ;
              }
              ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 261)).add_operation (GALGAS_string (": JUMP branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 261)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_midrange_5F_intermediate_5F_JUMP var_jump_11545 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_firstInstruction_10433.ptr ())) ;
          if (nullptr == var_jump_11545.ptr ()) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              const GALGAS_midrange_5F_intermediate_5F_JUMP temp_9 = this ;
              test_8 = GALGAS_bool (ComparisonKind::notEqual, temp_9.readProperty_mTargetLabel ().objectCompare (var_jump_11545.readProperty_mTargetLabel ())).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                const GALGAS_midrange_5F_intermediate_5F_JUMP temp_10 = this ;
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_jump_11545.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 267)), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 267)), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 266)) ;
                }
                ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 271)).add_operation (GALGAS_string (": JUMP branching to JUMP replaced by JUMP\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 271)) ;
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
                                       const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    inObject->method_optimizeJUMP  (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_GOTO optimizeGOTO'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_optimizeGOTO (const GALGAS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GALGAS_uint constinArgument_inLineIndex,
                                                                 GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                 GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_reachedLabelSet_12711 ;
  {
  GALGAS_midrange_5F_intermediate_5F_instruction joker_12703 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 288)), ioArgument_ioGeneratedInstructionList, joker_12703, var_reachedLabelSet_12711, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 288)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_GOTO temp_1 = this ;
    test_0 = var_reachedLabelSet_12711.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 290)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 291)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 292)).add_operation (GALGAS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 292)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_line_13165 ;
    const GALGAS_midrange_5F_intermediate_5F_GOTO temp_2 = this ;
    GALGAS_bool joker_13170 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_13165, joker_13170, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 295)) ;
    GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction_13304 ;
    {
    routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (var_line_13165.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 297)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_13304, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 297)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN var__13411 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (var_firstInstruction_13304.ptr ())) ;
      if (nullptr == var__13411.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        {
        const GALGAS_midrange_5F_intermediate_5F_GOTO temp_4 = this ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::init_21_ (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 303)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 308)).add_operation (GALGAS_string (": GOTO branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 308)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_13900 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_13304.ptr ())) ;
        if (nullptr == var_literalOp_13900.ptr ()) {
          test_5 = kBoolFalse ;
        }
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (ComparisonKind::equal, var_literalOp_13900.readProperty_mLiteralInstruction ().objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 311)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_13900, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 312)) ;
              }
              ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 317)).add_operation (GALGAS_string (": GOTO branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 317)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_midrange_5F_intermediate_5F_JUMP var_jump_14444 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_firstInstruction_13304.ptr ())) ;
          if (nullptr == var_jump_14444.ptr ()) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              const GALGAS_midrange_5F_intermediate_5F_GOTO temp_9 = this ;
              test_8 = GALGAS_bool (ComparisonKind::notEqual, temp_9.readProperty_mTargetLabel ().objectCompare (var_jump_14444.readProperty_mTargetLabel ())).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                const GALGAS_midrange_5F_intermediate_5F_GOTO temp_10 = this ;
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_jump_14444.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 323)), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 323)), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 322)) ;
                }
                ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 327)).add_operation (GALGAS_string (": GOTO branching to JUMP replaced by JUMP\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 327)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_7) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            GALGAS_midrange_5F_intermediate_5F_GOTO var_goto_15032 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_firstInstruction_13304.ptr ())) ;
            if (nullptr == var_goto_15032.ptr ()) {
              test_11 = kBoolFalse ;
            }
            if (kBoolTrue == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                const GALGAS_midrange_5F_intermediate_5F_GOTO temp_13 = this ;
                test_12 = GALGAS_bool (ComparisonKind::notEqual, temp_13.readProperty_mTargetLabel ().objectCompare (var_goto_15032.readProperty_mTargetLabel ())).boolEnum () ;
                if (kBoolTrue == test_12) {
                  {
                  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_14 = this ;
                  ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_14.readProperty_mInstructionLocation (), var_goto_15032.readProperty_mTargetLabel (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 332)) ;
                  }
                  ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 337)).add_operation (GALGAS_string (": GOTO branching to GOTO replaced by GOTO\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 337)) ;
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
                                       const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    inObject->method_optimizeGOTO  (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_banksel_5F_register reference class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_banksel_5F_register::cPtr_pic_31__38_Instruction_5F_banksel_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mWarningOnUselessBanksel () {
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

ComparisonResult cPtr_pic_31__38_Instruction_5F_banksel_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWarningOnUselessBanksel.objectCompare (p->mProperty_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_registerExpression & in_mRegisterExpression,
                  const GALGAS_bool & in_mWarningOnUselessBanksel,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_banksel_5F_register * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_banksel_5F_register_init_21__21__21_ (in_mInstructionLocation, in_mRegisterExpression, in_mWarningOnUselessBanksel, inCompiler) ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::
pic_31__38_Instruction_5F_banksel_5F_register_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_registerExpression & in_mRegisterExpression,
                                                                const GALGAS_bool & in_mWarningOnUselessBanksel,
                                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                           const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                           const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (in_mInstructionLocation, in_mRegisterExpression, in_mWarningOnUselessBanksel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::setProperty_mRegisterExpression (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::readProperty_mWarningOnUselessBanksel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::setProperty_mWarningOnUselessBanksel (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    p->mProperty_mWarningOnUselessBanksel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_banksel_register class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_banksel_5F_register::cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                        const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (mProperty_mInstructionLocation, mProperty_mRegisterExpression, mProperty_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_banksel_register generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ("pic18Instruction_banksel_register",
                                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register * p = (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register *> (p)) {
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

cPtr_pic_31__38_Instruction_5F_savebank::cPtr_pic_31__38_Instruction_5F_savebank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mInstructionList (),
mProperty_mEndOfSaveBankInstruction () {
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

ComparisonResult cPtr_pic_31__38_Instruction_5F_savebank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfSaveBankInstruction.objectCompare (p->mProperty_mEndOfSaveBankInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_savebank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_registerExpression & in_mRegister,
                      const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                      const GALGAS_location & in_mEndOfSaveBankInstruction,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_savebank * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_savebank (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_savebank_init_21__21__21__21_ (in_mInstructionLocation, in_mRegister, in_mInstructionList, in_mEndOfSaveBankInstruction, inCompiler) ;
  const GALGAS_pic_31__38_Instruction_5F_savebank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::
pic_31__38_Instruction_5F_savebank_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_registerExpression & in_mRegister,
                                                         const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                         const GALGAS_location & in_mEndOfSaveBankInstruction,
                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfSaveBankInstruction = in_mEndOfSaveBankInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (const cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_savebank) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                     const GALGAS_registerExpression & in_mRegister,
                                                                                                     const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                     const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_savebank (in_mInstructionLocation, in_mRegister, in_mInstructionList, in_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_savebank::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setProperty_mRegister (const GALGAS_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mRegister = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_savebank::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setProperty_mInstructionList (const GALGAS_pic_31__38_InstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_savebank::readProperty_mEndOfSaveBankInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    return p->mProperty_mEndOfSaveBankInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setProperty_mEndOfSaveBankInstruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mEndOfSaveBankInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_savebank class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_savebank::cPtr_pic_31__38_Instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_registerExpression & in_mRegister,
                                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_savebank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_savebank (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mInstructionList, mProperty_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_savebank generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ("pic18Instruction_savebank",
                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank result ;
  const GALGAS_pic_31__38_Instruction_5F_savebank * p = (const GALGAS_pic_31__38_Instruction_5F_savebank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_savebank *> (p)) {
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

cPtr_pic_31__38_Instruction_5F_repetitionStatique::cPtr_pic_31__38_Instruction_5F_repetitionStatique (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mLowerBoundExpression (),
mProperty_mUpperBoundExpression (),
mProperty_mInstructionList (),
mProperty_mEndOfInstruction () {
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

ComparisonResult cPtr_pic_31__38_Instruction_5F_repetitionStatique::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfInstruction.objectCompare (p->mProperty_mEndOfInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_repetitionStatique::objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_repetitionStatique::GALGAS_pic_31__38_Instruction_5F_repetitionStatique (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique::
init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                              const GALGAS_lstring & in_mConstantName,
                              const GALGAS_immediatExpression & in_mLowerBoundExpression,
                              const GALGAS_immediatExpression & in_mUpperBoundExpression,
                              const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                              const GALGAS_location & in_mEndOfInstruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_repetitionStatique * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_repetitionStatique (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_repetitionStatique_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction, inCompiler) ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::
pic_31__38_Instruction_5F_repetitionStatique_init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                           const GALGAS_lstring & in_mConstantName,
                                                                           const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                           const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                           const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                           const GALGAS_location & in_mEndOfInstruction,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstruction = in_mEndOfInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique::GALGAS_pic_31__38_Instruction_5F_repetitionStatique (const cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                         const GALGAS_lstring & in_mConstantName,
                                                                                                                         const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                                         const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                                         const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                         const GALGAS_location & in_mEndOfInstruction
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setProperty_mConstantName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setProperty_mLowerBoundExpression (const GALGAS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setProperty_mUpperBoundExpression (const GALGAS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setProperty_mInstructionList (const GALGAS_pic_31__38_InstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mEndOfInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mEndOfInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setProperty_mEndOfInstruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mEndOfInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_repetitionStatique class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_repetitionStatique::cPtr_pic_31__38_Instruction_5F_repetitionStatique (const GALGAS_location & in_mInstructionLocation,
                                                                                                      const GALGAS_lstring & in_mConstantName,
                                                                                                      const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                      const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                      const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                      const GALGAS_location & in_mEndOfInstruction
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_repetitionStatique::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mLowerBoundExpression, mProperty_mUpperBoundExpression, mProperty_mInstructionList, mProperty_mEndOfInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_repetitionStatique generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ("pic18Instruction_repetitionStatique",
                                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_repetitionStatique::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_repetitionStatique::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_repetitionStatique (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique * p = (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_repetitionStatique *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_repetitionStatique", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

