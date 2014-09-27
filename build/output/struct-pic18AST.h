#ifndef struct_2D_pic_31__38_AST_1_DEFINED
#define struct_2D_pic_31__38_AST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-programKind.h"
#include "list-checkpicList.h"
#include "list-configDefinitionList.h"
#include "list-constantDefinitionList.h"
#include "list-dataList.h"
#include "list-pic18InterruptDefinitionList.h"
#include "list-pic18RoutineDefinitionList.h"
#include "list-ramDefinitionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @pic_31__38_AST struct                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_AST : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mProgramName ;
  public : GALGAS_programKind mAttribute_mProgramKind ;
  public : GALGAS_lstring mAttribute_mDeviceNameOrBootLoaderReference ;
  public : GALGAS_configDefinitionList mAttribute_mConfigDefinitionList ;
  public : GALGAS_ramDefinitionList mAttribute_mRamDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRegisterList ;
  public : GALGAS_checkpicList mAttribute_mCheckpicList ;
  public : GALGAS_dataList mAttribute_mDataList ;
  public : GALGAS_pic_31__38_InterruptDefinitionList mAttribute_mInterruptDefinitionList ;
  public : GALGAS_constantDefinitionList mAttribute_mConstantDefinitionList ;
  public : GALGAS_pic_31__38_RoutineDefinitionList mAttribute_mRoutineDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRoutineList ;
  public : GALGAS_lstringlist mAttribute_mInlinedRoutineList ;
  public : GALGAS_bool mAttribute_mNeedsComputedGoto_32_ ;
  public : GALGAS_bool mAttribute_mNeedsComputedGoto_34_ ;
  public : GALGAS_location mAttribute_mEndOfProgram ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_AST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_AST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_AST (const GALGAS_lstring & in_mProgramName,
                                  const GALGAS_programKind & in_mProgramKind,
                                  const GALGAS_lstring & in_mDeviceNameOrBootLoaderReference,
                                  const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                  const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                  const GALGAS_lstringlist & in_mUnusedRegisterList,
                                  const GALGAS_checkpicList & in_mCheckpicList,
                                  const GALGAS_dataList & in_mDataList,
                                  const GALGAS_pic_31__38_InterruptDefinitionList & in_mInterruptDefinitionList,
                                  const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                  const GALGAS_pic_31__38_RoutineDefinitionList & in_mRoutineDefinitionList,
                                  const GALGAS_lstringlist & in_mUnusedRoutineList,
                                  const GALGAS_lstringlist & in_mInlinedRoutineList,
                                  const GALGAS_bool & in_mNeedsComputedGoto_32_,
                                  const GALGAS_bool & in_mNeedsComputedGoto_34_,
                                  const GALGAS_location & in_mEndOfProgram) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_AST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_AST constructor_new (const class GALGAS_lstring & inOperand0,
                                                         const class GALGAS_programKind & inOperand1,
                                                         const class GALGAS_lstring & inOperand2,
                                                         const class GALGAS_configDefinitionList & inOperand3,
                                                         const class GALGAS_ramDefinitionList & inOperand4,
                                                         const class GALGAS_lstringlist & inOperand5,
                                                         const class GALGAS_checkpicList & inOperand6,
                                                         const class GALGAS_dataList & inOperand7,
                                                         const class GALGAS_pic_31__38_InterruptDefinitionList & inOperand8,
                                                         const class GALGAS_constantDefinitionList & inOperand9,
                                                         const class GALGAS_pic_31__38_RoutineDefinitionList & inOperand10,
                                                         const class GALGAS_lstringlist & inOperand11,
                                                         const class GALGAS_lstringlist & inOperand12,
                                                         const class GALGAS_bool & inOperand13,
                                                         const class GALGAS_bool & inOperand14,
                                                         const class GALGAS_location & inOperand15
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_checkpicList reader_mCheckpicList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList reader_mConfigDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList reader_mConstantDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dataList reader_mDataList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDeviceNameOrBootLoaderReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfProgram (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mInlinedRoutineList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList reader_mInterruptDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsComputedGoto_32_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsComputedGoto_34_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programKind reader_mProgramKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mProgramName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList reader_mRamDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList reader_mRoutineDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mUnusedRegisterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mUnusedRoutineList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_AST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

