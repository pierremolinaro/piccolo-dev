#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_interruptDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_interruptDefinitionList final {
  public: DownEnumerator_midrange_5F_interruptDefinitionList (const class GGS_midrange_5F_interruptDefinitionList & inList) ;

  public: ~ DownEnumerator_midrange_5F_interruptDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mInterruptLocation (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFirstSaveRegister (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSecondSaveRegister (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_interruptDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_interruptDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_interruptDefinitionList (const DownEnumerator_midrange_5F_interruptDefinitionList &) = delete ;
  private: DownEnumerator_midrange_5F_interruptDefinitionList & operator = (const DownEnumerator_midrange_5F_interruptDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_interruptDefinitionList final {
  public: UpEnumerator_midrange_5F_interruptDefinitionList (const class GGS_midrange_5F_interruptDefinitionList & inList)  ;

  public: ~ UpEnumerator_midrange_5F_interruptDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mInterruptLocation (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFirstSaveRegister (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSecondSaveRegister (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_interruptDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_interruptDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_interruptDefinitionList (const UpEnumerator_midrange_5F_interruptDefinitionList &) = delete ;
  private: UpEnumerator_midrange_5F_interruptDefinitionList & operator = (const UpEnumerator_midrange_5F_interruptDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @midrange_interruptDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_interruptDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_midrange_5F_interruptDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_midrange_5F_interruptDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_midrange_5F_interruptDefinitionList (void) = default ;

//--- Copy
  public: GGS_midrange_5F_interruptDefinitionList (const GGS_midrange_5F_interruptDefinitionList &) = default ;
  public: GGS_midrange_5F_interruptDefinitionList & operator = (const GGS_midrange_5F_interruptDefinitionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_midrange_5F_interruptDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_midrange_5F_interruptDefinitionList subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_midrange_5F_interruptDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mInterruptLocation,
                                                 const class GGS_midrange_5F_instructionList & in_mInstructionList,
                                                 const class GGS_lstring & in_mFirstSaveRegister,
                                                 const class GGS_lstring & in_mSecondSaveRegister,
                                                 const class GGS_location & in_mEndOfInterruptLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_interruptDefinitionList init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_interruptDefinitionList extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_interruptDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_interruptDefinitionList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_instructionList & inOperand1,
                                                                                         const class GGS_lstring & inOperand2,
                                                                                         const class GGS_lstring & inOperand3,
                                                                                         const class GGS_location & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_midrange_5F_interruptDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_location & inOperand0,
                                                    const class GGS_midrange_5F_instructionList & inOperand1,
                                                    const class GGS_lstring & inOperand2,
                                                    const class GGS_lstring & inOperand3,
                                                    const class GGS_location & inOperand4
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_midrange_5F_interruptDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_interruptDefinitionList add_operation (const GGS_midrange_5F_interruptDefinitionList & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               class GGS_midrange_5F_instructionList constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               class GGS_lstring constinArgument3,
                                               class GGS_location constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_midrange_5F_instructionList constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_lstring constinArgument3,
                                                      class GGS_location constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 class GGS_midrange_5F_instructionList & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 class GGS_location & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                class GGS_midrange_5F_instructionList & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                class GGS_lstring & outArgument3,
                                                class GGS_location & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_midrange_5F_instructionList & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      class GGS_location & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInterruptLocationAtIndex (class GGS_location constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstSaveRegisterAtIndex (class GGS_lstring constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_midrange_5F_instructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptLocationAtIndex (class GGS_location constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSecondSaveRegisterAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              class GGS_midrange_5F_instructionList & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              class GGS_lstring & outArgument3,
                                              class GGS_location & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             class GGS_midrange_5F_instructionList & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             class GGS_lstring & outArgument3,
                                             class GGS_location & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfInterruptLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFirstSaveRegisterAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mInterruptLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSecondSaveRegisterAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_interruptDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_interruptDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_interruptDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_interruptDefinitionList ;
  friend class DownEnumerator_midrange_5F_interruptDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_interruptDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_interruptDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mInterruptLocation ;
  public: inline GGS_location readProperty_mInterruptLocation (void) const {
    return mProperty_mInterruptLocation ;
  }

  public: GGS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: inline GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_lstring mProperty_mFirstSaveRegister ;
  public: inline GGS_lstring readProperty_mFirstSaveRegister (void) const {
    return mProperty_mFirstSaveRegister ;
  }

  public: GGS_lstring mProperty_mSecondSaveRegister ;
  public: inline GGS_lstring readProperty_mSecondSaveRegister (void) const {
    return mProperty_mSecondSaveRegister ;
  }

  public: GGS_location mProperty_mEndOfInterruptLocation ;
  public: inline GGS_location readProperty_mEndOfInterruptLocation (void) const {
    return mProperty_mEndOfInterruptLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_interruptDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInterruptLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptLocation = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_midrange_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMFirstSaveRegister (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstSaveRegister = inValue ;
  }

  public: inline void setter_setMSecondSaveRegister (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSecondSaveRegister = inValue ;
  }

  public: inline void setter_setMEndOfInterruptLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInterruptLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_interruptDefinitionList_2E_element (const GGS_location & in_mInterruptLocation,
                                                              const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                              const GGS_lstring & in_mFirstSaveRegister,
                                                              const GGS_lstring & in_mSecondSaveRegister,
                                                              const GGS_location & in_mEndOfInterruptLocation) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_interruptDefinitionList_2E_element (const GGS_midrange_5F_interruptDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_interruptDefinitionList_2E_element & operator = (const GGS_midrange_5F_interruptDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_interruptDefinitionList_2E_element init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_midrange_5F_instructionList & inOperand1,
                                                                                              const class GGS_lstring & inOperand2,
                                                                                              const class GGS_lstring & inOperand3,
                                                                                              const class GGS_location & inOperand4,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_interruptDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_interruptDefinitionList_2E_element class_func_new (const class GGS_location & inOperand0,
                                                                                          const class GGS_midrange_5F_instructionList & inOperand1,
                                                                                          const class GGS_lstring & inOperand2,
                                                                                          const class GGS_lstring & inOperand3,
                                                                                          const class GGS_location & inOperand4,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_routineDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_routineDefinitionList final {
  public: DownEnumerator_midrange_5F_routineDefinitionList (const class GGS_midrange_5F_routineDefinitionList & inList) ;

  public: ~ DownEnumerator_midrange_5F_routineDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_routineDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_routineDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_routineDefinitionList (const DownEnumerator_midrange_5F_routineDefinitionList &) = delete ;
  private: DownEnumerator_midrange_5F_routineDefinitionList & operator = (const DownEnumerator_midrange_5F_routineDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_routineDefinitionList final {
  public: UpEnumerator_midrange_5F_routineDefinitionList (const class GGS_midrange_5F_routineDefinitionList & inList)  ;

  public: ~ UpEnumerator_midrange_5F_routineDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_routineDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_routineDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_routineDefinitionList (const UpEnumerator_midrange_5F_routineDefinitionList &) = delete ;
  private: UpEnumerator_midrange_5F_routineDefinitionList & operator = (const UpEnumerator_midrange_5F_routineDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @midrange_routineDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_routineDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_midrange_5F_routineDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_midrange_5F_routineDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_midrange_5F_routineDefinitionList (void) = default ;

//--- Copy
  public: GGS_midrange_5F_routineDefinitionList (const GGS_midrange_5F_routineDefinitionList &) = default ;
  public: GGS_midrange_5F_routineDefinitionList & operator = (const GGS_midrange_5F_routineDefinitionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_midrange_5F_routineDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_midrange_5F_routineDefinitionList subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_midrange_5F_routineDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mRoutineName,
                                                 const class GGS_luint & in_mPage,
                                                 const class GGS_luint & in_mRequiredBank,
                                                 const class GGS_luint & in_mReturnedBank,
                                                 const class GGS_bool & in_mPreservesBank,
                                                 const class GGS_bool & in_mIsNoReturn,
                                                 const class GGS_midrange_5F_instructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfRoutineLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_routineDefinitionList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_routineDefinitionList extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_routineDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_routineDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_luint & inOperand1,
                                                                                       const class GGS_luint & inOperand2,
                                                                                       const class GGS_luint & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       const class GGS_bool & inOperand5,
                                                                                       const class GGS_midrange_5F_instructionList & inOperand6,
                                                                                       const class GGS_location & inOperand7
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_midrange_5F_routineDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_luint & inOperand1,
                                                    const class GGS_luint & inOperand2,
                                                    const class GGS_luint & inOperand3,
                                                    const class GGS_bool & inOperand4,
                                                    const class GGS_bool & inOperand5,
                                                    const class GGS_midrange_5F_instructionList & inOperand6,
                                                    const class GGS_location & inOperand7
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_midrange_5F_routineDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_routineDefinitionList add_operation (const GGS_midrange_5F_routineDefinitionList & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_luint constinArgument1,
                                               class GGS_luint constinArgument2,
                                               class GGS_luint constinArgument3,
                                               class GGS_bool constinArgument4,
                                               class GGS_bool constinArgument5,
                                               class GGS_midrange_5F_instructionList constinArgument6,
                                               class GGS_location constinArgument7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_luint constinArgument1,
                                                      class GGS_luint constinArgument2,
                                                      class GGS_luint constinArgument3,
                                                      class GGS_bool constinArgument4,
                                                      class GGS_bool constinArgument5,
                                                      class GGS_midrange_5F_instructionList constinArgument6,
                                                      class GGS_location constinArgument7,
                                                      class GGS_uint constinArgument8,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_luint & outArgument1,
                                                 class GGS_luint & outArgument2,
                                                 class GGS_luint & outArgument3,
                                                 class GGS_bool & outArgument4,
                                                 class GGS_bool & outArgument5,
                                                 class GGS_midrange_5F_instructionList & outArgument6,
                                                 class GGS_location & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_luint & outArgument1,
                                                class GGS_luint & outArgument2,
                                                class GGS_luint & outArgument3,
                                                class GGS_bool & outArgument4,
                                                class GGS_bool & outArgument5,
                                                class GGS_midrange_5F_instructionList & outArgument6,
                                                class GGS_location & outArgument7,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_luint & outArgument1,
                                                      class GGS_luint & outArgument2,
                                                      class GGS_luint & outArgument3,
                                                      class GGS_bool & outArgument4,
                                                      class GGS_bool & outArgument5,
                                                      class GGS_midrange_5F_instructionList & outArgument6,
                                                      class GGS_location & outArgument7,
                                                      class GGS_uint constinArgument8,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineLocationAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_midrange_5F_instructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GGS_bool constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPageAtIndex (class GGS_luint constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesBankAtIndex (class GGS_bool constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRequiredBankAtIndex (class GGS_luint constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedBankAtIndex (class GGS_luint constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_luint & outArgument1,
                                              class GGS_luint & outArgument2,
                                              class GGS_luint & outArgument3,
                                              class GGS_bool & outArgument4,
                                              class GGS_bool & outArgument5,
                                              class GGS_midrange_5F_instructionList & outArgument6,
                                              class GGS_location & outArgument7,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_luint & outArgument1,
                                             class GGS_luint & outArgument2,
                                             class GGS_luint & outArgument3,
                                             class GGS_bool & outArgument4,
                                             class GGS_bool & outArgument5,
                                             class GGS_midrange_5F_instructionList & outArgument6,
                                             class GGS_location & outArgument7,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfRoutineLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsNoReturnAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mPageAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mPreservesBankAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mRequiredBankAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mReturnedBankAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mRoutineNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_routineDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_routineDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_routineDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_routineDefinitionList ;
  friend class DownEnumerator_midrange_5F_routineDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_routineDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_routineDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: inline GGS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
  }

  public: GGS_luint mProperty_mPage ;
  public: inline GGS_luint readProperty_mPage (void) const {
    return mProperty_mPage ;
  }

  public: GGS_luint mProperty_mRequiredBank ;
  public: inline GGS_luint readProperty_mRequiredBank (void) const {
    return mProperty_mRequiredBank ;
  }

  public: GGS_luint mProperty_mReturnedBank ;
  public: inline GGS_luint readProperty_mReturnedBank (void) const {
    return mProperty_mReturnedBank ;
  }

  public: GGS_bool mProperty_mPreservesBank ;
  public: inline GGS_bool readProperty_mPreservesBank (void) const {
    return mProperty_mPreservesBank ;
  }

  public: GGS_bool mProperty_mIsNoReturn ;
  public: inline GGS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GGS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: inline GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfRoutineLocation ;
  public: inline GGS_location readProperty_mEndOfRoutineLocation (void) const {
    return mProperty_mEndOfRoutineLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_routineDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
  }

  public: inline void setter_setMPage (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPage = inValue ;
  }

  public: inline void setter_setMRequiredBank (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredBank = inValue ;
  }

  public: inline void setter_setMReturnedBank (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedBank = inValue ;
  }

  public: inline void setter_setMPreservesBank (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesBank = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_midrange_5F_instructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfRoutineLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_routineDefinitionList_2E_element (const GGS_lstring & in_mRoutineName,
                                                            const GGS_luint & in_mPage,
                                                            const GGS_luint & in_mRequiredBank,
                                                            const GGS_luint & in_mReturnedBank,
                                                            const GGS_bool & in_mPreservesBank,
                                                            const GGS_bool & in_mIsNoReturn,
                                                            const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                            const GGS_location & in_mEndOfRoutineLocation) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_routineDefinitionList_2E_element (const GGS_midrange_5F_routineDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_routineDefinitionList_2E_element & operator = (const GGS_midrange_5F_routineDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_routineDefinitionList_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                        const class GGS_luint & inOperand1,
                                                                                                        const class GGS_luint & inOperand2,
                                                                                                        const class GGS_luint & inOperand3,
                                                                                                        const class GGS_bool & inOperand4,
                                                                                                        const class GGS_bool & inOperand5,
                                                                                                        const class GGS_midrange_5F_instructionList & inOperand6,
                                                                                                        const class GGS_location & inOperand7,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_routineDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_routineDefinitionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_luint & inOperand1,
                                                                                        const class GGS_luint & inOperand2,
                                                                                        const class GGS_luint & inOperand3,
                                                                                        const class GGS_bool & inOperand4,
                                                                                        const class GGS_bool & inOperand5,
                                                                                        const class GGS_midrange_5F_instructionList & inOperand6,
                                                                                        const class GGS_location & inOperand7,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_registerExpression struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mAssemblyString ;
  public: inline GGS_string readProperty_mAssemblyString (void) const {
    return mProperty_mAssemblyString ;
  }

  public: GGS_uint mProperty_mRegisterAddress ;
  public: inline GGS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyString = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_intermediate_5F_registerExpression (const GGS_string & in_mAssemblyString,
                                                              const GGS_uint & in_mRegisterAddress) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_intermediate_5F_registerExpression (const GGS_midrange_5F_intermediate_5F_registerExpression & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_intermediate_5F_registerExpression & operator = (const GGS_midrange_5F_intermediate_5F_registerExpression & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_registerExpression init_21__21_ (const class GGS_string & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_registerExpression extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_registerExpression class_func_new (const class GGS_string & inOperand0,
                                                                                          const class GGS_uint & inOperand1,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction (const class cPtr_midrange_5F_intermediate_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_init (Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter isLABELorORG
  public: virtual class GGS_bool getter_isLABELorORG (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isNULL
  public: virtual class GGS_bool getter_isNULL (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isSkippingInstruction
  public: virtual class GGS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GGS_symbolTableForOptimizations & arg_ioRoutineSymbolTable,
           const class GGS_uint arg_inLineIndex,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GGS_uint & arg_ioCurrentAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties



//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction bang_midrange_5F_intermediate_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_intermediate_5F_instructionList final {
  public: DownEnumerator_midrange_5F_intermediate_5F_instructionList (const class GGS_midrange_5F_intermediate_5F_instructionList & inList) ;

  public: ~ DownEnumerator_midrange_5F_intermediate_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_midrange_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_intermediate_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_intermediate_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_intermediate_5F_instructionList (const DownEnumerator_midrange_5F_intermediate_5F_instructionList &) = delete ;
  private: DownEnumerator_midrange_5F_intermediate_5F_instructionList & operator = (const DownEnumerator_midrange_5F_intermediate_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_intermediate_5F_instructionList final {
  public: UpEnumerator_midrange_5F_intermediate_5F_instructionList (const class GGS_midrange_5F_intermediate_5F_instructionList & inList)  ;

  public: ~ UpEnumerator_midrange_5F_intermediate_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_midrange_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_intermediate_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_intermediate_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_intermediate_5F_instructionList (const UpEnumerator_midrange_5F_intermediate_5F_instructionList &) = delete ;
  private: UpEnumerator_midrange_5F_intermediate_5F_instructionList & operator = (const UpEnumerator_midrange_5F_intermediate_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @midrange_intermediate_instructionList list
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_midrange_5F_intermediate_5F_instructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_midrange_5F_intermediate_5F_instructionList (void) = default ;

//--- Copy
  public: GGS_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instructionList &) = default ;
  public: GGS_midrange_5F_intermediate_5F_instructionList & operator = (const GGS_midrange_5F_intermediate_5F_instructionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_midrange_5F_intermediate_5F_instructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_midrange_5F_intermediate_5F_instructionList subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_midrange_5F_intermediate_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instructionList init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instructionList extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_intermediate_5F_instructionList class_func_listWithValue (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_midrange_5F_intermediate_5F_instructionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_midrange_5F_intermediate_5F_instructionList add_operation (const GGS_midrange_5F_intermediate_5F_instructionList & inOperand,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_intermediate_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_intermediate_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_intermediate_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_intermediate_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_intermediate_5F_instructionList ;
  friend class DownEnumerator_midrange_5F_intermediate_5F_instructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_midrange_5F_intermediate_5F_instruction mProperty_mInstruction ;
  public: inline GGS_midrange_5F_intermediate_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_midrange_5F_intermediate_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element (const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element & operator = (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instructionList_2E_element init_21_ (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instructionList_2E_element class_func_new (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_NULL reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_NULL : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_NULL (const class cPtr_midrange_5F_intermediate_5F_NULL * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_NULL init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_NULL extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_NULL class_func_new (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_NULL class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_NULL : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_NULL_init (Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isNULL
  public: virtual class GGS_bool getter_isNULL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_NULL (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_NULL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_NULL_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_NULL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_NULL_2E_weak (const class GGS_midrange_5F_intermediate_5F_NULL & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_NULL_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_NULL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_NULL_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_NULL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_NULL bang_midrange_5F_intermediate_5F_NULL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_NULL unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_NULL_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_NULL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_NULL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_ORG reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mOrigin (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG init_21_ (const class GGS_uint & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG class_func_new (const class GGS_uint & inOperand0,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_pseudo_ORG class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_pseudo_5F_ORG_init_21_ (const class GGS_uint & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isLABELorORG
  public: virtual class GGS_bool getter_isLABELorORG (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GGS_uint & arg_ioCurrentAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mOrigin ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (const GGS_uint & in_mOrigin,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG bang_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLabel (void) const ;

  public: class GGS_bool readProperty_mIsDeletable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL init_21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_bool & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL class_func_new (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_bool & inOperand1,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_pseudo_5F_LABEL_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isLABELorORG
  public: virtual class GGS_bool getter_isLABELorORG (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GGS_symbolTableForOptimizations & arg_ioRoutineSymbolTable,
           const class GGS_uint arg_inLineIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLabel ;
  public: GGS_bool mProperty_mIsDeletable ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
                                                            const GGS_bool & in_mIsDeletable,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL bang_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_actualInstruction : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_actualInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_actualInstruction (const class cPtr_midrange_5F_intermediate_5F_actualInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_actualInstruction init_21_ (const class GGS_location & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_actualInstruction extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_actualInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_actualInstruction : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_actualInstruction_init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_actualInstruction (const GGS_location & in_mInstructionLocation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_actualInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (const class GGS_midrange_5F_intermediate_5F_actualInstruction & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_actualInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_actualInstruction bang_midrange_5F_intermediate_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_actualInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FD : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_bool & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_FD class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_bool & inOperand3,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_FD class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                   const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   const class GGS_bool & inOperand3,
                                                                                   Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                              const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                              const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                              const GGS_bool & in_m_5F_W_5F_isDestination,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD bang_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_F : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code readProperty_mFinstruction (void) const ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                    const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_F class_func_new (const class GGS_location & inOperand0,
                                                                                        const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                        const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_F class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_F : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                              const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                              Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_F_5F_instruction_5F_base_5F_code mProperty_mFinstruction ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                             const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFinstruction,
                                                             const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_F_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F bang_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FB : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_uint & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_FB class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_uint & inOperand3,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_FB class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_FB : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                   const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   const class GGS_uint & inOperand3,
                                                                                   Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                              const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                              const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                              const GGS_uint & in_mBitNumber,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB bang_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                  const class GGS_uint & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip class_func_new (const class GGS_location & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                  const class GGS_uint & inOperand3,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                            const class GGS_uint & inOperand3,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter isSkippingInstruction
  public: virtual class GGS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeBitTestSkip
  public: virtual void method_optimizeBitTestSkip (const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_bool & in_mSkipIfSet,
                                                                       const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                       const GGS_uint & in_mBitNumber,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip bang_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_call_5F_goto_5F_bit
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_call_5F_goto_5F_bit : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_call_5F_goto_5F_bit (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_set,
    enum_clear,
    enum_noChange
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_call_5F_goto_5F_bit extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_call_5F_goto_5F_bit class_func_clear (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_call_5F_goto_5F_bit class_func_noChange (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_call_5F_goto_5F_bit class_func_set (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_call_5F_goto_5F_bit & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isClear (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoChange (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSet (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_call_5F_goto_5F_bit ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JUMP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_JUMP (const class cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__31_ (void) const ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__32_ (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_JUMP init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                            const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_JUMP extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_JUMP class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                            const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_JUMP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                      const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                      Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeJUMP
  public: virtual void method_optimizeJUMP (const class GGS_symbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__31_ ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__32_ ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                 const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_JUMP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JUMP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JUMP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_JUMP_2E_weak (const class GGS_midrange_5F_intermediate_5F_JUMP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_JUMP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_JUMP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_JUMP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_JUMP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_JUMP bang_midrange_5F_intermediate_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_JUMP unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_JUMP_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_JUMP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JUMP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_GOTO : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_GOTO (const class cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_GOTO extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_GOTO class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_GOTO : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeGOTO
  public: virtual void method_optimizeGOTO (const class GGS_symbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_GOTO_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_GOTO_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_GOTO_2E_weak (const class GGS_midrange_5F_intermediate_5F_GOTO & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_GOTO_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_GOTO_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_GOTO bang_midrange_5F_intermediate_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_GOTO unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_CALL : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_CALL (const class cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_CALL extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_CALL class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_CALL : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_CALL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_CALL_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_CALL_2E_weak (const class GGS_midrange_5F_intermediate_5F_CALL & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_CALL_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_CALL_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_CALL bang_midrange_5F_intermediate_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_CALL unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JSR : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_JSR (const class cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__31_ (void) const ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__32_ (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_JSR init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                           const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_JSR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_JSR class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                           const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_JSR : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_JSR_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                     const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__31_ ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__32_ ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_JSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JSR_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_JSR_2E_weak (const class GGS_midrange_5F_intermediate_5F_JSR & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_JSR_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_JSR_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_JSR bang_midrange_5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_JSR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRWDT reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT init_21_ (const class GGS_location & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT class_func_new (const class GGS_location & inOperand0,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_CLRWDT class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_CLRWDT_init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const GGS_location & in_mInstructionLocation,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT bang_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRW reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW init_21_ (const class GGS_location & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW class_func_new (const class GGS_location & inOperand0,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_CLRW class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_CLRW_init_21_ (const class GGS_location & inOperand0,
                                                                         Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (const GGS_location & in_mInstructionLocation,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW bang_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_NOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP init_21_ (const class GGS_location & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP class_func_new (const class GGS_location & inOperand0,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_NOP class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_NOP_init_21_ (const class GGS_location & inOperand0,
                                                                        Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (const GGS_location & in_mInstructionLocation,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP bang_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETURN reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN init_21_ (const class GGS_location & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN class_func_new (const class GGS_location & inOperand0,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_RETURN class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_RETURN_init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (const GGS_location & in_mInstructionLocation,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN bang_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETFIE reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE init_21_ (const class GGS_location & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE class_func_new (const class GGS_location & inOperand0,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_RETFIE class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_RETFIE_init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const GGS_location & in_mInstructionLocation,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE bang_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_SLEEP reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP init_21_ (const class GGS_location & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP class_func_new (const class GGS_location & inOperand0,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_SLEEP class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_SLEEP_init_21_ (const class GGS_location & inOperand0,
                                                                          Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const GGS_location & in_mInstructionLocation,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP bang_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GGS_uint readProperty_mLiteralValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                   const class GGS_uint & inOperand2,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation class_func_new (const class GGS_location & inOperand0,
                                                                                                       const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                       const class GGS_uint & inOperand2,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                             const class GGS_uint & inOperand2,
                                                                                             Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeMOVLW
  public: virtual void method_optimizeMOVLW (const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GGS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                            const GGS_uint & in_mLiteralValue,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation bang_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_luint & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP class_func_new (const class GGS_location & inOperand0,
                                                                                           const class GGS_luint & inOperand1,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_luint & inOperand1,
                                                                             Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                const GGS_luint & in_mOccurrenceFactor,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP bang_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (const class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_string readProperty_mTargetLabel (void) const ;

  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_bool & inOperand3,
                                                                                                         const class GGS_bool & inOperand4,
                                                                                                         const class GGS_bool & inOperand5,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition class_func_new (const class GGS_location & inOperand0,
                                                                                                 const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                 const class GGS_string & inOperand2,
                                                                                                 const class GGS_bool & inOperand3,
                                                                                                 const class GGS_bool & inOperand4,
                                                                                                 const class GGS_bool & inOperand5,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_bool & inOperand3,
                                                                                                   const class GGS_bool & inOperand4,
                                                                                                   const class GGS_bool & inOperand5,
                                                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTestDecInc
  public: virtual void method_optimizeTestDecInc (const class GGS_symbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_string mProperty_mTargetLabel ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GGS_string & in_mTargetLabel,
                                                                      const GGS_bool & in_mIncrement,
                                                                      const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                      const GGS_bool & in_mBranchIfZero,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (const class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition bang_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (class cPtr_midrange_5F_instruction * inObject,
                                          class GGS_stringset & io_ioUsedRoutines,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@midrange_intermediate_instruction instructionLength'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_instructionLength (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                class GGS_string & io_ioListFileContents,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            class GGS_uint & io_ioCurrentAddress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionUsesGOTOorCALL (class cPtr_midrange_5F_instruction * inObject,
                                                    class GGS_bool & io_ioUsesGOTOorCALL,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (class cPtr_midrange_5F_instruction * inObject,
                                                                       const class GGS_routineMap constin_inRoutineMap,
                                                                       const class GGS_registerTable constin_inRegisterTable,
                                                                       const class GGS_constantMap constin_inConstantMap,
                                                                       class GGS_uint & io_ioLocalLabelIndex,
                                                                       class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                       class GGS_string & io_ioListFileContents,
                                                                       const class GGS_uint constin_inTotalBankCount,
                                                                       class GGS_uint & io_ioCurrentBank,
                                                                       const class GGS_bool constin_inShouldPreserveBank,
                                                                       class GGS_bool & io_ioContinuesInSequence,
                                                                       const class GGS_routineKind constin_inRoutineKind,
                                                                       class GGS_stringset & io_ioUsedRegisters,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression buildIPICinstructionForCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildIPICinstructionForCondition (class cPtr_midrange_5F_conditionExpression * inObject,
                                                           const class GGS_uint constin_inTotalBankCount,
                                                           const class GGS_uint constin_inCurrentBank,
                                                           const class GGS_registerTable constin_inRegisterTable,
                                                           const class GGS_constantMap constin_inConstantMap,
                                                           class GGS_uint & io_ioLocalLabelIndex,
                                                           const class GGS_bool constin_inComplementaryBranch,
                                                           const class GGS_location constin_inInstructionLocation,
                                                           const class GGS_string constin_inTargetLabel,
                                                           class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                           class GGS_string & io_ioListFileContents,
                                                           class GGS_stringset & io_ioUsedRegisters,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_computeInstructionCountForCondition (class cPtr_midrange_5F_conditionExpression * inObject,
                                                              const class GGS_bool constin_inComplementaryBranch,
                                                              class GGS_uint & out_outInstructionCount,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isNULL'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               class GGS_stringset & io_ioReferencedLabelSet,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabel'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                      class GGS_symbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const class GGS_uint constin_inLineIndex,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction_literalOperation optimizeMOVLW'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeMOVLW (class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                        const class GGS_uint constin_inLineIndex,
                                        class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                        class GGS_string & io_ioListFileContents,
                                        class GGS_bool & io_ioOptimizationsDone,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (const class GGS_uint constinArgument0,
                                                                  const class GGS_midrange_5F_intermediate_5F_instructionList constinArgument1,
                                                                  class GGS_midrange_5F_intermediate_5F_instruction & outArgument2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_incDecRegisterInCondition optimizeTestDecInc'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTestDecInc (class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const class GGS_symbolTableForOptimizations constin_inSymbolTable,
                                             const class GGS_uint constin_inLineIndex,
                                             class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             class GGS_string & io_ioListFileContents,
                                             class GGS_bool & io_ioOptimizationsDone,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction_BitTestSkip optimizeBitTestSkip'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBitTestSkip (class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                              const class GGS_uint constin_inLineIndex,
                                              class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                              class GGS_string & io_ioListFileContents,
                                              class GGS_bool & io_ioOptimizationsDone,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const class GGS_uint constinArgument0,
                                                                             const class GGS_midrange_5F_intermediate_5F_instructionList constinArgument1,
                                                                             class GGS_midrange_5F_intermediate_5F_instruction & outArgument2,
                                                                             class GGS_stringset & outArgument3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_symbolTableForConvertingRelatives map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_symbolTableForConvertingRelatives final {

  public: DownEnumerator_midrange_5F_symbolTableForConvertingRelatives (const class GGS_midrange_5F_symbolTableForConvertingRelatives & inMap) ;

  public: ~ DownEnumerator_midrange_5F_symbolTableForConvertingRelatives (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_symbolTableForConvertingRelatives (const DownEnumerator_midrange_5F_symbolTableForConvertingRelatives &) = delete ;
  private: DownEnumerator_midrange_5F_symbolTableForConvertingRelatives & operator = (const DownEnumerator_midrange_5F_symbolTableForConvertingRelatives &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_symbolTableForConvertingRelatives final {
  public: UpEnumerator_midrange_5F_symbolTableForConvertingRelatives (const class GGS_midrange_5F_symbolTableForConvertingRelatives & inMap)  ;

  public: ~ UpEnumerator_midrange_5F_symbolTableForConvertingRelatives (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_symbolTableForConvertingRelatives (const UpEnumerator_midrange_5F_symbolTableForConvertingRelatives &) = delete ;
  private: UpEnumerator_midrange_5F_symbolTableForConvertingRelatives & operator = (const UpEnumerator_midrange_5F_symbolTableForConvertingRelatives &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTableForConvertingRelatives : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_midrange_5F_symbolTableForConvertingRelatives (void) ;

//--- Handle copy
  public: GGS_midrange_5F_symbolTableForConvertingRelatives (const GGS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;
  public: GGS_midrange_5F_symbolTableForConvertingRelatives & operator = (const GGS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_symbolTableForConvertingRelatives class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_symbolTableForConvertingRelatives class_func_mapWithMapToOverride (const class GGS_midrange_5F_symbolTableForConvertingRelatives & inOperand0
                                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineAddressForKey (class GGS_uint constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mRoutineAddressForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_symbolTableForConvertingRelatives getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_symbolTableForConvertingRelatives ;
  friend class DownEnumerator_midrange_5F_symbolTableForConvertingRelatives ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_symbolTableForConvertingRelatives_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mRoutineAddress ;
  public: inline GGS_uint readProperty_mRoutineAddress (void) const {
    return mProperty_mRoutineAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (const GGS_lstring & in_lkey,
                                                                        const GGS_uint & in_mRoutineAddress) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & operator = (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_uint & inOperand1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_uint & inOperand1,
                                                                                                    class Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: midrange_symbolTableForConvertingRelatives.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabelAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               class GGS_midrange_5F_symbolTableForConvertingRelatives & io_ioRoutineSymbolTable,
                                               class GGS_uint & io_ioAddress,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction compute'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_compute (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                  const class GGS_midrange_5F_symbolTableForConvertingRelatives constin_inRoutineSymbolTable,
                                  class GGS_uint & io_ioAddress,
                                  class GGS_bool & io_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                  class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                  const class GGS_uint constin_inIndex,
                                  class GGS_string & io_ioListFileContents,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildAssemblyCode (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            class GGS_string & io_ioString,
                                            class GGS_uint & io_ioLocalLabelIndex,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_symbolTable map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_symbolTable final {

  public: DownEnumerator_midrange_5F_symbolTable (const class GGS_midrange_5F_symbolTable & inMap) ;

  public: ~ DownEnumerator_midrange_5F_symbolTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_symbolTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_symbolTable (const DownEnumerator_midrange_5F_symbolTable &) = delete ;
  private: DownEnumerator_midrange_5F_symbolTable & operator = (const DownEnumerator_midrange_5F_symbolTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_symbolTable final {
  public: UpEnumerator_midrange_5F_symbolTable (const class GGS_midrange_5F_symbolTable & inMap)  ;

  public: ~ UpEnumerator_midrange_5F_symbolTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_symbolTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_symbolTable (const UpEnumerator_midrange_5F_symbolTable &) = delete ;
  private: UpEnumerator_midrange_5F_symbolTable & operator = (const UpEnumerator_midrange_5F_symbolTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTable : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_symbolTable_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_midrange_5F_symbolTable (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_midrange_5F_symbolTable (void) ;

//--- Handle copy
  public: GGS_midrange_5F_symbolTable (const GGS_midrange_5F_symbolTable & inSource) ;
  public: GGS_midrange_5F_symbolTable & operator = (const GGS_midrange_5F_symbolTable & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_midrange_5F_symbolTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTable init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTable extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_symbolTable class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_symbolTable class_func_mapWithMapToOverride (const class GGS_midrange_5F_symbolTable & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineAddressForKey (class GGS_uint constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mRoutineAddressForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_symbolTable getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_symbolTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_symbolTable ;
  friend class DownEnumerator_midrange_5F_symbolTable ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_symbolTable_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTable_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mRoutineAddress ;
  public: inline GGS_uint readProperty_mRoutineAddress (void) const {
    return mProperty_mRoutineAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTable_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_symbolTable_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_uint & in_mRoutineAddress) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_symbolTable_2E_element (const GGS_midrange_5F_symbolTable_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_symbolTable_2E_element & operator = (const GGS_midrange_5F_symbolTable_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTable_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTable_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_symbolTable_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_uint & inOperand1,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: midrange_symbolTable.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_midrange_5F_symbolTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_midrange_5F_symbolTable_2E_element_3F_ (const GGS_midrange_5F_symbolTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_midrange_5F_symbolTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_midrange_5F_symbolTable_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTable_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              class GGS_midrange_5F_symbolTable & io_ioRoutineSymbolTable,
                                              class GGS_uint & io_ioAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      const class GGS_registerTable constin_inRegisterTable,
                                                      const class GGS_constantMap constin_inConstantMap,
                                                      const class GGS_uint constin_inTotalBankCount,
                                                      const class GGS_midrange_5F_symbolTable constin_inRoutineSymbolTable,
                                                      class GGS_string & io_ioListFileContents,
                                                      class GGS_uint & io_ioAddress,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_instruction_FD_base_code basecode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_basecode (const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_F_instruction_base_code baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_baseCode (const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_bit_oriented_op baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_baseCode (const class GGS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_literal_instruction_opcode baseCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_baseCode (const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_declaredRoutineMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_declaredRoutineMap final {

  public: DownEnumerator_midrange_5F_declaredRoutineMap (const class GGS_midrange_5F_declaredRoutineMap & inMap) ;

  public: ~ DownEnumerator_midrange_5F_declaredRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_declaredRoutineMap (const DownEnumerator_midrange_5F_declaredRoutineMap &) = delete ;
  private: DownEnumerator_midrange_5F_declaredRoutineMap & operator = (const DownEnumerator_midrange_5F_declaredRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_declaredRoutineMap final {
  public: UpEnumerator_midrange_5F_declaredRoutineMap (const class GGS_midrange_5F_declaredRoutineMap & inMap)  ;

  public: ~ UpEnumerator_midrange_5F_declaredRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_declaredRoutineMap (const UpEnumerator_midrange_5F_declaredRoutineMap &) = delete ;
  private: UpEnumerator_midrange_5F_declaredRoutineMap & operator = (const UpEnumerator_midrange_5F_declaredRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_declaredRoutineMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_declaredRoutineMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_midrange_5F_declaredRoutineMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_midrange_5F_declaredRoutineMap (void) ;

//--- Handle copy
  public: GGS_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap & inSource) ;
  public: GGS_midrange_5F_declaredRoutineMap & operator = (const GGS_midrange_5F_declaredRoutineMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_midrange_5F_declaredRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_declaredRoutineMap init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_declaredRoutineMap extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_declaredRoutineMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_declaredRoutineMap class_func_mapWithMapToOverride (const class GGS_midrange_5F_declaredRoutineMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_declaredRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_declaredRoutineMap ;
  friend class DownEnumerator_midrange_5F_declaredRoutineMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_declaredRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_declaredRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_declaredRoutineMap_2E_element & operator = (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_declaredRoutineMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: midrange_declaredRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_midrange_5F_declaredRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_midrange_5F_declaredRoutineMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bootloaderReservedRAMmap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_bootloaderReservedRAMmap final {

  public: DownEnumerator_bootloaderReservedRAMmap (const class GGS_bootloaderReservedRAMmap & inMap) ;

  public: ~ DownEnumerator_bootloaderReservedRAMmap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_luint current_mReservedSize (LOCATION_ARGS) const ;

  public: class GGS_bootloaderReservedRAMmap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_bootloaderReservedRAMmap (const DownEnumerator_bootloaderReservedRAMmap &) = delete ;
  private: DownEnumerator_bootloaderReservedRAMmap & operator = (const DownEnumerator_bootloaderReservedRAMmap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_bootloaderReservedRAMmap final {
  public: UpEnumerator_bootloaderReservedRAMmap (const class GGS_bootloaderReservedRAMmap & inMap)  ;

  public: ~ UpEnumerator_bootloaderReservedRAMmap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReservedSize (LOCATION_ARGS) const ;
  public: class GGS_bootloaderReservedRAMmap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_bootloaderReservedRAMmap (const UpEnumerator_bootloaderReservedRAMmap &) = delete ;
  private: UpEnumerator_bootloaderReservedRAMmap & operator = (const UpEnumerator_bootloaderReservedRAMmap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_bootloaderReservedRAMmap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_bootloaderReservedRAMmap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_bootloaderReservedRAMmap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_bootloaderReservedRAMmap (void) ;

//--- Handle copy
  public: GGS_bootloaderReservedRAMmap (const GGS_bootloaderReservedRAMmap & inSource) ;
  public: GGS_bootloaderReservedRAMmap & operator = (const GGS_bootloaderReservedRAMmap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_bootloaderReservedRAMmap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bootloaderReservedRAMmap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bootloaderReservedRAMmap extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bootloaderReservedRAMmap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_bootloaderReservedRAMmap class_func_mapWithMapToOverride (const class GGS_bootloaderReservedRAMmap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReservedSizeForKey (class GGS_luint constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mReservedSizeForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bootloaderReservedRAMmap getter_overriddenMap (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_bootloaderReservedRAMmap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_bootloaderReservedRAMmap ;
  friend class DownEnumerator_bootloaderReservedRAMmap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bootloaderReservedRAMmap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_bootloaderReservedRAMmap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_luint mProperty_mReservedSize ;
  public: inline GGS_luint readProperty_mReservedSize (void) const {
    return mProperty_mReservedSize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bootloaderReservedRAMmap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMReservedSize (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReservedSize = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bootloaderReservedRAMmap_2E_element (const GGS_lstring & in_lkey,
                                                   const GGS_luint & in_mReservedSize) ;

//--------------------------------- Copy constructor
  public: GGS_bootloaderReservedRAMmap_2E_element (const GGS_bootloaderReservedRAMmap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bootloaderReservedRAMmap_2E_element & operator = (const GGS_bootloaderReservedRAMmap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bootloaderReservedRAMmap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_luint & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bootloaderReservedRAMmap_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bootloaderReservedRAMmap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                               const class GGS_luint & inOperand1,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: bootloaderReservedRAMmap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_bootloaderReservedRAMmap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_bootloaderReservedRAMmap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_bootloaderReservedRAMmap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_bootloaderReservedRAMmap_2E_element_3F_ (const GGS_bootloaderReservedRAMmap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_bootloaderReservedRAMmap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_bootloaderReservedRAMmap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bootloaderReservedRAMmap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_PiccoloInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_PiccoloInstruction (const class cPtr_pic_31__38_PiccoloInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_PiccoloInstruction init_21_ (const class GGS_location & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_PiccoloInstruction extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18PiccoloInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_PiccoloInstruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_PiccoloInstruction_init_21_ (const class GGS_location & inOperand0,
                                                       Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GGS_stringset arg_inInlinedRoutineSet,
           const class GGS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GGS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GGS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_PiccoloInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_PiccoloInstruction (const GGS_location & in_mInstructionLocation,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_PiccoloInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloInstruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_PiccoloInstruction_2E_weak (const class GGS_pic_31__38_PiccoloInstruction & inSource) ;

  public: GGS_pic_31__38_PiccoloInstruction_2E_weak & operator = (const class GGS_pic_31__38_PiccoloInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_PiccoloInstruction_2E_weak init_nil (void) {
    GGS_pic_31__38_PiccoloInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_PiccoloInstruction bang_pic_31__38_PiccoloInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_PiccoloInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_PiccoloInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_PiccoloInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_InstructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_InstructionList final {
  public: DownEnumerator_pic_31__38_InstructionList (const class GGS_pic_31__38_InstructionList & inList) ;

  public: ~ DownEnumerator_pic_31__38_InstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_PiccoloInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_InstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_InstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_InstructionList (const DownEnumerator_pic_31__38_InstructionList &) = delete ;
  private: DownEnumerator_pic_31__38_InstructionList & operator = (const DownEnumerator_pic_31__38_InstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_InstructionList final {
  public: UpEnumerator_pic_31__38_InstructionList (const class GGS_pic_31__38_InstructionList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_InstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_PiccoloInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_InstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_InstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_InstructionList (const UpEnumerator_pic_31__38_InstructionList &) = delete ;
  private: UpEnumerator_pic_31__38_InstructionList & operator = (const UpEnumerator_pic_31__38_InstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18InstructionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InstructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_InstructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_InstructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_InstructionList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_InstructionList (const GGS_pic_31__38_InstructionList &) = default ;
  public: GGS_pic_31__38_InstructionList & operator = (const GGS_pic_31__38_InstructionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_pic_31__38_InstructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_InstructionList subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_InstructionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_InstructionList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_InstructionList extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_InstructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionList class_func_listWithValue (const class GGS_pic_31__38_PiccoloInstruction & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_InstructionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_pic_31__38_PiccoloInstruction & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_InstructionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_InstructionList add_operation (const GGS_pic_31__38_InstructionList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_pic_31__38_PiccoloInstruction constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_pic_31__38_PiccoloInstruction constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_pic_31__38_PiccoloInstruction constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_PiccoloInstruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_InstructionList ;
  friend class DownEnumerator_pic_31__38_InstructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_InstructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_pic_31__38_PiccoloInstruction mProperty_mInstruction ;
  public: inline GGS_pic_31__38_PiccoloInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_InstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_pic_31__38_PiccoloInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_InstructionList_2E_element (const GGS_pic_31__38_PiccoloInstruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_InstructionList_2E_element (const GGS_pic_31__38_InstructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_InstructionList_2E_element & operator = (const GGS_pic_31__38_InstructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_InstructionList_2E_element init_21_ (const class GGS_pic_31__38_PiccoloInstruction & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_InstructionList_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_InstructionList_2E_element class_func_new (const class GGS_pic_31__38_PiccoloInstruction & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_nobanksel reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_nobanksel : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_nobanksel (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_nobanksel (const class cPtr_pic_31__38_Instruction_5F_nobanksel * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_nobanksel init_21_ (const class GGS_location & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_nobanksel extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_nobanksel class_func_new (const class GGS_location & inOperand0,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_nobanksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_nobanksel class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_nobanksel : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_nobanksel_init_21_ (const class GGS_location & inOperand0,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_nobanksel (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_nobanksel (const GGS_location & in_mInstructionLocation,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_nobanksel_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak (const class GGS_pic_31__38_Instruction_5F_nobanksel & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_nobanksel & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_nobanksel bang_pic_31__38_Instruction_5F_nobanksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_nobanksel unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_checknobank reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_checknobank : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_checknobank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_checknobank (const class cPtr_pic_31__38_Instruction_5F_checknobank * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_checknobank init_21_ (const class GGS_location & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_checknobank extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_checknobank class_func_new (const class GGS_location & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_checknobank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_checknobank class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_checknobank : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_checknobank_init_21_ (const class GGS_location & inOperand0,
                                                               Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_checknobank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_checknobank (const GGS_location & in_mInstructionLocation,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_checknobank_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_checknobank_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_checknobank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_checknobank_2E_weak (const class GGS_pic_31__38_Instruction_5F_checknobank & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_checknobank_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_checknobank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_checknobank_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_checknobank_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_checknobank bang_pic_31__38_Instruction_5F_checknobank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_checknobank unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_checknobank_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_checknobank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_checknobank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_checkbank reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_checkbank : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_checkbank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_checkbank (const class cPtr_pic_31__38_Instruction_5F_checkbank * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mBankIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_checkbank init_21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_checkbank extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_checkbank class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_uint & inOperand1,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_checkbank class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_checkbank : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_checkbank_init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_uint & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mBankIndex ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_checkbank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_checkbank (const GGS_location & in_mInstructionLocation,
                                                    const GGS_uint & in_mBankIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_checkbank_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_checkbank_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_checkbank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_checkbank_2E_weak (const class GGS_pic_31__38_Instruction_5F_checkbank & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_checkbank_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_checkbank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_checkbank_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_checkbank_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_checkbank bang_pic_31__38_Instruction_5F_checkbank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_checkbank unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_checkbank_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_checkbank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_checkbank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_PiccoloSimpleInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloSimpleInstruction : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloSimpleInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_PiccoloSimpleInstruction (const class cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_PiccoloSimpleInstruction init_21_ (const class GGS_location & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_PiccoloSimpleInstruction extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloSimpleInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18PiccoloSimpleInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_PiccoloSimpleInstruction : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_PiccoloSimpleInstruction_init_21_ (const class GGS_location & inOperand0,
                                                             Compiler * inCompiler) ;


//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_pic_31__38_PiccoloSimpleInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_PiccoloSimpleInstruction (const GGS_location & in_mInstructionLocation,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_PiccoloSimpleInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (const class GGS_pic_31__38_PiccoloSimpleInstruction & inSource) ;

  public: GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak & operator = (const class GGS_pic_31__38_PiccoloSimpleInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak init_nil (void) {
    GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_PiccoloSimpleInstruction bang_pic_31__38_PiccoloSimpleInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_PiccoloSimpleInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_banksel reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_banksel : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_banksel (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_banksel (const class cPtr_pic_31__38_Instruction_5F_banksel * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mBankIndex (void) const ;

  public: class GGS_bool readProperty_mWarningOnUselessBanksel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_banksel init_21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_luint & inOperand1,
                                                                         const class GGS_bool & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_banksel extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_banksel class_func_new (const class GGS_location & inOperand0,
                                                                             const class GGS_luint & inOperand1,
                                                                             const class GGS_bool & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_banksel class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_banksel : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_banksel_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_luint & inOperand1,
                                                                   const class GGS_bool & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mBankIndex ;
  public: GGS_bool mProperty_mWarningOnUselessBanksel ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel (const GGS_location & in_mInstructionLocation,
                                                  const GGS_luint & in_mBankIndex,
                                                  const GGS_bool & in_mWarningOnUselessBanksel,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_banksel_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_banksel_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_banksel_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_banksel_2E_weak (const class GGS_pic_31__38_Instruction_5F_banksel & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_banksel_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_banksel & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_banksel_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_banksel_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_banksel bang_pic_31__38_Instruction_5F_banksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_banksel unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_banksel_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_banksel_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_banksel_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_banksel_5F_register reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_banksel_5F_register : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register (const class cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_mWarningOnUselessBanksel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_banksel_5F_register init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_registerExpression & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_banksel_5F_register extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_banksel_5F_register class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_registerExpression & inOperand1,
                                                                                         const class GGS_bool & inOperand2,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_banksel_register class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_banksel_5F_register : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_banksel_5F_register_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_registerExpression & inOperand1,
                                                                               const class GGS_bool & inOperand2,
                                                                               Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_mWarningOnUselessBanksel ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GGS_location & in_mInstructionLocation,
                                                              const GGS_registerExpression & in_mRegisterExpression,
                                                              const GGS_bool & in_mWarningOnUselessBanksel,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_banksel_5F_register_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (const class GGS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register bang_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_banksel_5F_register unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_savebank reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_savebank : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_savebank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_savebank (const class cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegister (void) const ;

  public: class GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfSaveBankInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_savebank init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_registerExpression & inOperand1,
                                                                              const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                              const class GGS_location & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_savebank extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_savebank class_func_new (const class GGS_location & inOperand0,
                                                                              const class GGS_registerExpression & inOperand1,
                                                                              const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                              const class GGS_location & inOperand3,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_savebank class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_savebank : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_savebank_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_registerExpression & inOperand1,
                                                                        const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                        const class GGS_location & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GGS_stringset arg_inInlinedRoutineSet,
           const class GGS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GGS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GGS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegister ;
  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfSaveBankInstruction ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_savebank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_savebank (const GGS_location & in_mInstructionLocation,
                                                   const GGS_registerExpression & in_mRegister,
                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                   const GGS_location & in_mEndOfSaveBankInstruction,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_savebank_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_savebank_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_savebank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_savebank_2E_weak (const class GGS_pic_31__38_Instruction_5F_savebank & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_savebank_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_savebank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_savebank_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_savebank_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_savebank bang_pic_31__38_Instruction_5F_savebank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_savebank unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_savebank_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_savebank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_savebank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_repetitionStatique reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_repetitionStatique : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique (const class cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantName (void) const ;

  public: class GGS_immediatExpression readProperty_mLowerBoundExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mUpperBoundExpression (void) const ;

  public: class GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_repetitionStatique init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_immediatExpression & inOperand2,
                                                                                                const class GGS_immediatExpression & inOperand3,
                                                                                                const class GGS_pic_31__38_InstructionList & inOperand4,
                                                                                                const class GGS_location & inOperand5,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_repetitionStatique extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_repetitionStatique class_func_new (const class GGS_location & inOperand0,
                                                                                        const class GGS_lstring & inOperand1,
                                                                                        const class GGS_immediatExpression & inOperand2,
                                                                                        const class GGS_immediatExpression & inOperand3,
                                                                                        const class GGS_pic_31__38_InstructionList & inOperand4,
                                                                                        const class GGS_location & inOperand5,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_repetitionStatique class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_repetitionStatique : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_repetitionStatique_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_immediatExpression & inOperand2,
                                                                                          const class GGS_immediatExpression & inOperand3,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand4,
                                                                                          const class GGS_location & inOperand5,
                                                                                          Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: GGS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GGS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstruction ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_repetitionStatique (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_repetitionStatique (const GGS_location & in_mInstructionLocation,
                                                             const GGS_lstring & in_mConstantName,
                                                             const GGS_immediatExpression & in_mLowerBoundExpression,
                                                             const GGS_immediatExpression & in_mUpperBoundExpression,
                                                             const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                             const GGS_location & in_mEndOfInstruction,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_repetitionStatique_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (const class GGS_pic_31__38_Instruction_5F_repetitionStatique & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_repetitionStatique & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique bang_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_repetitionStatique unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractBlockTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractBlockTerminationForBlockInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractBlockTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractBlockTerminationForBlockInstruction (const class cPtr_abstractBlockTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractBlockTerminationForBlockInstruction init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractBlockTerminationForBlockInstruction extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractBlockTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractBlockTerminationForBlockInstruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractBlockTerminationForBlockInstruction_init (Compiler * inCompiler) ;


//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GGS_stringset & arg_ioVisitedBlockSet,
           const class GGS_blockInstructionBlockMap arg_inBlockMap,
           const class GGS_string arg_inCurrentBlockName,
           const class GGS_uint arg_inInitialBlockSetting,
           class GGS_blockInitialBankSelectionMap & arg_ioBlockInitialBankSelectionMap,
           class GGS_bool & arg_ioContinuesInSequence,
           class GGS_bool & arg_ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_string arg_inLabelForBlock,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractBlockTerminationForBlockInstruction (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractBlockTerminationForBlockInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractBlockTerminationForBlockInstruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractBlockTerminationForBlockInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractBlockTerminationForBlockInstruction_2E_weak (const class GGS_abstractBlockTerminationForBlockInstruction & inSource) ;

  public: GGS_abstractBlockTerminationForBlockInstruction_2E_weak & operator = (const class GGS_abstractBlockTerminationForBlockInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractBlockTerminationForBlockInstruction_2E_weak init_nil (void) {
    GGS_abstractBlockTerminationForBlockInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractBlockTerminationForBlockInstruction bang_abstractBlockTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractBlockTerminationForBlockInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractBlockTerminationForBlockInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractBlockTerminationForBlockInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBlockTerminationForBlockInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @exitBlockTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_exitBlockTerminationForBlockInstruction : public GGS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GGS_exitBlockTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_exitBlockTerminationForBlockInstruction (const class cPtr_exitBlockTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_exitBlockTerminationForBlockInstruction init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_exitBlockTerminationForBlockInstruction extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_exitBlockTerminationForBlockInstruction class_func_new (const class GGS_location & inOperand0,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_exitBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @exitBlockTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_exitBlockTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void exitBlockTerminationForBlockInstruction_init_21_ (const class GGS_location & inOperand0,
                                                                 Compiler * inCompiler) ;


//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GGS_stringset & arg_ioVisitedBlockSet,
           const class GGS_blockInstructionBlockMap arg_inBlockMap,
           const class GGS_string arg_inCurrentBlockName,
           const class GGS_uint arg_inInitialBlockSetting,
           class GGS_blockInitialBankSelectionMap & arg_ioBlockInitialBankSelectionMap,
           class GGS_bool & arg_ioContinuesInSequence,
           class GGS_bool & arg_ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_string arg_inLabelForBlock,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_exitBlockTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_exitBlockTerminationForBlockInstruction (const GGS_location & in_mLocation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @exitBlockTerminationForBlockInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_exitBlockTerminationForBlockInstruction_2E_weak : public GGS_abstractBlockTerminationForBlockInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_exitBlockTerminationForBlockInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_exitBlockTerminationForBlockInstruction_2E_weak (const class GGS_exitBlockTerminationForBlockInstruction & inSource) ;

  public: GGS_exitBlockTerminationForBlockInstruction_2E_weak & operator = (const class GGS_exitBlockTerminationForBlockInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_exitBlockTerminationForBlockInstruction_2E_weak init_nil (void) {
    GGS_exitBlockTerminationForBlockInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_exitBlockTerminationForBlockInstruction bang_exitBlockTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_exitBlockTerminationForBlockInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_exitBlockTerminationForBlockInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_exitBlockTerminationForBlockInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_exitBlockTerminationForBlockInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @gotoTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_gotoTerminationForBlockInstruction : public GGS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GGS_gotoTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_gotoTerminationForBlockInstruction (const class cPtr_gotoTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mNextBlock (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_gotoTerminationForBlockInstruction init_21_ (const class GGS_lstring & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_gotoTerminationForBlockInstruction extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_gotoTerminationForBlockInstruction class_func_new (const class GGS_lstring & inOperand0,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_gotoTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @gotoTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_gotoTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void gotoTerminationForBlockInstruction_init_21_ (const class GGS_lstring & inOperand0,
                                                            Compiler * inCompiler) ;


//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GGS_stringset & arg_ioVisitedBlockSet,
           const class GGS_blockInstructionBlockMap arg_inBlockMap,
           const class GGS_string arg_inCurrentBlockName,
           const class GGS_uint arg_inInitialBlockSetting,
           class GGS_blockInitialBankSelectionMap & arg_ioBlockInitialBankSelectionMap,
           class GGS_bool & arg_ioContinuesInSequence,
           class GGS_bool & arg_ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_string arg_inLabelForBlock,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mNextBlock ;


//--- Default constructor
  public: cPtr_gotoTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_gotoTerminationForBlockInstruction (const GGS_lstring & in_mNextBlock,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @gotoTerminationForBlockInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_gotoTerminationForBlockInstruction_2E_weak : public GGS_abstractBlockTerminationForBlockInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_gotoTerminationForBlockInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_gotoTerminationForBlockInstruction_2E_weak (const class GGS_gotoTerminationForBlockInstruction & inSource) ;

  public: GGS_gotoTerminationForBlockInstruction_2E_weak & operator = (const class GGS_gotoTerminationForBlockInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_gotoTerminationForBlockInstruction_2E_weak init_nil (void) {
    GGS_gotoTerminationForBlockInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_gotoTerminationForBlockInstruction bang_gotoTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_gotoTerminationForBlockInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_gotoTerminationForBlockInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_gotoTerminationForBlockInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_gotoTerminationForBlockInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_ConditionExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_ConditionExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_ConditionExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_ConditionExpression (const class cPtr_pic_31__38_ConditionExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_ConditionExpression init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_ConditionExpression extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_ConditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18ConditionExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_ConditionExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_ConditionExpression_init (Compiler * inCompiler) ;


//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_lstring arg_inConditionFalseLabel,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_pic_31__38_ConditionExpression (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @testTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_testTerminationForBlockInstruction : public GGS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GGS_testTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_testTerminationForBlockInstruction (const class cPtr_testTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_ConditionExpression readProperty_mCondition (void) const ;

  public: class GGS_abstractBlockTerminationForBlockInstruction readProperty_mTrueTermination (void) const ;

  public: class GGS_abstractBlockTerminationForBlockInstruction readProperty_mFalseTermination (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_testTerminationForBlockInstruction init_21__21__21__21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                              const class GGS_abstractBlockTerminationForBlockInstruction & inOperand1,
                                                                              const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                              const class GGS_location & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_testTerminationForBlockInstruction extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_testTerminationForBlockInstruction class_func_new (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                              const class GGS_abstractBlockTerminationForBlockInstruction & inOperand1,
                                                                              const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                              const class GGS_location & inOperand3,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @testTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_testTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void testTerminationForBlockInstruction_init_21__21__21__21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                        const class GGS_abstractBlockTerminationForBlockInstruction & inOperand1,
                                                                        const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                        const class GGS_location & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GGS_stringset & arg_ioVisitedBlockSet,
           const class GGS_blockInstructionBlockMap arg_inBlockMap,
           const class GGS_string arg_inCurrentBlockName,
           const class GGS_uint arg_inInitialBlockSetting,
           class GGS_blockInitialBankSelectionMap & arg_ioBlockInitialBankSelectionMap,
           class GGS_bool & arg_ioContinuesInSequence,
           class GGS_bool & arg_ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_string arg_inLabelForBlock,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_ConditionExpression mProperty_mCondition ;
  public: GGS_abstractBlockTerminationForBlockInstruction mProperty_mTrueTermination ;
  public: GGS_abstractBlockTerminationForBlockInstruction mProperty_mFalseTermination ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_testTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_testTerminationForBlockInstruction (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                   const GGS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                   const GGS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                   const GGS_location & in_mLocation,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @testTerminationForBlockInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_testTerminationForBlockInstruction_2E_weak : public GGS_abstractBlockTerminationForBlockInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_testTerminationForBlockInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_testTerminationForBlockInstruction_2E_weak (const class GGS_testTerminationForBlockInstruction & inSource) ;

  public: GGS_testTerminationForBlockInstruction_2E_weak & operator = (const class GGS_testTerminationForBlockInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_testTerminationForBlockInstruction_2E_weak init_nil (void) {
    GGS_testTerminationForBlockInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_testTerminationForBlockInstruction bang_testTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_testTerminationForBlockInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_testTerminationForBlockInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_testTerminationForBlockInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testTerminationForBlockInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_BlockInstructionBlockList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_BlockInstructionBlockList final {
  public: DownEnumerator_pic_31__38_BlockInstructionBlockList (const class GGS_pic_31__38_BlockInstructionBlockList & inList) ;

  public: ~ DownEnumerator_pic_31__38_BlockInstructionBlockList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mBlockName (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_BlockInstructionBlockList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_BlockInstructionBlockList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_BlockInstructionBlockList (const DownEnumerator_pic_31__38_BlockInstructionBlockList &) = delete ;
  private: DownEnumerator_pic_31__38_BlockInstructionBlockList & operator = (const DownEnumerator_pic_31__38_BlockInstructionBlockList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_BlockInstructionBlockList final {
  public: UpEnumerator_pic_31__38_BlockInstructionBlockList (const class GGS_pic_31__38_BlockInstructionBlockList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_BlockInstructionBlockList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mBlockName (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_BlockInstructionBlockList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_BlockInstructionBlockList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_BlockInstructionBlockList (const UpEnumerator_pic_31__38_BlockInstructionBlockList &) = delete ;
  private: UpEnumerator_pic_31__38_BlockInstructionBlockList & operator = (const UpEnumerator_pic_31__38_BlockInstructionBlockList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18BlockInstructionBlockList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BlockInstructionBlockList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_BlockInstructionBlockList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_BlockInstructionBlockList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_BlockInstructionBlockList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_BlockInstructionBlockList (const GGS_pic_31__38_BlockInstructionBlockList &) = default ;
  public: GGS_pic_31__38_BlockInstructionBlockList & operator = (const GGS_pic_31__38_BlockInstructionBlockList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_pic_31__38_BlockInstructionBlockList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_BlockInstructionBlockList subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_BlockInstructionBlockList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mBlockName,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                 const class GGS_location & in_mEndOfBlock
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_BlockInstructionBlockList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_BlockInstructionBlockList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BlockInstructionBlockList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_BlockInstructionBlockList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                          const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                          const class GGS_location & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_BlockInstructionBlockList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_pic_31__38_InstructionList & inOperand1,
                                                    const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                    const class GGS_location & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_BlockInstructionBlockList add_operation (const GGS_pic_31__38_BlockInstructionBlockList & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_pic_31__38_InstructionList constinArgument1,
                                               class GGS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                               class GGS_location constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_pic_31__38_InstructionList constinArgument1,
                                                      class GGS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                                      class GGS_location constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_pic_31__38_InstructionList & outArgument1,
                                                 class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                 class GGS_location & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_pic_31__38_InstructionList & outArgument1,
                                                class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                class GGS_location & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_pic_31__38_InstructionList & outArgument1,
                                                      class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                      class GGS_location & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockTerminaisonForBlockInstructionAtIndex (class GGS_abstractBlockTerminationForBlockInstruction constinArgument0,
                                                                                       class GGS_uint constinArgument1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBlockAtIndex (class GGS_location constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_pic_31__38_InstructionList & outArgument1,
                                              class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                              class GGS_location & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_pic_31__38_InstructionList & outArgument1,
                                             class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                             class GGS_location & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mBlockNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfBlockAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_BlockInstructionBlockList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_BlockInstructionBlockList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_BlockInstructionBlockList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_BlockInstructionBlockList ;
  friend class DownEnumerator_pic_31__38_BlockInstructionBlockList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_BlockInstructionBlockList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BlockInstructionBlockList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mBlockName ;
  public: inline GGS_lstring readProperty_mBlockName (void) const {
    return mProperty_mBlockName ;
  }

  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;
  public: inline GGS_abstractBlockTerminationForBlockInstruction readProperty_mBlockTerminaisonForBlockInstruction (void) const {
    return mProperty_mBlockTerminaisonForBlockInstruction ;
  }

  public: GGS_location mProperty_mEndOfBlock ;
  public: inline GGS_location readProperty_mEndOfBlock (void) const {
    return mProperty_mEndOfBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_BlockInstructionBlockList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBlockName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockName = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMBlockTerminaisonForBlockInstruction (const GGS_abstractBlockTerminationForBlockInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockTerminaisonForBlockInstruction = inValue ;
  }

  public: inline void setter_setMEndOfBlock (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBlock = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_BlockInstructionBlockList_2E_element (const GGS_lstring & in_mBlockName,
                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                               const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                               const GGS_location & in_mEndOfBlock) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_BlockInstructionBlockList_2E_element (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_BlockInstructionBlockList_2E_element & operator = (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_BlockInstructionBlockList_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                           const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                           const class GGS_location & inOperand3,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_BlockInstructionBlockList_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BlockInstructionBlockList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                           const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                           const class GGS_location & inOperand3,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2E_element ;

