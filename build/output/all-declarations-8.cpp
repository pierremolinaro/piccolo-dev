#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_JSR * p = (const cPtr_baseline_5F_instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_JSR::objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR::GALGAS_baseline_5F_instruction_5F_JSR (void) :
GALGAS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR::GALGAS_baseline_5F_instruction_5F_JSR (const cPtr_baseline_5F_instruction_5F_JSR * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                             const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_JSR * p = (cPtr_baseline_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @baseline_instruction_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_JSR::cPtr_baseline_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel
                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;
}

void cPtr_baseline_5F_instruction_5F_JSR::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_GOTO * p = (const cPtr_baseline_5F_instruction_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_GOTO::objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO::GALGAS_baseline_5F_instruction_5F_GOTO (void) :
GALGAS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO::GALGAS_baseline_5F_instruction_5F_GOTO (const cPtr_baseline_5F_instruction_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_GOTO::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_GOTO * p = (cPtr_baseline_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @baseline_instruction_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_GOTO::cPtr_baseline_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;
}

void cPtr_baseline_5F_instruction_5F_GOTO::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_JUMP * p = (const cPtr_baseline_5F_instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_JUMP::objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP::GALGAS_baseline_5F_instruction_5F_JUMP (void) :
GALGAS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP::GALGAS_baseline_5F_instruction_5F_JUMP (const cPtr_baseline_5F_instruction_5F_JUMP * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_JUMP::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_JUMP * p = (cPtr_baseline_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @baseline_instruction_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_JUMP::cPtr_baseline_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;
}

void cPtr_baseline_5F_instruction_5F_JUMP::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_TRIS::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_TRIS * p = (const cPtr_baseline_5F_instruction_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_TRIS::objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS::GALGAS_baseline_5F_instruction_5F_TRIS (void) :
GALGAS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS::GALGAS_baseline_5F_instruction_5F_TRIS (const cPtr_baseline_5F_instruction_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_lstring & inAttribute_mOperand
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_TRIS result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_TRIS (inAttribute_mInstructionLocation, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_TRIS::setter_setMOperand (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_TRIS * p = (cPtr_baseline_5F_instruction_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
    p->mProperty_mOperand = inValue ;
  }
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
//Pointer class for @baseline_instruction_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_TRIS::cPtr_baseline_5F_instruction_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mOperand
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOperand (in_mOperand) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;
}

void cPtr_baseline_5F_instruction_5F_TRIS::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_TRIS:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

typeComparisonResult cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInstruction.objectCompare (p->mProperty_mEndOfInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (void) :
GALGAS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                       const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                                       const GALGAS_immediatExpression & inAttribute_mLowerBoundExpression,
                                                                                                                       const GALGAS_immediatExpression & inAttribute_mUpperBoundExpression,
                                                                                                                       const GALGAS_baseline_5F_instructionList & inAttribute_mInstructionList,
                                                                                                                       const GALGAS_location & inAttribute_mEndOfInstruction
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (inAttribute_mInstructionLocation, inAttribute_mConstantName, inAttribute_mLowerBoundExpression, inAttribute_mUpperBoundExpression, inAttribute_mInstructionList, inAttribute_mEndOfInstruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMConstantName (GALGAS_lstring inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMLowerBoundExpression (GALGAS_immediatExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMUpperBoundExpression (GALGAS_immediatExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMInstructionList (GALGAS_baseline_5F_instructionList inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMEndOfInstruction (GALGAS_location inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mEndOfInstruction = inValue ;
  }
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
mProperty_mConstantName (in_mConstantName),
mProperty_mLowerBoundExpression (in_mLowerBoundExpression),
mProperty_mUpperBoundExpression (in_mUpperBoundExpression),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfInstruction (in_mEndOfInstruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;
}

void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_STATIC_REPEAT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                 const GALGAS_baseline_5F_instruction & inAttribute_mInstruction,
                                                                                                                 const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                 const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                 const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mBitNumber = inValue ;
  }
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
//Pointer class for @baseline_instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                              const GALGAS_bool & in_mSkipIfSet,
                                                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_IF_BitTest:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                               const GALGAS_baseline_5F_instruction & inAttribute_mInstruction,
                                                                                                               const GALGAS_bool & inAttribute_mIncrement,
                                                                                                               const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                               const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mIncrement.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mIncrement, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::setter_setMIncrement (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
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
//Pointer class for @baseline_instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                            const GALGAS_bool & in_mIncrement,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mProperty_mIncrement (in_mIncrement),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_IF_IncDec:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

typeComparisonResult cPtr_baseline_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition::GALGAS_baseline_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition::GALGAS_baseline_5F_incDecRegisterInCondition (const cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition GALGAS_baseline_5F_incDecRegisterInCondition::class_func_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                           const GALGAS_bool & inAttribute_mIncrement,
                                                                                                           const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                           const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_incDecRegisterInCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_incDecRegisterInCondition (inAttribute_mRegisterExpression, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setter_setMIncrement (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
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
//Pointer class for @baseline_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_incDecRegisterInCondition::cPtr_baseline_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_incDecRegisterInCondition::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.addString ("[@baseline_incDecRegisterInCondition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::class_func_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                                                     const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mBitNumber = inValue ;
  }
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
//Pointer class for @baseline_bitTest_in_structured_if_condition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.addString ("[@baseline_bitTest_in_structured_if_condition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_model result ;
  if (in_mProgramName.isValid () && in_mDeviceName.isValid () && in_mConfigDefinitionList.isValid () && in_mRamDefinitionList.isValid () && in_mUnusedRegisterList.isValid () && in_mConstantDefinitionList.isValid () && in_mRoutineDefinitionList.isValid () && in_mUnusedRoutineList.isValid () && in_mEndOfProgram.isValid ()) {
    result = GALGAS_baseline_5F_model (in_mProgramName, in_mDeviceName, in_mConfigDefinitionList, in_mRamDefinitionList, in_mUnusedRegisterList, in_mConstantDefinitionList, in_mRoutineDefinitionList, in_mUnusedRoutineList, in_mEndOfProgram) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_model::objectCompare (const GALGAS_baseline_5F_model & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProgramName.objectCompare (inOperand.mProperty_mProgramName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeviceName.objectCompare (inOperand.mProperty_mDeviceName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConfigDefinitionList.objectCompare (inOperand.mProperty_mConfigDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRamDefinitionList.objectCompare (inOperand.mProperty_mRamDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnusedRegisterList.objectCompare (inOperand.mProperty_mUnusedRegisterList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantDefinitionList.objectCompare (inOperand.mProperty_mConstantDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineDefinitionList.objectCompare (inOperand.mProperty_mRoutineDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnusedRoutineList.objectCompare (inOperand.mProperty_mUnusedRoutineList) ;
  }
  if (result == kOperandEqual) {
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
  ioString.addString ("<struct @baseline_model:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mProgramName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mDeviceName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mConfigDefinitionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRamDefinitionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mUnusedRegisterList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (const GALGAS_lstring & inAttribute_mLabel
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (inAttribute_mLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (inAttribute_mLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::setter_setMLabel (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
    p->mProperty_mLabel = inValue ;
  }
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
//Pointer class for @baseline_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mProperty_mLabel (in_mLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("[@baseline_intermediate_pseudo_LABEL:") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mIsRegular.printNonNullClassInstanceProperties ("mIsRegular") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRegular.objectCompare (p->mProperty_mIsRegular) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::class_func_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                                             const GALGAS_bool & inAttribute_mIsRegular
                                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mIsRegular.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (inAttribute_mRoutineName, inAttribute_mIsRegular COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::setter_setMRoutineName (GALGAS_lstring inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::setter_setMIsRegular (GALGAS_bool inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    p->mProperty_mIsRegular = inValue ;
  }
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
//Pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                                          const GALGAS_bool & in_mIsRegular
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mIsRegular (in_mIsRegular) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.addString ("[@baseline_intermediate_pseudo_BEGIN_ROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIsRegular.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mPage.printNonNullClassInstanceProperties ("mPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPage.objectCompare (p->mProperty_mPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::class_func_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                                         const GALGAS_uint & inAttribute_mPage
                                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (inAttribute_mRoutineName, inAttribute_mPage COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::setter_setMRoutineName (GALGAS_lstring inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::setter_setMPage (GALGAS_uint inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    p->mProperty_mPage = inValue ;
  }
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
//Pointer class for @baseline_intermediate_pseudo_END_ROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                                      const GALGAS_uint & in_mPage
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mPage (in_mPage) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("[@baseline_intermediate_pseudo_END_ROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_GOTO * p = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_GOTO::objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO::GALGAS_baseline_5F_intermediate_5F_GOTO (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO::GALGAS_baseline_5F_intermediate_5F_GOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                 const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_GOTO::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @baseline_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

void cPtr_baseline_5F_intermediate_5F_GOTO::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@baseline_intermediate_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mCurrentPage.printNonNullClassInstanceProperties ("mCurrentPage") ;
    mProperty_mTargetPage.printNonNullClassInstanceProperties ("mTargetPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_JUMP * p = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCurrentPage.objectCompare (p->mProperty_mCurrentPage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetPage.objectCompare (p->mProperty_mTargetPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_JUMP::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP::GALGAS_baseline_5F_intermediate_5F_JUMP (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP::GALGAS_baseline_5F_intermediate_5F_JUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP GALGAS_baseline_5F_intermediate_5F_JUMP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                 const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                 const GALGAS_uint & inAttribute_mCurrentPage,
                                                                                                 const GALGAS_uint & inAttribute_mTargetPage
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mCurrentPage.isValid () && inAttribute_mTargetPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mCurrentPage, inAttribute_mTargetPage COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP::setter_setMCurrentPage (GALGAS_uint inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    p->mProperty_mCurrentPage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP::setter_setMTargetPage (GALGAS_uint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    p->mProperty_mTargetPage = inValue ;
  }
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
//Pointer class for @baseline_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_uint & in_mCurrentPage,
                                                                              const GALGAS_uint & in_mTargetPage
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mCurrentPage (in_mCurrentPage),
mProperty_mTargetPage (in_mTargetPage) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

void cPtr_baseline_5F_intermediate_5F_JUMP::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@baseline_intermediate_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetPage.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_CALL * p = (const cPtr_baseline_5F_intermediate_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_CALL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL::GALGAS_baseline_5F_intermediate_5F_CALL (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL::GALGAS_baseline_5F_intermediate_5F_CALL (const cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                 const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_CALL::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @baseline_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

void cPtr_baseline_5F_intermediate_5F_CALL::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@baseline_intermediate_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mCurrentPage.printNonNullClassInstanceProperties ("mCurrentPage") ;
    mProperty_mTargetPage.printNonNullClassInstanceProperties ("mTargetPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_JSR * p = (const cPtr_baseline_5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCurrentPage.objectCompare (p->mProperty_mCurrentPage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetPage.objectCompare (p->mProperty_mTargetPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_JSR::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR::GALGAS_baseline_5F_intermediate_5F_JSR (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR::GALGAS_baseline_5F_intermediate_5F_JSR (const cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR GALGAS_baseline_5F_intermediate_5F_JSR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                               const GALGAS_uint & inAttribute_mCurrentPage,
                                                                                               const GALGAS_uint & inAttribute_mTargetPage
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mCurrentPage.isValid () && inAttribute_mTargetPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mCurrentPage, inAttribute_mTargetPage COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR::setter_setMCurrentPage (GALGAS_uint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    p->mProperty_mCurrentPage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR::setter_setMTargetPage (GALGAS_uint inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetPage = inValue ;
  }
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
//Pointer class for @baseline_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel,
                                                                            const GALGAS_uint & in_mCurrentPage,
                                                                            const GALGAS_uint & in_mTargetPage
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mCurrentPage (in_mCurrentPage),
mProperty_mTargetPage (in_mTargetPage) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

void cPtr_baseline_5F_intermediate_5F_JSR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@baseline_intermediate_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetPage.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_TRIS::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
    mProperty_mOpcode.printNonNullClassInstanceProperties ("mOpcode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_TRIS * p = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOpcode.objectCompare (p->mProperty_mOpcode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_TRIS::objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS::GALGAS_baseline_5F_intermediate_5F_TRIS (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS::GALGAS_baseline_5F_intermediate_5F_TRIS (const cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS GALGAS_baseline_5F_intermediate_5F_TRIS::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                 const GALGAS_lstring & inAttribute_mOperand,
                                                                                                 const GALGAS_uint & inAttribute_mOpcode
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_TRIS result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOperand.isValid () && inAttribute_mOpcode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_TRIS (inAttribute_mInstructionLocation, inAttribute_mOperand, inAttribute_mOpcode COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_TRIS::setter_setMOperand (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_TRIS::setter_setMOpcode (GALGAS_uint inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    p->mProperty_mOpcode = inValue ;
  }
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
//Pointer class for @baseline_intermediate_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_TRIS::cPtr_baseline_5F_intermediate_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mOperand,
                                                                              const GALGAS_uint & in_mOpcode
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOperand (in_mOperand),
mProperty_mOpcode (in_mOpcode) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;
}

void cPtr_baseline_5F_intermediate_5F_TRIS::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@baseline_intermediate_TRIS:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOpcode.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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
    test_3 = GALGAS_bool (kIsStrictSup, var_offset_705.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
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
    test_6 = GALGAS_bool (kIsStrictSup, var_registerAddressList_1037.getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 40)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_bool var_found_1327 = GALGAS_bool (false) ;
      cEnumerator_uintlist enumerator_1350 (var_registerAddressList_1037, kENUMERATION_UP) ;
      bool bool_7 = var_found_1327.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 42)).isValidAndTrue () ;
      if (enumerator_1350.hasCurrentObject () && bool_7) {
        while (enumerator_1350.hasCurrentObject () && bool_7) {
          var_registerAddress_1250 = enumerator_1350.current_mValue (HERE) ;
          var_found_1327 = GALGAS_bool (kIsInfOrEqual, enumerator_1350.current_mValue (HERE).objectCompare (GALGAS_uint (uint32_t (31U)))) ;
          enumerator_1350.gotoNextObject () ;
          if (enumerator_1350.hasCurrentObject ()) {
            bool_7 = var_found_1327.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 42)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_found_1327.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 46)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_registerExpression temp_9 = this ;
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("the register cannot be accessed directly; use indirect addressing throught FSR register"), fixItArray10  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 47)) ;
        }
      }
    }
  }
  outArgument_outIntermediateRegisterDescription = GALGAS_baseline_5F_intermediate_5F_registerExpression::class_func_new (var_assemblyString_820, var_registerAddress_1250.add_operation (var_offset_705.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 51)) ;
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
  GALGAS_stringset var_reachedLabelSet_10626 ;
  {
  GALGAS_baseline_5F_intermediate_5F_instruction joker_10618 ; // Joker input parameter
  routine_findBaselineFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 265)), ioArgument_ioGeneratedInstructionList, joker_10618, var_reachedLabelSet_10626, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 265)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_GOTO temp_1 = this ;
    test_0 = var_reachedLabelSet_10626.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 266)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("baseline_optimizations.galgas", 267)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 267)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)).add_operation (GALGAS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_line_11038 ;
    const GALGAS_baseline_5F_intermediate_5F_GOTO temp_2 = this ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_11038, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 271)) ;
    GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_11174 ;
    {
    routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_11038.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 273)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_11174, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 273)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_11253 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_11174.ptr ())) ;
      if (nullptr == var_literalOp_11253.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_literalOp_11253.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 278)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_11253, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 279)) ;
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
        GALGAS_baseline_5F_intermediate_5F_GOTO var_goto_11817 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (var_firstInstruction_11174.ptr ())) ;
        if (nullptr == var_goto_11817.ptr ()) {
          test_5 = kBoolFalse ;
        }
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            const GALGAS_baseline_5F_intermediate_5F_GOTO temp_7 = this ;
            test_6 = GALGAS_bool (kIsNotEqual, temp_7.readProperty_mTargetLabel ().objectCompare (var_goto_11817.readProperty_mTargetLabel ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              const GALGAS_baseline_5F_intermediate_5F_GOTO temp_8 = this ;
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_GOTO::class_func_new (temp_8.readProperty_mInstructionLocation (), var_goto_11817.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 290)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)) ;
              }
              ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
              const GALGAS_baseline_5F_intermediate_5F_GOTO temp_9 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GALGAS_string (": GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (temp_9.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GALGAS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (var_goto_11817.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GALGAS_string (" replaced by GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (var_goto_11817.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)) ;
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
  GALGAS_uint var_line_12910 ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_12910, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 312)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_13089 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_12910.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 315)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_13089, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 314)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_13166 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_13089.ptr ())) ;
    if (nullptr == var_literalOp_13166.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_literalOp_13166.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 323)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_13166, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 324)) ;
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
      GALGAS_baseline_5F_intermediate_5F_GOTO var_goto_13708 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (var_firstInstruction_13089.ptr ())) ;
      if (nullptr == var_goto_13708.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_5 = this ;
          test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mTargetLabel ().objectCompare (var_goto_13708.readProperty_mTargetLabel ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_6 = this ;
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_7 = this ;
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_8 = this ;
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_JUMP::class_func_new (temp_6.readProperty_mInstructionLocation (), var_goto_13708.readProperty_mTargetLabel (), temp_7.readProperty_mCurrentPage (), temp_8.readProperty_mTargetPage ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 335)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 334)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_9 = this ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (temp_9.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (GALGAS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (var_goto_13708.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 344)).add_operation (GALGAS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 344)).add_operation (var_goto_13708.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GALGAS_baseline_5F_intermediate_5F_JUMP var_jump_14368 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JUMP *> (var_firstInstruction_13089.ptr ())) ;
        if (nullptr == var_jump_14368.ptr ()) {
          test_10 = kBoolFalse ;
        }
        if (kBoolTrue == test_10) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_12 = this ;
            test_11 = GALGAS_bool (kIsNotEqual, temp_12.readProperty_mTargetLabel ().objectCompare (var_jump_14368.readProperty_mTargetLabel ())).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              const GALGAS_baseline_5F_intermediate_5F_JUMP temp_13 = this ;
              const GALGAS_baseline_5F_intermediate_5F_JUMP temp_14 = this ;
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_JUMP::class_func_new (temp_13.readProperty_mInstructionLocation (), var_jump_14368.readProperty_mTargetLabel (), temp_14.readProperty_mCurrentPage (), var_jump_14368.readProperty_mTargetPage ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 350)) ;
              }
              ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
              const GALGAS_baseline_5F_intermediate_5F_JUMP temp_15 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (temp_15.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (GALGAS_string (" branching to JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (var_jump_14368.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 360)).add_operation (GALGAS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 360)).add_operation (var_jump_14368.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 361)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)) ;
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
  GALGAS_uint var_line_15496 ;
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_15496, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 376)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_15675 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_15496.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 379)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_15675, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 378)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_15752 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_15675.ptr ())) ;
    if (nullptr == var_literalOp_15752.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_literalOp_15752.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 387)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          const GALGAS_baseline_5F_intermediate_5F_CALL temp_3 = this ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::class_func_new (temp_3.readProperty_mInstructionLocation (), GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 391)), var_literalOp_15752.readProperty_mLiteralValue ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 389)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 388)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_CALL temp_4 = this ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (GALGAS_string (": CALL "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (GALGAS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (var_literalOp_15752.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 397)).add_operation (GALGAS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 397)).add_operation (var_literalOp_15752.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 398)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)) ;
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
  GALGAS_uint var_line_17004 ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_17004, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 413)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_17183 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_17004.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 416)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_17183, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 415)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_17260 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_17183.ptr ())) ;
    if (nullptr == var_literalOp_17260.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_literalOp_17260.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 424)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          const GALGAS_baseline_5F_intermediate_5F_JSR temp_3 = this ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::class_func_new (temp_3.readProperty_mInstructionLocation (), GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 428)), var_literalOp_17260.readProperty_mLiteralValue ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 426)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 425)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_JSR temp_4 = this ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (GALGAS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (var_literalOp_17260.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 434)).add_operation (GALGAS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 434)).add_operation (var_literalOp_17260.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 435)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)) ;
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
  GALGAS_baseline_5F_intermediate_5F_instruction var_nextInstruction_18574 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 451)) ;
  GALGAS_bool var_reachable_18705 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL var__18732 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (var_nextInstruction_18574.ptr ())) ;
    if (nullptr == var__18732.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      var_reachable_18705 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_reachable_18705.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 461)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("baseline_optimizations.galgas", 463)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 462)) ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mIsRegular.printNonNullClassInstanceProperties ("mIsRegular") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRegular.objectCompare (p->mProperty_mIsRegular) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::class_func_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                                 const GALGAS_bool & inAttribute_mIsRegular
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mIsRegular.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (inAttribute_mRoutineName, inAttribute_mIsRegular COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::setter_setMRoutineName (GALGAS_lstring inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::setter_setMIsRegular (GALGAS_bool inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    p->mProperty_mIsRegular = inValue ;
  }
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
//Pointer class for @baseline_assembly_pseudo_BEGINOFROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                              const GALGAS_bool & in_mIsRegular
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mIsRegular (in_mIsRegular) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.addString ("[@baseline_assembly_pseudo_BEGINOFROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIsRegular.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mPage.printNonNullClassInstanceProperties ("mPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPage.objectCompare (p->mProperty_mPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::class_func_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                             const GALGAS_uint & inAttribute_mPage
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (inAttribute_mRoutineName, inAttribute_mPage COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::setter_setMRoutineName (GALGAS_lstring inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::setter_setMPage (GALGAS_uint inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    p->mProperty_mPage = inValue ;
  }
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
//Pointer class for @baseline_assembly_pseudo_ENDOFROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                          const GALGAS_uint & in_mPage
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mPage (in_mPage) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.addString ("[@baseline_assembly_pseudo_ENDOFROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::class_func_new (const GALGAS_lstring & inAttribute_mLabel
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  if (inAttribute_mLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (inAttribute_mLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::setter_setMLabel (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
    p->mProperty_mLabel = inValue ;
  }
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
//Pointer class for @baseline_assembly_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mLabel (in_mLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("[@baseline_assembly_pseudo_LABEL:") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_GOTO * p = (const cPtr_baseline_5F_assembly_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_GOTO::objectCompare (const GALGAS_baseline_5F_assembly_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO::GALGAS_baseline_5F_assembly_5F_GOTO (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO::GALGAS_baseline_5F_assembly_5F_GOTO (const cPtr_baseline_5F_assembly_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                         const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_GOTO::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_GOTO * p = (cPtr_baseline_5F_assembly_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @baseline_assembly_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_GOTO::cPtr_baseline_5F_assembly_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTargetLabel
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;
}

void cPtr_baseline_5F_assembly_5F_GOTO::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("[@baseline_assembly_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_CALL * p = (const cPtr_baseline_5F_assembly_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_CALL::objectCompare (const GALGAS_baseline_5F_assembly_5F_CALL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL::GALGAS_baseline_5F_assembly_5F_CALL (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL::GALGAS_baseline_5F_assembly_5F_CALL (const cPtr_baseline_5F_assembly_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                         const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_CALL::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_CALL * p = (cPtr_baseline_5F_assembly_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @baseline_assembly_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_CALL::cPtr_baseline_5F_assembly_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTargetLabel
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;
}

void cPtr_baseline_5F_assembly_5F_CALL::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("[@baseline_assembly_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_TRIS::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
    mProperty_mOpcode.printNonNullClassInstanceProperties ("mOpcode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_TRIS * p = (const cPtr_baseline_5F_assembly_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOpcode.objectCompare (p->mProperty_mOpcode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_TRIS::objectCompare (const GALGAS_baseline_5F_assembly_5F_TRIS & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS::GALGAS_baseline_5F_assembly_5F_TRIS (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS::GALGAS_baseline_5F_assembly_5F_TRIS (const cPtr_baseline_5F_assembly_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS GALGAS_baseline_5F_assembly_5F_TRIS::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                         const GALGAS_lstring & inAttribute_mOperand,
                                                                                         const GALGAS_uint & inAttribute_mOpcode
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_TRIS result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOperand.isValid () && inAttribute_mOpcode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_TRIS (inAttribute_mInstructionLocation, inAttribute_mOperand, inAttribute_mOpcode COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_TRIS::setter_setMOperand (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_TRIS::setter_setMOpcode (GALGAS_uint inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    p->mProperty_mOpcode = inValue ;
  }
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
//Pointer class for @baseline_assembly_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_TRIS::cPtr_baseline_5F_assembly_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mOperand,
                                                                      const GALGAS_uint & in_mOpcode
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOperand (in_mOperand),
mProperty_mOpcode (in_mOpcode) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;
}

void cPtr_baseline_5F_assembly_5F_TRIS::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("[@baseline_assembly_TRIS:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOpcode.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_banksel_5F_register::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
    mProperty_mWarningOnUselessBanksel.printNonNullClassInstanceProperties ("mWarningOnUselessBanksel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_banksel_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (const cPtr_midrange_5F_instruction_5F_banksel_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarningOnUselessBanksel.objectCompare (p->mProperty_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_banksel_5F_register::objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register::GALGAS_midrange_5F_instruction_5F_banksel_5F_register (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register::GALGAS_midrange_5F_instruction_5F_banksel_5F_register (const cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register GALGAS_midrange_5F_instruction_5F_banksel_5F_register::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                             const GALGAS_registerExpression & inAttribute_mRegister,
                                                                                                                             const GALGAS_bool & inAttribute_mWarningOnUselessBanksel
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel_5F_register result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegister.isValid () && inAttribute_mWarningOnUselessBanksel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register (inAttribute_mInstructionLocation, inAttribute_mRegister, inAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_banksel_5F_register::setter_setMRegister (GALGAS_registerExpression inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    p->mProperty_mRegister = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_banksel_5F_register::setter_setMWarningOnUselessBanksel (GALGAS_bool inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    p->mProperty_mWarningOnUselessBanksel = inValue ;
  }
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
//Pointer class for @midrange_instruction_banksel_register class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel_5F_register::cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                          const GALGAS_registerExpression & in_mRegister,
                                                                                                          const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegister (in_mRegister),
mProperty_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;
}

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_banksel_register:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_savebank::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfSaveBankInstruction.printNonNullClassInstanceProperties ("mEndOfSaveBankInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_savebank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_savebank * p = (const cPtr_midrange_5F_instruction_5F_savebank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSaveBankInstruction.objectCompare (p->mProperty_mEndOfSaveBankInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_savebank::objectCompare (const GALGAS_midrange_5F_instruction_5F_savebank & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank::GALGAS_midrange_5F_instruction_5F_savebank (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank::GALGAS_midrange_5F_instruction_5F_savebank (const cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_savebank) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank GALGAS_midrange_5F_instruction_5F_savebank::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                       const GALGAS_registerExpression & inAttribute_mRegister,
                                                                                                       const GALGAS_midrange_5F_instructionList & inAttribute_mInstructionList,
                                                                                                       const GALGAS_location & inAttribute_mEndOfSaveBankInstruction
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_savebank result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegister.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfSaveBankInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_savebank (inAttribute_mInstructionLocation, inAttribute_mRegister, inAttribute_mInstructionList, inAttribute_mEndOfSaveBankInstruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_savebank::setter_setMRegister (GALGAS_registerExpression inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    p->mProperty_mRegister = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_savebank::setter_setMInstructionList (GALGAS_midrange_5F_instructionList inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_savebank::setter_setMEndOfSaveBankInstruction (GALGAS_location inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    p->mProperty_mEndOfSaveBankInstruction = inValue ;
  }
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
//Pointer class for @midrange_instruction_savebank class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_savebank::cPtr_midrange_5F_instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_registerExpression & in_mRegister,
                                                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                    const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegister (in_mRegister),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfSaveBankInstruction (in_mEndOfSaveBankInstruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;
}

void cPtr_midrange_5F_instruction_5F_savebank::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_savebank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfSaveBankInstruction.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

typeComparisonResult cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInstruction.objectCompare (p->mProperty_mEndOfInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::objectCompare (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                       const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                                       const GALGAS_immediatExpression & inAttribute_mLowerBoundExpression,
                                                                                                                       const GALGAS_immediatExpression & inAttribute_mUpperBoundExpression,
                                                                                                                       const GALGAS_midrange_5F_instructionList & inAttribute_mInstructionList,
                                                                                                                       const GALGAS_location & inAttribute_mEndOfInstruction
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (inAttribute_mInstructionLocation, inAttribute_mConstantName, inAttribute_mLowerBoundExpression, inAttribute_mUpperBoundExpression, inAttribute_mInstructionList, inAttribute_mEndOfInstruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMConstantName (GALGAS_lstring inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMLowerBoundExpression (GALGAS_immediatExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMUpperBoundExpression (GALGAS_immediatExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMInstructionList (GALGAS_midrange_5F_instructionList inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMEndOfInstruction (GALGAS_location inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mEndOfInstruction = inValue ;
  }
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
mProperty_mConstantName (in_mConstantName),
mProperty_mLowerBoundExpression (in_mLowerBoundExpression),
mProperty_mUpperBoundExpression (in_mUpperBoundExpression),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfInstruction (in_mEndOfInstruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;
}

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_STATIC_REPEAT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FD_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FD_base_code") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FD_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_FD::objectCompare (const GALGAS_midrange_5F_instruction_5F_FD & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD::GALGAS_midrange_5F_instruction_5F_FD (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD::GALGAS_midrange_5F_instruction_5F_FD (const cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD GALGAS_midrange_5F_instruction_5F_FD::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                           const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inAttribute_mInstruction_5F_FD_5F_base_5F_code,
                                                                                           const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                           const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FD_5F_base_5F_code.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FD (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FD_5F_base_5F_code, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FD::setter_setMInstruction_5F_FD_5F_base_5F_code (GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    p->mProperty_mInstruction_5F_FD_5F_base_5F_code = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FD::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FD::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
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
//Pointer class for @midrange_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FD::cPtr_midrange_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (in_mInstruction_5F_FD_5F_base_5F_code),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;
}

void cPtr_midrange_5F_instruction_5F_FD::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_FD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mFAinstruction.printNonNullClassInstanceProperties ("mFAinstruction") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_F * p = (const cPtr_midrange_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFAinstruction.objectCompare (p->mProperty_mFAinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_F::objectCompare (const GALGAS_midrange_5F_instruction_5F_F & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F::GALGAS_midrange_5F_instruction_5F_F (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F::GALGAS_midrange_5F_instruction_5F_F (const cPtr_midrange_5F_instruction_5F_F * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F GALGAS_midrange_5F_instruction_5F_F::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                         const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inAttribute_mFAinstruction,
                                                                                         const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_F result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFAinstruction.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_F (inAttribute_mInstructionLocation, inAttribute_mFAinstruction, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_F::setter_setMFAinstruction (GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    p->mProperty_mFAinstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_F::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
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
//Pointer class for @midrange_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_F::cPtr_midrange_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFAinstruction (in_mFAinstruction),
mProperty_mRegisterExpression (in_mRegisterExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;
}

void cPtr_midrange_5F_instruction_5F_F::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBitOrientedOp.printNonNullClassInstanceProperties ("mBitOrientedOp") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitOrientedOp.objectCompare (p->mProperty_mBitOrientedOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_FB::objectCompare (const GALGAS_midrange_5F_instruction_5F_FB & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB::GALGAS_midrange_5F_instruction_5F_FB (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB::GALGAS_midrange_5F_instruction_5F_FB (const cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB GALGAS_midrange_5F_instruction_5F_FB::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                           const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                           const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                           const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FB (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FB::setter_setMBitOrientedOp (GALGAS_midrange_5F_bit_5F_oriented_5F_op inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FB::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FB::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    p->mProperty_mBitNumber = inValue ;
  }
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
//Pointer class for @midrange_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FB::cPtr_midrange_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBitOrientedOp (in_mBitOrientedOp),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;
}

void cPtr_midrange_5F_instruction_5F_FB::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_FB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_CALL * p = (const cPtr_midrange_5F_instruction_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_CALL::objectCompare (const GALGAS_midrange_5F_instruction_5F_CALL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL::GALGAS_midrange_5F_instruction_5F_CALL (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL::GALGAS_midrange_5F_instruction_5F_CALL (const cPtr_midrange_5F_instruction_5F_CALL * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL GALGAS_midrange_5F_instruction_5F_CALL::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_CALL::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_CALL * p = (cPtr_midrange_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @midrange_instruction_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CALL::cPtr_midrange_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;
}

void cPtr_midrange_5F_instruction_5F_CALL::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_JSR * p = (const cPtr_midrange_5F_instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_JSR::objectCompare (const GALGAS_midrange_5F_instruction_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR::GALGAS_midrange_5F_instruction_5F_JSR (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR::GALGAS_midrange_5F_instruction_5F_JSR (const cPtr_midrange_5F_instruction_5F_JSR * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR GALGAS_midrange_5F_instruction_5F_JSR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                             const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_JSR * p = (cPtr_midrange_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @midrange_instruction_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JSR::cPtr_midrange_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel
                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;
}

void cPtr_midrange_5F_instruction_5F_JSR::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_JUMP * p = (const cPtr_midrange_5F_instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_JUMP::objectCompare (const GALGAS_midrange_5F_instruction_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP::GALGAS_midrange_5F_instruction_5F_JUMP (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP::GALGAS_midrange_5F_instruction_5F_JUMP (const cPtr_midrange_5F_instruction_5F_JUMP * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP GALGAS_midrange_5F_instruction_5F_JUMP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_JUMP::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_JUMP * p = (cPtr_midrange_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @midrange_instruction_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JUMP::cPtr_midrange_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;
}

void cPtr_midrange_5F_instruction_5F_JUMP::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_GOTO * p = (const cPtr_midrange_5F_instruction_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_GOTO::objectCompare (const GALGAS_midrange_5F_instruction_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO::GALGAS_midrange_5F_instruction_5F_GOTO (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO::GALGAS_midrange_5F_instruction_5F_GOTO (const cPtr_midrange_5F_instruction_5F_GOTO * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO GALGAS_midrange_5F_instruction_5F_GOTO::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_GOTO::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_GOTO * p = (cPtr_midrange_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @midrange_instruction_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_GOTO::cPtr_midrange_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;
}

void cPtr_midrange_5F_instruction_5F_GOTO::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                 const GALGAS_midrange_5F_instruction & inAttribute_mInstruction,
                                                                                                                 const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                 const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                 const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mBitNumber = inValue ;
  }
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
//Pointer class for @midrange_instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                              const GALGAS_bool & in_mSkipIfSet,
                                                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_IF_BitTest:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                               const GALGAS_midrange_5F_instruction & inAttribute_mInstruction,
                                                                                                               const GALGAS_bool & inAttribute_mIncrement,
                                                                                                               const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                               const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mIncrement.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mIncrement, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setMIncrement (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
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
//Pointer class for @midrange_instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                            const GALGAS_bool & in_mIncrement,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mProperty_mIncrement (in_mIncrement),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("[@midrange_instruction_IF_IncDec:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

typeComparisonResult cPtr_midrange_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_incDecRegisterInCondition::objectCompare (const GALGAS_midrange_5F_incDecRegisterInCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition::GALGAS_midrange_5F_incDecRegisterInCondition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition::GALGAS_midrange_5F_incDecRegisterInCondition (const cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition GALGAS_midrange_5F_incDecRegisterInCondition::class_func_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                           const GALGAS_bool & inAttribute_mIncrement,
                                                                                                           const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                           const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_incDecRegisterInCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_incDecRegisterInCondition (inAttribute_mRegisterExpression, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setMIncrement (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
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
//Pointer class for @midrange_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_incDecRegisterInCondition::cPtr_midrange_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

void cPtr_midrange_5F_incDecRegisterInCondition::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.addString ("[@midrange_incDecRegisterInCondition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::class_func_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                                                     const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mBitNumber = inValue ;
  }
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
//Pointer class for @midrange_bitTest_in_structured_if_condition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.addString ("[@midrange_bitTest_in_structured_if_condition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_model result ;
  if (in_mProgramName.isValid () && in_mDeviceName.isValid () && in_mConfigDefinitionList.isValid () && in_mRamDefinitionList.isValid () && in_mUnusedRegisterList.isValid () && in_mInterruptDefinitionList.isValid () && in_mConstantDefinitionList.isValid () && in_mRoutineDefinitionList.isValid () && in_mUnusedRoutineList.isValid () && in_mNeedsComputedGoto2.isValid () && in_mNeedsComputedGoto4.isValid () && in_mEndOfProgram.isValid ()) {
    result = GALGAS_midrange_5F_model (in_mProgramName, in_mDeviceName, in_mConfigDefinitionList, in_mRamDefinitionList, in_mUnusedRegisterList, in_mInterruptDefinitionList, in_mConstantDefinitionList, in_mRoutineDefinitionList, in_mUnusedRoutineList, in_mNeedsComputedGoto2, in_mNeedsComputedGoto4, in_mEndOfProgram) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_model::objectCompare (const GALGAS_midrange_5F_model & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProgramName.objectCompare (inOperand.mProperty_mProgramName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeviceName.objectCompare (inOperand.mProperty_mDeviceName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConfigDefinitionList.objectCompare (inOperand.mProperty_mConfigDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRamDefinitionList.objectCompare (inOperand.mProperty_mRamDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnusedRegisterList.objectCompare (inOperand.mProperty_mUnusedRegisterList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptDefinitionList.objectCompare (inOperand.mProperty_mInterruptDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantDefinitionList.objectCompare (inOperand.mProperty_mConstantDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineDefinitionList.objectCompare (inOperand.mProperty_mRoutineDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnusedRoutineList.objectCompare (inOperand.mProperty_mUnusedRoutineList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsComputedGoto_32_.objectCompare (inOperand.mProperty_mNeedsComputedGoto_32_) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsComputedGoto_34_.objectCompare (inOperand.mProperty_mNeedsComputedGoto_34_) ;
  }
  if (result == kOperandEqual) {
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
  ioString.addString ("<struct @midrange_model:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mProgramName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mDeviceName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mConfigDefinitionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRamDefinitionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mUnusedRegisterList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInterruptDefinitionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mNeedsComputedGoto_32_.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mNeedsComputedGoto_34_.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
    test_3 = GALGAS_bool (kIsStrictSup, var_offset_648.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
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
    test_6 = GALGAS_bool (kIsSupOrEqual, var_offset_648.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 39)).objectCompare (var_size_1002)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_registerExpression temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GALGAS_string ("maximum index value is ").add_operation (var_size_1002.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), fixItArray8  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)) ;
    }
  }
  GALGAS_uintlist var_acceptableBanks_1305 = GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("midrange_intermediate_classes.galgas", 43)) ;
  cEnumerator_uintlist enumerator_1351 (var_registerAddressList_967, kENUMERATION_UP) ;
  while (enumerator_1351.hasCurrentObject ()) {
    var_acceptableBanks_1305.addAssign_operation (enumerator_1351.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45)) ;
    enumerator_1351.gotoNextObject () ;
  }
  GALGAS_uint var_registerAddress_1445 = GALGAS_uint (uint32_t (0U)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_intermediate_classes.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_uint var_bank_1583 = GALGAS_uint (uint32_t (0U)) ;
      GALGAS_bool var_ok_1606 = GALGAS_bool (true) ;
      if (constinArgument_inTotalBankCount.isValid ()) {
        uint32_t variant_1620 = constinArgument_inTotalBankCount.uintValue () ;
        bool loop_1620 = true ;
        while (loop_1620) {
          loop_1620 = GALGAS_bool (kIsStrictInf, var_bank_1583.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1606 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).isValid () ;
          if (loop_1620) {
            loop_1620 = GALGAS_bool (kIsStrictInf, var_bank_1583.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1606 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).boolValue () ;
          }
          if (loop_1620 && (0 == variant_1620)) {
            loop_1620 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)) ;
          }
          if (loop_1620) {
            variant_1620 -- ;
            var_ok_1606 = GALGAS_bool (false) ;
            cEnumerator_uintlist enumerator_1712 (var_registerAddressList_967, kENUMERATION_UP) ;
            bool bool_10 = var_ok_1606.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
            if (enumerator_1712.hasCurrentObject () && bool_10) {
              while (enumerator_1712.hasCurrentObject () && bool_10) {
                var_ok_1606 = GALGAS_bool (kIsSupOrEqual, enumerator_1712.current_mValue (HERE).objectCompare (var_bank_1583.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_1712.current_mValue (HERE).objectCompare (var_bank_1583.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)).add_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)) ;
                var_registerAddress_1445 = enumerator_1712.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 57)) ;
                enumerator_1712.gotoNextObject () ;
                if (enumerator_1712.hasCurrentObject ()) {
                  bool_10 = var_ok_1606.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
                }
              }
            }
            var_bank_1583.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 59)) ;
          }
        }
      }
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = var_ok_1606.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 61)).boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_string var_acceptableBankMessage_1941 = GALGAS_string::makeEmptyString () ;
          cEnumerator_uintlist enumerator_1979 (var_registerAddressList_967, kENUMERATION_UP) ;
          while (enumerator_1979.hasCurrentObject ()) {
            var_acceptableBankMessage_1941.plusAssign_operation(enumerator_1979.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)) ;
            if (enumerator_1979.hasNextObject ()) {
              var_acceptableBankMessage_1941.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)) ;
            }
            enumerator_1979.gotoNextObject () ;
          }
          const GALGAS_registerExpression temp_12 = this ;
          const GALGAS_registerExpression temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("as no bank is currently known, the '").add_operation (temp_13.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_string ("' register accessible from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (var_acceptableBankMessage_1941, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_string (", but should be able to be accessed from any bank setting"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)), fixItArray14  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_bool var_found_2363 = GALGAS_bool (false) ;
    cEnumerator_uintlist enumerator_2386 (var_registerAddressList_967, kENUMERATION_UP) ;
    bool bool_15 = var_found_2363.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
    if (enumerator_2386.hasCurrentObject () && bool_15) {
      while (enumerator_2386.hasCurrentObject () && bool_15) {
        var_found_2363 = GALGAS_bool (kIsSupOrEqual, enumerator_2386.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_2386.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)).add_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)) ;
        var_registerAddress_1445 = enumerator_2386.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 73)) ;
        enumerator_2386.gotoNextObject () ;
        if (enumerator_2386.hasCurrentObject ()) {
          bool_15 = var_found_2363.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = var_found_2363.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 75)).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_acceptableBankMessage_2612 = GALGAS_string::makeEmptyString () ;
        cEnumerator_uintlist enumerator_2650 (var_registerAddressList_967, kENUMERATION_UP) ;
        while (enumerator_2650.hasCurrentObject ()) {
          var_acceptableBankMessage_2612.plusAssign_operation(enumerator_2650.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)) ;
          if (enumerator_2650.hasNextObject ()) {
            var_acceptableBankMessage_2612.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)) ;
          }
          enumerator_2650.gotoNextObject () ;
        }
        const GALGAS_registerExpression temp_17 = this ;
        const GALGAS_registerExpression temp_18 = this ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_18.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string ("' register cannot be accessed from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string (" (valid bank setting: "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (var_acceptableBankMessage_2612, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), fixItArray19  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)) ;
      }
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_midrange_5F_intermediate_5F_registerExpression::class_func_new (var_assemblyString_763, var_registerAddress_1445.add_operation (var_offset_648.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 85)) ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
    mProperty_mIsDeletable.printNonNullClassInstanceProperties ("mIsDeletable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsDeletable.objectCompare (p->mProperty_mIsDeletable) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GALGAS_midrange_5F_intermediate_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (const GALGAS_lstring & inAttribute_mLabel,
                                                                                                                       const GALGAS_bool & inAttribute_mIsDeletable
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (inAttribute_mLabel.isValid () && inAttribute_mIsDeletable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (inAttribute_mLabel, inAttribute_mIsDeletable COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::setter_setMLabel (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    p->mProperty_mLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::setter_setMIsDeletable (GALGAS_bool inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    p->mProperty_mIsDeletable = inValue ;
  }
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
//Pointer class for @midrange_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel,
                                                                                                    const GALGAS_bool & in_mIsDeletable
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (THERE),
mProperty_mLabel (in_mLabel),
mProperty_mIsDeletable (in_mIsDeletable) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;
}

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("[@midrange_intermediate_pseudo_LABEL:") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIsDeletable.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mBit_31__31_.printNonNullClassInstanceProperties ("mBit11") ;
    mProperty_mBit_31__32_.printNonNullClassInstanceProperties ("mBit12") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_intermediate_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_JUMP * p = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBit_31__31_.objectCompare (p->mProperty_mBit_31__31_) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBit_31__32_.objectCompare (p->mProperty_mBit_31__32_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_JUMP::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP::GALGAS_midrange_5F_intermediate_5F_JUMP (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP::GALGAS_midrange_5F_intermediate_5F_JUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP GALGAS_midrange_5F_intermediate_5F_JUMP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                 const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                 const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__31_,
                                                                                                 const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__32_
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mBit_31__31_.isValid () && inAttribute_mBit_31__32_.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mBit_31__31_, inAttribute_mBit_31__32_ COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP::setter_setMBit_31__31_ (GALGAS_midrange_5F_call_5F_goto_5F_bit inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    p->mProperty_mBit_31__31_ = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP::setter_setMBit_31__32_ (GALGAS_midrange_5F_call_5F_goto_5F_bit inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    p->mProperty_mBit_31__32_ = inValue ;
  }
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
//Pointer class for @midrange_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_JUMP::cPtr_midrange_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                              const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mBit_31__31_ (in_mBit_31__31_),
mProperty_mBit_31__32_ (in_mBit_31__32_) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;
}

void cPtr_midrange_5F_intermediate_5F_JUMP::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@midrange_intermediate_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBit_31__31_.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBit_31__32_.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_intermediate_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_GOTO * p = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_GOTO::objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO::GALGAS_midrange_5F_intermediate_5F_GOTO (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO::GALGAS_midrange_5F_intermediate_5F_GOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                 const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_GOTO::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_GOTO * p = (cPtr_midrange_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @midrange_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_GOTO::cPtr_midrange_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;
}

void cPtr_midrange_5F_intermediate_5F_GOTO::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@midrange_intermediate_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_intermediate_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_CALL * p = (const cPtr_midrange_5F_intermediate_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_CALL::objectCompare (const GALGAS_midrange_5F_intermediate_5F_CALL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL::GALGAS_midrange_5F_intermediate_5F_CALL (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL::GALGAS_midrange_5F_intermediate_5F_CALL (const cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                 const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_CALL::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_CALL * p = (cPtr_midrange_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
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
//Pointer class for @midrange_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_CALL::cPtr_midrange_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;
}

void cPtr_midrange_5F_intermediate_5F_CALL::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@midrange_intermediate_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mBit_31__31_.printNonNullClassInstanceProperties ("mBit11") ;
    mProperty_mBit_31__32_.printNonNullClassInstanceProperties ("mBit12") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_JSR * p = (const cPtr_midrange_5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBit_31__31_.objectCompare (p->mProperty_mBit_31__31_) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBit_31__32_.objectCompare (p->mProperty_mBit_31__32_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_JSR::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR::GALGAS_midrange_5F_intermediate_5F_JSR (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR::GALGAS_midrange_5F_intermediate_5F_JSR (const cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR GALGAS_midrange_5F_intermediate_5F_JSR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                               const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__31_,
                                                                                               const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__32_
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mBit_31__31_.isValid () && inAttribute_mBit_31__32_.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mBit_31__31_, inAttribute_mBit_31__32_ COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JSR::setter_setMBit_31__31_ (GALGAS_midrange_5F_call_5F_goto_5F_bit inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    p->mProperty_mBit_31__31_ = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JSR::setter_setMBit_31__32_ (GALGAS_midrange_5F_call_5F_goto_5F_bit inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    p->mProperty_mBit_31__32_ = inValue ;
  }
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
//Pointer class for @midrange_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_JSR::cPtr_midrange_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel,
                                                                            const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                            const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mBit_31__31_ (in_mBit_31__31_),
mProperty_mBit_31__32_ (in_mBit_31__32_) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;
}

void cPtr_midrange_5F_intermediate_5F_JSR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@midrange_intermediate_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBit_31__31_.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBit_31__32_.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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
  GALGAS_stringset var_reachedLabelSet_9843 ;
  {
  GALGAS_midrange_5F_intermediate_5F_instruction joker_9835 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 233)), ioArgument_ioGeneratedInstructionList, joker_9835, var_reachedLabelSet_9843, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 233)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
    test_0 = var_reachedLabelSet_9843.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 235)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("midrange_optimizations.galgas", 236)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 236)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)).add_operation (GALGAS_string (": JUMP branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_line_10298 ;
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
    GALGAS_bool joker_10303 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_10298, joker_10303, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 240)) ;
    GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction_10437 ;
    {
    routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (var_line_10298.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 242)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_10437, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 242)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN var__10516 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (var_firstInstruction_10437.ptr ())) ;
      if (nullptr == var__10516.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        {
        const GALGAS_midrange_5F_intermediate_5F_JUMP temp_4 = this ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::class_func_new (temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 248)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 247)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 252)).add_operation (GALGAS_string (": JUMP branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 252)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_11005 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_10437.ptr ())) ;
        if (nullptr == var_literalOp_11005.ptr ()) {
          test_5 = kBoolFalse ;
        }
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_literalOp_11005.readProperty_mLiteralInstruction ().objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 255)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_11005, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 256)) ;
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
          GALGAS_midrange_5F_intermediate_5F_JUMP var_jump_11549 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_firstInstruction_10437.ptr ())) ;
          if (nullptr == var_jump_11549.ptr ()) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              const GALGAS_midrange_5F_intermediate_5F_JUMP temp_9 = this ;
              test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mTargetLabel ().objectCompare (var_jump_11549.readProperty_mTargetLabel ())).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                const GALGAS_midrange_5F_intermediate_5F_JUMP temp_10 = this ;
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_JUMP::class_func_new (temp_10.readProperty_mInstructionLocation (), var_jump_11549.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 267)), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 267))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 267)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 266)) ;
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
  GALGAS_stringset var_reachedLabelSet_12715 ;
  {
  GALGAS_midrange_5F_intermediate_5F_instruction joker_12707 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 288)), ioArgument_ioGeneratedInstructionList, joker_12707, var_reachedLabelSet_12715, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 288)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_GOTO temp_1 = this ;
    test_0 = var_reachedLabelSet_12715.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 290)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("midrange_optimizations.galgas", 291)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 291)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 292)).add_operation (GALGAS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 292)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_line_13169 ;
    const GALGAS_midrange_5F_intermediate_5F_GOTO temp_2 = this ;
    GALGAS_bool joker_13174 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_13169, joker_13174, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 295)) ;
    GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction_13308 ;
    {
    routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (var_line_13169.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 297)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_13308, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 297)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN var__13415 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (var_firstInstruction_13308.ptr ())) ;
      if (nullptr == var__13415.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        {
        const GALGAS_midrange_5F_intermediate_5F_GOTO temp_4 = this ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::class_func_new (temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 304)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 303)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 308)).add_operation (GALGAS_string (": GOTO branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 308)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_13904 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_13308.ptr ())) ;
        if (nullptr == var_literalOp_13904.ptr ()) {
          test_5 = kBoolFalse ;
        }
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_literalOp_13904.readProperty_mLiteralInstruction ().objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 311)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_13904, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 312)) ;
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
          GALGAS_midrange_5F_intermediate_5F_JUMP var_jump_14448 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_firstInstruction_13308.ptr ())) ;
          if (nullptr == var_jump_14448.ptr ()) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              const GALGAS_midrange_5F_intermediate_5F_GOTO temp_9 = this ;
              test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mTargetLabel ().objectCompare (var_jump_14448.readProperty_mTargetLabel ())).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                const GALGAS_midrange_5F_intermediate_5F_GOTO temp_10 = this ;
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_JUMP::class_func_new (temp_10.readProperty_mInstructionLocation (), var_jump_14448.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 323)), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 323))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 323)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 322)) ;
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
            GALGAS_midrange_5F_intermediate_5F_GOTO var_goto_15036 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_firstInstruction_13308.ptr ())) ;
            if (nullptr == var_goto_15036.ptr ()) {
              test_11 = kBoolFalse ;
            }
            if (kBoolTrue == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                const GALGAS_midrange_5F_intermediate_5F_GOTO temp_13 = this ;
                test_12 = GALGAS_bool (kIsNotEqual, temp_13.readProperty_mTargetLabel ().objectCompare (var_goto_15036.readProperty_mTargetLabel ())).boolEnum () ;
                if (kBoolTrue == test_12) {
                  {
                  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_14 = this ;
                  ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_GOTO::class_func_new (temp_14.readProperty_mInstructionLocation (), var_goto_15036.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 333)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 332)) ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mWarningOnUselessBanksel.printNonNullClassInstanceProperties ("mWarningOnUselessBanksel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_banksel_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarningOnUselessBanksel.objectCompare (p->mProperty_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                           const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                           const GALGAS_bool & inAttribute_mWarningOnUselessBanksel
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mWarningOnUselessBanksel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (inAttribute_mInstructionLocation, inAttribute_mRegisterExpression, inAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::setter_setMWarningOnUselessBanksel (GALGAS_bool inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    p->mProperty_mWarningOnUselessBanksel = inValue ;
  }
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
//Pointer class for @pic18Instruction_banksel_register class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_banksel_5F_register::cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                        const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_banksel_register:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_savebank::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfSaveBankInstruction.printNonNullClassInstanceProperties ("mEndOfSaveBankInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_savebank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSaveBankInstruction.objectCompare (p->mProperty_mEndOfSaveBankInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_savebank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (const cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_savebank) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                     const GALGAS_registerExpression & inAttribute_mRegister,
                                                                                                     const GALGAS_pic_31__38_InstructionList & inAttribute_mInstructionList,
                                                                                                     const GALGAS_location & inAttribute_mEndOfSaveBankInstruction
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegister.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfSaveBankInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_savebank (inAttribute_mInstructionLocation, inAttribute_mRegister, inAttribute_mInstructionList, inAttribute_mEndOfSaveBankInstruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setter_setMRegister (GALGAS_registerExpression inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mRegister = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setter_setMInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setter_setMEndOfSaveBankInstruction (GALGAS_location inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mEndOfSaveBankInstruction = inValue ;
  }
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
//Pointer class for @pic18Instruction_savebank class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_savebank::cPtr_pic_31__38_Instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_registerExpression & in_mRegister,
                                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegister (in_mRegister),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfSaveBankInstruction (in_mEndOfSaveBankInstruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

void cPtr_pic_31__38_Instruction_5F_savebank::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_savebank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfSaveBankInstruction.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

typeComparisonResult cPtr_pic_31__38_Instruction_5F_repetitionStatique::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInstruction.objectCompare (p->mProperty_mEndOfInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_repetitionStatique::objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique::GALGAS_pic_31__38_Instruction_5F_repetitionStatique (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique::GALGAS_pic_31__38_Instruction_5F_repetitionStatique (const cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                         const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                                         const GALGAS_immediatExpression & inAttribute_mLowerBoundExpression,
                                                                                                                         const GALGAS_immediatExpression & inAttribute_mUpperBoundExpression,
                                                                                                                         const GALGAS_pic_31__38_InstructionList & inAttribute_mInstructionList,
                                                                                                                         const GALGAS_location & inAttribute_mEndOfInstruction
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (inAttribute_mInstructionLocation, inAttribute_mConstantName, inAttribute_mLowerBoundExpression, inAttribute_mUpperBoundExpression, inAttribute_mInstructionList, inAttribute_mEndOfInstruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setter_setMConstantName (GALGAS_lstring inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setter_setMLowerBoundExpression (GALGAS_immediatExpression inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setter_setMUpperBoundExpression (GALGAS_immediatExpression inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setter_setMInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setter_setMEndOfInstruction (GALGAS_location inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mEndOfInstruction = inValue ;
  }
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
mProperty_mConstantName (in_mConstantName),
mProperty_mLowerBoundExpression (in_mLowerBoundExpression),
mProperty_mUpperBoundExpression (in_mUpperBoundExpression),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfInstruction (in_mEndOfInstruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_repetitionStatique::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;
}

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_repetitionStatique:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

//--------------------------------------------------------------------------------------------------
// @gotoTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_gotoTerminationForBlockInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBlockTerminationForBlockInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mNextBlock.printNonNullClassInstanceProperties ("mNextBlock") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gotoTerminationForBlockInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gotoTerminationForBlockInstruction * p = (const cPtr_gotoTerminationForBlockInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gotoTerminationForBlockInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mNextBlock.objectCompare (p->mProperty_mNextBlock) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gotoTerminationForBlockInstruction::objectCompare (const GALGAS_gotoTerminationForBlockInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction::GALGAS_gotoTerminationForBlockInstruction (void) :
GALGAS_abstractBlockTerminationForBlockInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction::GALGAS_gotoTerminationForBlockInstruction (const cPtr_gotoTerminationForBlockInstruction * inSourcePtr) :
GALGAS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gotoTerminationForBlockInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction GALGAS_gotoTerminationForBlockInstruction::class_func_new (const GALGAS_lstring & inAttribute_mNextBlock
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_gotoTerminationForBlockInstruction result ;
  if (inAttribute_mNextBlock.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gotoTerminationForBlockInstruction (inAttribute_mNextBlock COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_gotoTerminationForBlockInstruction::setter_setMNextBlock (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_gotoTerminationForBlockInstruction * p = (cPtr_gotoTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gotoTerminationForBlockInstruction) ;
    p->mProperty_mNextBlock = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gotoTerminationForBlockInstruction::readProperty_mNextBlock (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_gotoTerminationForBlockInstruction * p = (cPtr_gotoTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gotoTerminationForBlockInstruction) ;
    return p->mProperty_mNextBlock ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @gotoTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_gotoTerminationForBlockInstruction::cPtr_gotoTerminationForBlockInstruction (const GALGAS_lstring & in_mNextBlock
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (THERE),
mProperty_mNextBlock (in_mNextBlock) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gotoTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;
}

void cPtr_gotoTerminationForBlockInstruction::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("[@gotoTerminationForBlockInstruction:") ;
  mProperty_mNextBlock.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gotoTerminationForBlockInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gotoTerminationForBlockInstruction (mProperty_mNextBlock COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @gotoTerminationForBlockInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ("gotoTerminationForBlockInstruction",
                                                                                          & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gotoTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gotoTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gotoTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction GALGAS_gotoTerminationForBlockInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gotoTerminationForBlockInstruction result ;
  const GALGAS_gotoTerminationForBlockInstruction * p = (const GALGAS_gotoTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gotoTerminationForBlockInstruction *> (p)) {
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

typeComparisonResult cPtr_testTerminationForBlockInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testTerminationForBlockInstruction * p = (const cPtr_testTerminationForBlockInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mCondition.objectCompare (p->mProperty_mCondition) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTrueTermination.objectCompare (p->mProperty_mTrueTermination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFalseTermination.objectCompare (p->mProperty_mFalseTermination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_testTerminationForBlockInstruction::objectCompare (const GALGAS_testTerminationForBlockInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction::GALGAS_testTerminationForBlockInstruction (void) :
GALGAS_abstractBlockTerminationForBlockInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction::GALGAS_testTerminationForBlockInstruction (const cPtr_testTerminationForBlockInstruction * inSourcePtr) :
GALGAS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testTerminationForBlockInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction::class_func_new (const GALGAS_pic_31__38_ConditionExpression & inAttribute_mCondition,
                                                                                                     const GALGAS_abstractBlockTerminationForBlockInstruction & inAttribute_mTrueTermination,
                                                                                                     const GALGAS_abstractBlockTerminationForBlockInstruction & inAttribute_mFalseTermination,
                                                                                                     const GALGAS_location & inAttribute_mLocation
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_testTerminationForBlockInstruction result ;
  if (inAttribute_mCondition.isValid () && inAttribute_mTrueTermination.isValid () && inAttribute_mFalseTermination.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_testTerminationForBlockInstruction (inAttribute_mCondition, inAttribute_mTrueTermination, inAttribute_mFalseTermination, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_testTerminationForBlockInstruction::setter_setMCondition (GALGAS_pic_31__38_ConditionExpression inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    p->mProperty_mCondition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_testTerminationForBlockInstruction::setter_setMTrueTermination (GALGAS_abstractBlockTerminationForBlockInstruction inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    p->mProperty_mTrueTermination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_testTerminationForBlockInstruction::setter_setMFalseTermination (GALGAS_abstractBlockTerminationForBlockInstruction inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    p->mProperty_mFalseTermination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_testTerminationForBlockInstruction::setter_setMLocation (GALGAS_location inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_testTerminationForBlockInstruction::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction::readProperty_mTrueTermination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBlockTerminationForBlockInstruction () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mTrueTermination ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction::readProperty_mFalseTermination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBlockTerminationForBlockInstruction () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mFalseTermination ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_testTerminationForBlockInstruction::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_testTerminationForBlockInstruction::cPtr_testTerminationForBlockInstruction (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                  const GALGAS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                                                  const GALGAS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                                                  const GALGAS_location & in_mLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (THERE),
mProperty_mCondition (in_mCondition),
mProperty_mTrueTermination (in_mTrueTermination),
mProperty_mFalseTermination (in_mFalseTermination),
mProperty_mLocation (in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_testTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;
}

void cPtr_testTerminationForBlockInstruction::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("[@testTerminationForBlockInstruction:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTrueTermination.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFalseTermination.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testTerminationForBlockInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testTerminationForBlockInstruction (mProperty_mCondition, mProperty_mTrueTermination, mProperty_mFalseTermination, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @testTerminationForBlockInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ("testTerminationForBlockInstruction",
                                                                                          & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_testTerminationForBlockInstruction result ;
  const GALGAS_testTerminationForBlockInstruction * p = (const GALGAS_testTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_testTerminationForBlockInstruction *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_block::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mStartBlockName.printNonNullClassInstanceProperties ("mStartBlockName") ;
    mProperty_mBlockList.printNonNullClassInstanceProperties ("mBlockList") ;
    mProperty_mEndOfBlockInstruction.printNonNullClassInstanceProperties ("mEndOfBlockInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_block::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_block * p = (const cPtr_pic_31__38_Instruction_5F_block *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStartBlockName.objectCompare (p->mProperty_mStartBlockName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBlockList.objectCompare (p->mProperty_mBlockList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfBlockInstruction.objectCompare (p->mProperty_mEndOfBlockInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_block::objectCompare (const GALGAS_pic_31__38_Instruction_5F_block & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block::GALGAS_pic_31__38_Instruction_5F_block (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block::GALGAS_pic_31__38_Instruction_5F_block (const cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_block) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_lstring & inAttribute_mStartBlockName,
                                                                                               const GALGAS_pic_31__38_BlockInstructionBlockList & inAttribute_mBlockList,
                                                                                               const GALGAS_location & inAttribute_mEndOfBlockInstruction
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mStartBlockName.isValid () && inAttribute_mBlockList.isValid () && inAttribute_mEndOfBlockInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_block (inAttribute_mInstructionLocation, inAttribute_mStartBlockName, inAttribute_mBlockList, inAttribute_mEndOfBlockInstruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_block::setter_setMStartBlockName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    p->mProperty_mStartBlockName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_block::setter_setMBlockList (GALGAS_pic_31__38_BlockInstructionBlockList inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    p->mProperty_mBlockList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_block::setter_setMEndOfBlockInstruction (GALGAS_location inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    p->mProperty_mEndOfBlockInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_block::readProperty_mStartBlockName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    return p->mProperty_mStartBlockName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_Instruction_5F_block::readProperty_mBlockList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_BlockInstructionBlockList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    return p->mProperty_mBlockList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_block::readProperty_mEndOfBlockInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    return p->mProperty_mEndOfBlockInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_block class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_block::cPtr_pic_31__38_Instruction_5F_block (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mStartBlockName,
                                                                            const GALGAS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                                            const GALGAS_location & in_mEndOfBlockInstruction
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mStartBlockName (in_mStartBlockName),
mProperty_mBlockList (in_mBlockList),
mProperty_mEndOfBlockInstruction (in_mEndOfBlockInstruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_block::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;
}

void cPtr_pic_31__38_Instruction_5F_block::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_block:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mStartBlockName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBlockList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfBlockInstruction.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_block::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_block (mProperty_mInstructionLocation, mProperty_mStartBlockName, mProperty_mBlockList, mProperty_mEndOfBlockInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_block generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ("pic18Instruction_block",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_block::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_block::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_block (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block result ;
  const GALGAS_pic_31__38_Instruction_5F_block * p = (const GALGAS_pic_31__38_Instruction_5F_block *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_block *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_FDA::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FDA_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FDA_base_code") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FDA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction_5F_FDA_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FDA_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FDA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA::GALGAS_pic_31__38_Instruction_5F_FDA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA::GALGAS_pic_31__38_Instruction_5F_FDA (const cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FDA) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA GALGAS_pic_31__38_Instruction_5F_FDA::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                           const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inAttribute_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                           const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                           const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FDA (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FDA_5F_base_5F_code, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FDA::setter_setMInstruction_5F_FDA_5F_base_5F_code (GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    p->mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FDA::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FDA::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA::readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    return p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FDA::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_FDA class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FDA::cPtr_pic_31__38_Instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (in_mInstruction_5F_FDA_5F_base_5F_code),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

void cPtr_pic_31__38_Instruction_5F_FDA::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_FDA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_FDA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_FDA generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ("pic18Instruction_FDA",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA GALGAS_pic_31__38_Instruction_5F_FDA::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA result ;
  const GALGAS_pic_31__38_Instruction_5F_FDA * p = (const GALGAS_pic_31__38_Instruction_5F_FDA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FDA *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_FA::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFAinstruction.printNonNullClassInstanceProperties ("mFAinstruction") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFAinstruction.objectCompare (p->mProperty_mFAinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA::GALGAS_pic_31__38_Instruction_5F_FA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA::GALGAS_pic_31__38_Instruction_5F_FA (const cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FA) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA GALGAS_pic_31__38_Instruction_5F_FA::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                         const GALGAS_FA_5F_instruction_5F_base_5F_code & inAttribute_mFAinstruction,
                                                                                         const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFAinstruction.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FA (inAttribute_mInstructionLocation, inAttribute_mFAinstruction, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FA::setter_setMFAinstruction (GALGAS_FA_5F_instruction_5F_base_5F_code inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_FA * p = (cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    p->mProperty_mFAinstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FA::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_FA * p = (cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_pic_31__38_Instruction_5F_FA::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_FA_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FA * p = (cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FA::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FA * p = (cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_FA class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FA::cPtr_pic_31__38_Instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFAinstruction (in_mFAinstruction),
mProperty_mRegisterExpression (in_mRegisterExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

void cPtr_pic_31__38_Instruction_5F_FA::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_FA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_FA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FA (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_FA generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ("pic18Instruction_FA",
                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA GALGAS_pic_31__38_Instruction_5F_FA::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FA result ;
  const GALGAS_pic_31__38_Instruction_5F_FA * p = (const GALGAS_pic_31__38_Instruction_5F_FA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FA *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_MOVFF::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSourceRegisterName.printNonNullClassInstanceProperties ("mSourceRegisterName") ;
    mProperty_mDestinationRegisterName.printNonNullClassInstanceProperties ("mDestinationRegisterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_MOVFF::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceRegisterName.objectCompare (p->mProperty_mSourceRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationRegisterName.objectCompare (p->mProperty_mDestinationRegisterName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_MOVFF::objectCompare (const GALGAS_pic_31__38_Instruction_5F_MOVFF & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF::GALGAS_pic_31__38_Instruction_5F_MOVFF (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF::GALGAS_pic_31__38_Instruction_5F_MOVFF (const cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF GALGAS_pic_31__38_Instruction_5F_MOVFF::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_registerExpression & inAttribute_mSourceRegisterName,
                                                                                               const GALGAS_registerExpression & inAttribute_mDestinationRegisterName
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MOVFF result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSourceRegisterName.isValid () && inAttribute_mDestinationRegisterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_MOVFF (inAttribute_mInstructionLocation, inAttribute_mSourceRegisterName, inAttribute_mDestinationRegisterName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_MOVFF::setter_setMSourceRegisterName (GALGAS_registerExpression inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_MOVFF * p = (cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    p->mProperty_mSourceRegisterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_MOVFF::setter_setMDestinationRegisterName (GALGAS_registerExpression inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_MOVFF * p = (cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    p->mProperty_mDestinationRegisterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_MOVFF::readProperty_mSourceRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_MOVFF * p = (cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    return p->mProperty_mSourceRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_MOVFF::readProperty_mDestinationRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_MOVFF * p = (cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    return p->mProperty_mDestinationRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_MOVFF class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_MOVFF::cPtr_pic_31__38_Instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_registerExpression & in_mSourceRegisterName,
                                                                            const GALGAS_registerExpression & in_mDestinationRegisterName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSourceRegisterName (in_mSourceRegisterName),
mProperty_mDestinationRegisterName (in_mDestinationRegisterName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_MOVFF::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

void cPtr_pic_31__38_Instruction_5F_MOVFF::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_MOVFF:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceRegisterName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDestinationRegisterName.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_MOVFF::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_MOVFF (mProperty_mInstructionLocation, mProperty_mSourceRegisterName, mProperty_mDestinationRegisterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_MOVFF generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ("pic18Instruction_MOVFF",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_MOVFF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_MOVFF::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_MOVFF (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF GALGAS_pic_31__38_Instruction_5F_MOVFF::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MOVFF result ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF * p = (const GALGAS_pic_31__38_Instruction_5F_MOVFF *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_MOVFF *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_FBA::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBitOrientedOp.printNonNullClassInstanceProperties ("mBitOrientedOp") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FBA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitOrientedOp.objectCompare (p->mProperty_mBitOrientedOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FBA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FBA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA::GALGAS_pic_31__38_Instruction_5F_FBA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA::GALGAS_pic_31__38_Instruction_5F_FBA (const cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FBA) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA GALGAS_pic_31__38_Instruction_5F_FBA::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                           const GALGAS_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                           const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                           const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FBA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FBA (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FBA::setter_setMBitOrientedOp (GALGAS_bit_5F_oriented_5F_op inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FBA::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FBA::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op GALGAS_pic_31__38_Instruction_5F_FBA::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FBA::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_pic_31__38_Instruction_5F_FBA::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_FBA class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FBA::cPtr_pic_31__38_Instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBitOrientedOp (in_mBitOrientedOp),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FBA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

void cPtr_pic_31__38_Instruction_5F_FBA::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_FBA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_FBA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FBA (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_FBA generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ("pic18Instruction_FBA",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FBA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FBA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FBA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA GALGAS_pic_31__38_Instruction_5F_FBA::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FBA result ;
  const GALGAS_pic_31__38_Instruction_5F_FBA * p = (const GALGAS_pic_31__38_Instruction_5F_FBA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FBA *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JSR * p = (const cPtr_pic_31__38_Instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JSR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR::GALGAS_pic_31__38_Instruction_5F_JSR (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR::GALGAS_pic_31__38_Instruction_5F_JSR (const cPtr_pic_31__38_Instruction_5F_JSR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR GALGAS_pic_31__38_Instruction_5F_JSR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                           const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                           const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JSR::setter_setMKind (GALGAS_jumpInstructionKind inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_pic_31__38_Instruction_5F_JSR::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_jumpInstructionKind () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JSR::cPtr_pic_31__38_Instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mTargetLabel,
                                                                        const GALGAS_jumpInstructionKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mKind (in_mKind) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;
}

void cPtr_pic_31__38_Instruction_5F_JSR::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_JSR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ("pic18Instruction_JSR",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR GALGAS_pic_31__38_Instruction_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR result ;
  const GALGAS_pic_31__38_Instruction_5F_JSR * p = (const GALGAS_pic_31__38_Instruction_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JSR *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_macro::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mMacroName.printNonNullClassInstanceProperties ("mMacroName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_macro::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_macro * p = (const cPtr_pic_31__38_Instruction_5F_macro *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMacroName.objectCompare (p->mProperty_mMacroName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_macro::objectCompare (const GALGAS_pic_31__38_Instruction_5F_macro & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro::GALGAS_pic_31__38_Instruction_5F_macro (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro::GALGAS_pic_31__38_Instruction_5F_macro (const cPtr_pic_31__38_Instruction_5F_macro * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_macro) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro GALGAS_pic_31__38_Instruction_5F_macro::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_lstring & inAttribute_mMacroName,
                                                                                               const GALGAS_immediatExpressionList & inAttribute_mExpressionList
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_macro result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mMacroName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_macro (inAttribute_mInstructionLocation, inAttribute_mMacroName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_macro::setter_setMMacroName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    p->mProperty_mMacroName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_macro::setter_setMExpressionList (GALGAS_immediatExpressionList inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    p->mProperty_mExpressionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_macro::readProperty_mMacroName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    return p->mProperty_mMacroName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_pic_31__38_Instruction_5F_macro::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpressionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_macro class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_macro::cPtr_pic_31__38_Instruction_5F_macro (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mMacroName,
                                                                            const GALGAS_immediatExpressionList & in_mExpressionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mMacroName (in_mMacroName),
mProperty_mExpressionList (in_mExpressionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_macro::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;
}

void cPtr_pic_31__38_Instruction_5F_macro::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_macro:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mMacroName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_macro::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_macro (mProperty_mInstructionLocation, mProperty_mMacroName, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_macro generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ("pic18Instruction_macro",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_macro::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_macro::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_macro (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro GALGAS_pic_31__38_Instruction_5F_macro::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_macro result ;
  const GALGAS_pic_31__38_Instruction_5F_macro * p = (const GALGAS_pic_31__38_Instruction_5F_macro *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_macro *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JUMP * p = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMP::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP::GALGAS_pic_31__38_Instruction_5F_JUMP (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP::GALGAS_pic_31__38_Instruction_5F_JUMP (const cPtr_pic_31__38_Instruction_5F_JUMP * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP GALGAS_pic_31__38_Instruction_5F_JUMP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                             const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                             const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JUMP::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JUMP::setter_setMKind (GALGAS_jumpInstructionKind inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_pic_31__38_Instruction_5F_JUMP::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_jumpInstructionKind () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JUMP::cPtr_pic_31__38_Instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel,
                                                                          const GALGAS_jumpInstructionKind & in_mKind
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mKind (in_mKind) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;
}

void cPtr_pic_31__38_Instruction_5F_JUMP::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_JUMP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ("pic18Instruction_JUMP",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP GALGAS_pic_31__38_Instruction_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP * p = (const GALGAS_pic_31__38_Instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMP *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_JUMPCC::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mConditionalBranch.printNonNullClassInstanceProperties ("mConditionalBranch") ;
    mProperty_mIsBcc.printNonNullClassInstanceProperties ("mIsBcc") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JUMPCC::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConditionalBranch.objectCompare (p->mProperty_mConditionalBranch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsBcc.objectCompare (p->mProperty_mIsBcc) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMPCC::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC::GALGAS_pic_31__38_Instruction_5F_JUMPCC (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC::GALGAS_pic_31__38_Instruction_5F_JUMPCC (const cPtr_pic_31__38_Instruction_5F_JUMPCC * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC GALGAS_pic_31__38_Instruction_5F_JUMPCC::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                 const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                 const GALGAS_conditional_5F_branch & inAttribute_mConditionalBranch,
                                                                                                 const GALGAS_bool & inAttribute_mIsBcc
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mConditionalBranch.isValid () && inAttribute_mIsBcc.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JUMPCC (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mConditionalBranch, inAttribute_mIsBcc COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JUMPCC::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JUMPCC::setter_setMConditionalBranch (GALGAS_conditional_5F_branch inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    p->mProperty_mConditionalBranch = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JUMPCC::setter_setMIsBcc (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    p->mProperty_mIsBcc = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JUMPCC::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_pic_31__38_Instruction_5F_JUMPCC::readProperty_mConditionalBranch (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_conditional_5F_branch () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    return p->mProperty_mConditionalBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_JUMPCC::readProperty_mIsBcc (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    return p->mProperty_mIsBcc ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_JUMPCC class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JUMPCC::cPtr_pic_31__38_Instruction_5F_JUMPCC (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                                              const GALGAS_bool & in_mIsBcc
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mConditionalBranch (in_mConditionalBranch),
mProperty_mIsBcc (in_mIsBcc) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JUMPCC::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;
}

void cPtr_pic_31__38_Instruction_5F_JUMPCC::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_JUMPCC:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mConditionalBranch.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIsBcc.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_JUMPCC::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JUMPCC (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mConditionalBranch, mProperty_mIsBcc COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_JUMPCC generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ("pic18Instruction_JUMPCC",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMPCC::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMPCC::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMPCC (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC GALGAS_pic_31__38_Instruction_5F_JUMPCC::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC * p = (const GALGAS_pic_31__38_Instruction_5F_JUMPCC *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMPCC *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMPCC", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_LDATA_38_PTR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mDataName.printNonNullClassInstanceProperties ("mDataName") ;
    mProperty_mDataIndex.printNonNullClassInstanceProperties ("mDataIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDataName.objectCompare (p->mProperty_mDataName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDataIndex.objectCompare (p->mProperty_mDataIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR (const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                             const GALGAS_lstring & inAttribute_mDataName,
                                                                                                             const GALGAS_luint & inAttribute_mDataIndex
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mDataName.isValid () && inAttribute_mDataIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (inAttribute_mInstructionLocation, inAttribute_mDataName, inAttribute_mDataIndex COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::setter_setMDataName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
    p->mProperty_mDataName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::setter_setMDataIndex (GALGAS_luint inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
    p->mProperty_mDataIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::readProperty_mDataName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
    return p->mProperty_mDataName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::readProperty_mDataIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
    return p->mProperty_mDataIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_LDATA8PTR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_lstring & in_mDataName,
                                                                                          const GALGAS_luint & in_mDataIndex
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mDataName (in_mDataName),
mProperty_mDataIndex (in_mDataIndex) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ;
}

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_LDATA8PTR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDataName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDataIndex.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (mProperty_mInstructionLocation, mProperty_mDataName, mProperty_mDataIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_LDATA8PTR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ("pic18Instruction_LDATA8PTR",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR result ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mDataName.printNonNullClassInstanceProperties ("mDataName") ;
    mProperty_mDataIndex.printNonNullClassInstanceProperties ("mDataIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDataName.objectCompare (p->mProperty_mDataName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDataIndex.objectCompare (p->mProperty_mDataIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                     const GALGAS_lstring & inAttribute_mDataName,
                                                                                                                     const GALGAS_luint & inAttribute_mDataIndex
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mDataName.isValid () && inAttribute_mDataIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (inAttribute_mInstructionLocation, inAttribute_mDataName, inAttribute_mDataIndex COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::setter_setMDataName (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
    p->mProperty_mDataName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::setter_setMDataIndex (GALGAS_luint inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
    p->mProperty_mDataIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::readProperty_mDataName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
    return p->mProperty_mDataName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::readProperty_mDataIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
    return p->mProperty_mDataIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_LDATA16PTR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_lstring & in_mDataName,
                                                                                                  const GALGAS_luint & in_mDataIndex
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mDataName (in_mDataName),
mProperty_mDataIndex (in_mDataIndex) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ;
}

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_LDATA16PTR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDataName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDataIndex.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (mProperty_mInstructionLocation, mProperty_mDataName, mProperty_mDataIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_LDATA16PTR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ("pic18Instruction_LDATA16PTR",
                                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR result ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LDATA16PTR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mOpCode.printNonNullClassInstanceProperties ("mOpCode") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOpCode.objectCompare (p->mProperty_mOpCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                       const GALGAS_pic_31__38_PiccoloSimpleInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                                       const GALGAS_if_5F_semi_5F_colon_5F_op & inAttribute_mOpCode,
                                                                                                                                       const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mOpCode.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mOpCode, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::setter_setMOpCode (GALGAS_if_5F_semi_5F_colon_5F_op inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    p->mProperty_mOpCode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_if_5F_semi_5F_colon_5F_op GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::readProperty_mOpCode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_if_5F_semi_5F_colon_5F_op () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    return p->mProperty_mOpCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_FA_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                                                    const GALGAS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                                                                    const GALGAS_registerExpression & in_mRegisterExpression
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mOpCode (in_mOpCode),
mProperty_mRegisterExpression (in_mRegisterExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_IF_FA_SEMI_COLON:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOpCode.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mOpCode, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_IF_FA_SEMI_COLON generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ("pic18Instruction_IF_FA_SEMI_COLON",
                                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                               const GALGAS_pic_31__38_PiccoloSimpleInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                               const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                               const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                               const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                            const GALGAS_bool & in_mSkipIfSet,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_IF_BitTest:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_IF_BitTest generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ("pic18Instruction_IF_BitTest",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest *> (p)) {
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

typeComparisonResult cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSkipIfZero.objectCompare (p->mProperty_mSkipIfZero) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                             const GALGAS_pic_31__38_PiccoloSimpleInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                             const GALGAS_bool & inAttribute_mIncrement,
                                                                                                             const GALGAS_bool & inAttribute_mSkipIfZero,
                                                                                                             const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                             const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mIncrement.isValid () && inAttribute_mSkipIfZero.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mIncrement, inAttribute_mSkipIfZero, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setMIncrement (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setMSkipIfZero (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mSkipIfZero = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::readProperty_mSkipIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mSkipIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                          const GALGAS_bool & in_mIncrement,
                                                                                          const GALGAS_bool & in_mSkipIfZero,
                                                                                          const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                          const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mIncrement (in_mIncrement),
mProperty_mSkipIfZero (in_mSkipIfZero),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_IF_IncDec:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSkipIfZero.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mIncrement, mProperty_mSkipIfZero, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_IF_IncDec generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ("pic18Instruction_IF_IncDec",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_RegisterTestCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBranchIfZero.printNonNullClassInstanceProperties ("mBranchIfZero") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_RegisterTestCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_RegisterTestCondition * p = (const cPtr_pic_31__38_RegisterTestCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_RegisterTestCondition::objectCompare (const GALGAS_pic_31__38_RegisterTestCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition::GALGAS_pic_31__38_RegisterTestCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition::GALGAS_pic_31__38_RegisterTestCondition (const cPtr_pic_31__38_RegisterTestCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterTestCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition GALGAS_pic_31__38_RegisterTestCondition::class_func_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                 const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterTestCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_RegisterTestCondition (inAttribute_mRegisterExpression, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterTestCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_RegisterTestCondition * p = (cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterTestCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_RegisterTestCondition * p = (cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_RegisterTestCondition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_RegisterTestCondition * p = (cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_RegisterTestCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_RegisterTestCondition * p = (cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18RegisterTestCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterTestCondition::cPtr_pic_31__38_RegisterTestCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                              const GALGAS_bool & in_mBranchIfZero
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_RegisterTestCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;
}

void cPtr_pic_31__38_RegisterTestCondition::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@pic18RegisterTestCondition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_RegisterTestCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterTestCondition (mProperty_mRegisterExpression, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18RegisterTestCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ("pic18RegisterTestCondition",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterTestCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RegisterTestCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterTestCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition GALGAS_pic_31__38_RegisterTestCondition::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterTestCondition result ;
  const GALGAS_pic_31__38_RegisterTestCondition * p = (const GALGAS_pic_31__38_RegisterTestCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_RegisterTestCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterTestCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

