//---------------------------------------------------------------------------*
//                                                                           *
//           File 'baseline_intermediate_instruction_length.cpp'             *
//                        Generated by version 2.4.3                         *
//                      april 14th, 2013, at 16h33'43"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "baseline_intermediate_instruction_length.h"
#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "baseline_intermediate_instruction_length.gSemantics", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//   Abstract category reader '@baseline_intermediate_instruction length'    *
//                                                                           *
//---------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_baseline_5F_intermediate_5F_instruction_length> gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length ;

//---------------------------------------------------------------------------*

void enterCategoryReader_length (const PMSInt32 inClassIndex,
                                 categoryReaderSignature_baseline_5F_intermediate_5F_instruction_length inReader) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

static void freeCategoryReader_baseline_5F_intermediate_5F_instruction_length (void) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length.free () ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_instruction_length (NULL,
                                                                           freeCategoryReader_baseline_5F_intermediate_5F_instruction_length) ;

//---------------------------------------------------------------------------*

GALGAS_uint callCategoryReader_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, const cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const PMSInt32 classIndex = info->mSlotID ;
    categoryReaderSignature_baseline_5F_intermediate_5F_instruction_length f = NULL ;
    if (classIndex < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length.count ()) {
      f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length.count ()) {
           f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//      Overriding category reader '@baseline_intermediate_NULL length'      *
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_uint categoryReader_baseline_5F_intermediate_5F_NULL_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  //-------- @assignmentInstructionForGeneration
  result_outLength = GALGAS_uint ((PMUInt32) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_baseline_5F_intermediate_5F_NULL_length (void) {
  enterCategoryReader_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                              categoryReader_baseline_5F_intermediate_5F_NULL_length) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_NULL_length (defineCategoryReader_baseline_5F_intermediate_5F_NULL_length, NULL) ;

//---------------------------------------------------------------------------*
//                                                                           *
//  Overriding category reader '@baseline_intermediate_pseudo_PAGE length'   *
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_uint categoryReader_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  //-------- @assignmentInstructionForGeneration
  result_outLength = GALGAS_uint ((PMUInt32) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (void) {
  enterCategoryReader_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                              categoryReader_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (defineCategoryReader_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length, NULL) ;

//---------------------------------------------------------------------------*
//                                                                           *
//  Overriding category reader '@baseline_intermediate_pseudo_LABEL length'  *
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_uint categoryReader_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  //-------- @assignmentInstructionForGeneration
  result_outLength = GALGAS_uint ((PMUInt32) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (void) {
  enterCategoryReader_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                              categoryReader_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (defineCategoryReader_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length, NULL) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Overriding category reader '@baseline_intermediate_actualInstruction length'*
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_uint categoryReader_baseline_5F_intermediate_5F_actualInstruction_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  //-------- @assignmentInstructionForGeneration
  result_outLength = GALGAS_uint ((PMUInt32) 1U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_baseline_5F_intermediate_5F_actualInstruction_length (void) {
  enterCategoryReader_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction.mSlotID,
                              categoryReader_baseline_5F_intermediate_5F_actualInstruction_length) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_actualInstruction_length (defineCategoryReader_baseline_5F_intermediate_5F_actualInstruction_length, NULL) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Overriding category reader '@baseline_intermediate_instruction_MNOP length'*
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_uint categoryReader_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  //-------- @assignmentInstructionForGeneration
  result_outLength = object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE_AT_LINE (36)) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (void) {
  enterCategoryReader_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                              categoryReader_baseline_5F_intermediate_5F_instruction_5F_MNOP_length) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (defineCategoryReader_baseline_5F_intermediate_5F_instruction_5F_MNOP_length, NULL) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Overriding category reader '@baseline_intermediate_incDecRegisterInCondition length'*
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_uint categoryReader_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  //-------- @ifInstructionForGeneration
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    //-------- @assignmentInstructionForGeneration
    result_outLength = GALGAS_uint ((PMUInt32) 3U) ;
  }else if (kBoolFalse == test_0) {
    //-------- @assignmentInstructionForGeneration
    result_outLength = GALGAS_uint ((PMUInt32) 2U) ;
  }
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (void) {
  enterCategoryReader_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                              categoryReader_baseline_5F_intermediate_5F_incDecRegisterInCondition_length) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (defineCategoryReader_baseline_5F_intermediate_5F_incDecRegisterInCondition_length, NULL) ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

