#ifndef class_2D_midrangeInstruction_5F_checknobank_DEFINED
#define class_2D_midrangeInstruction_5F_checknobank_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrangeInstruction_checknobank-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @midrangeInstruction_checknobank class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrangeInstruction_5F_checknobank : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrangeInstruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

