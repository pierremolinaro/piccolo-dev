#ifndef class_2D_pic_31__38_AbstractCaseItem_DEFINED
#define class_2D_pic_31__38_AbstractCaseItem_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18AbstractCaseItem-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18AbstractCaseItem class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_AbstractCaseItem : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_AbstractCaseItem (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

