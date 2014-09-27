#ifndef map_2D_blockInstructionBlockMap_DEFINED
#define map_2D_blockInstructionBlockMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-blockInstructionBlockMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractBlockTerminationForBlockInstruction-1.h"
#include "list-pic18InstructionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@blockInstructionBlockMap' map                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_blockInstructionBlockMap : public cMapElement {
//--- Map attributes
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;
  public : GALGAS_abstractBlockTerminationForBlockInstruction mAttribute_mBlockTerminaisonForBlockInstruction ;
  public : GALGAS_location mAttribute_mEndOfBlock ;

//--- Constructor
  public : cMapElement_blockInstructionBlockMap (const GALGAS_lstring & inKey,
                                                 const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                 const GALGAS_location & in_mEndOfBlock
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

