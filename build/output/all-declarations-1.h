#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @ramDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ramDefinitionList final {
  public: DownEnumerator_ramDefinitionList (const class GGS_ramDefinitionList & inList) ;

  public: ~ DownEnumerator_ramDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mBankName (LOCATION_ARGS) const ;
  public: class GGS_declarationInRamList current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ramDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ramDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ramDefinitionList (const DownEnumerator_ramDefinitionList &) = delete ;
  private: DownEnumerator_ramDefinitionList & operator = (const DownEnumerator_ramDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ramDefinitionList final {
  public: UpEnumerator_ramDefinitionList (const class GGS_ramDefinitionList & inList)  ;

  public: ~ UpEnumerator_ramDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mBankName (LOCATION_ARGS) const ;
  public: class GGS_declarationInRamList current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ramDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ramDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ramDefinitionList (const UpEnumerator_ramDefinitionList &) = delete ;
  private: UpEnumerator_ramDefinitionList & operator = (const UpEnumerator_ramDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ramDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_ramDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ramDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_ramDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_ramDefinitionList (void) = default ;

//--- Copy
  public: GGS_ramDefinitionList (const GGS_ramDefinitionList &) = default ;
  public: GGS_ramDefinitionList & operator = (const GGS_ramDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_ramDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ramDefinitionList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ramDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mBankName,
                                                 const class GGS_declarationInRamList & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramDefinitionList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramDefinitionList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ramDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_ramDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_declarationInRamList & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_ramDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_declarationInRamList & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_ramDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ramDefinitionList add_operation (const GGS_ramDefinitionList & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_declarationInRamList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_declarationInRamList constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_declarationInRamList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_declarationInRamList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_declarationInRamList & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBankNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GGS_declarationInRamList constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_declarationInRamList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_declarationInRamList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mBankNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationInRamList getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ramDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ramDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ramDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ramDefinitionList ;
  friend class DownEnumerator_ramDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ramDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ramDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mBankName ;
  public: inline GGS_lstring readProperty_mBankName (void) const {
    return mProperty_mBankName ;
  }

  public: GGS_declarationInRamList mProperty_mDeclaration ;
  public: inline GGS_declarationInRamList readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ramDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBankName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBankName = inValue ;
  }

  public: inline void setter_setMDeclaration (const GGS_declarationInRamList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ramDefinitionList_2E_element (const GGS_lstring & in_mBankName,
                                            const GGS_declarationInRamList & in_mDeclaration) ;

//--------------------------------- Copy constructor
  public: GGS_ramDefinitionList_2E_element (const GGS_ramDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ramDefinitionList_2E_element & operator = (const GGS_ramDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramDefinitionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_declarationInRamList & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ramDefinitionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_declarationInRamList & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configSettingList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_configSettingList final {
  public: DownEnumerator_configSettingList (const class GGS_configSettingList & inList) ;

  public: ~ DownEnumerator_configSettingList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSettingName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSettingValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configSettingList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_configSettingList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_configSettingList (const DownEnumerator_configSettingList &) = delete ;
  private: DownEnumerator_configSettingList & operator = (const DownEnumerator_configSettingList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_configSettingList final {
  public: UpEnumerator_configSettingList (const class GGS_configSettingList & inList)  ;

  public: ~ UpEnumerator_configSettingList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSettingName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSettingValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configSettingList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_configSettingList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_configSettingList (const UpEnumerator_configSettingList &) = delete ;
  private: UpEnumerator_configSettingList & operator = (const UpEnumerator_configSettingList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @configSettingList list
//--------------------------------------------------------------------------------------------------

class GGS_configSettingList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_configSettingList_2E_element> mArray ;

//--- Default constructor
  public: GGS_configSettingList (void) ;

//--- Destructor
  public: virtual ~ GGS_configSettingList (void) = default ;

//--- Copy
  public: GGS_configSettingList (const GGS_configSettingList &) = default ;
  public: GGS_configSettingList & operator = (const GGS_configSettingList &) = default ;

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
  public : inline GenericArray <GGS_configSettingList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_configSettingList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_configSettingList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSettingName,
                                                 const class GGS_lstring & in_mSettingValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configSettingList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configSettingList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configSettingList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_configSettingList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_configSettingList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_configSettingList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_configSettingList add_operation (const GGS_configSettingList & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSettingNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSettingValueAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSettingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSettingValueAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configSettingList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configSettingList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configSettingList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_configSettingList ;
  friend class DownEnumerator_configSettingList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configSettingList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configSettingList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_configSettingList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSettingName ;
  public: inline GGS_lstring readProperty_mSettingName (void) const {
    return mProperty_mSettingName ;
  }

  public: GGS_lstring mProperty_mSettingValue ;
  public: inline GGS_lstring readProperty_mSettingValue (void) const {
    return mProperty_mSettingValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configSettingList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSettingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingName = inValue ;
  }

  public: inline void setter_setMSettingValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configSettingList_2E_element (const GGS_lstring & in_mSettingName,
                                            const GGS_lstring & in_mSettingValue) ;

//--------------------------------- Copy constructor
  public: GGS_configSettingList_2E_element (const GGS_configSettingList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_configSettingList_2E_element & operator = (const GGS_configSettingList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configSettingList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configSettingList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configSettingList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configSettingList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_configDefinitionList final {
  public: DownEnumerator_configDefinitionList (const class GGS_configDefinitionList & inList) ;

  public: ~ DownEnumerator_configDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mDefinitionLocation (LOCATION_ARGS) const ;
  public: class GGS_configSettingList current_mSettingList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_configDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_configDefinitionList (const DownEnumerator_configDefinitionList &) = delete ;
  private: DownEnumerator_configDefinitionList & operator = (const DownEnumerator_configDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_configDefinitionList final {
  public: UpEnumerator_configDefinitionList (const class GGS_configDefinitionList & inList)  ;

  public: ~ UpEnumerator_configDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mDefinitionLocation (LOCATION_ARGS) const ;
  public: class GGS_configSettingList current_mSettingList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_configDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_configDefinitionList (const UpEnumerator_configDefinitionList &) = delete ;
  private: UpEnumerator_configDefinitionList & operator = (const UpEnumerator_configDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @configDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_configDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_configDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_configDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_configDefinitionList (void) = default ;

//--- Copy
  public: GGS_configDefinitionList (const GGS_configDefinitionList &) = default ;
  public: GGS_configDefinitionList & operator = (const GGS_configDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_configDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_configDefinitionList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_configDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mDefinitionLocation,
                                                 const class GGS_configSettingList & in_mSettingList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configDefinitionList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configDefinitionList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_configDefinitionList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                          const class GGS_configSettingList & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_configDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_location & inOperand0,
                                                    const class GGS_configSettingList & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_configDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_configDefinitionList add_operation (const GGS_configDefinitionList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               class GGS_configSettingList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_configSettingList constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 class GGS_configSettingList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                class GGS_configSettingList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_configSettingList & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefinitionLocationAtIndex (class GGS_location constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSettingListAtIndex (class GGS_configSettingList constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              class GGS_configSettingList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             class GGS_configSettingList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mDefinitionLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configSettingList getter_mSettingListAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_configDefinitionList ;
  friend class DownEnumerator_configDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_configDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mDefinitionLocation ;
  public: inline GGS_location readProperty_mDefinitionLocation (void) const {
    return mProperty_mDefinitionLocation ;
  }

  public: GGS_configSettingList mProperty_mSettingList ;
  public: inline GGS_configSettingList readProperty_mSettingList (void) const {
    return mProperty_mSettingList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDefinitionLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionLocation = inValue ;
  }

  public: inline void setter_setMSettingList (const GGS_configSettingList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configDefinitionList_2E_element (const GGS_location & in_mDefinitionLocation,
                                               const GGS_configSettingList & in_mSettingList) ;

//--------------------------------- Copy constructor
  public: GGS_configDefinitionList_2E_element (const GGS_configDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_configDefinitionList_2E_element & operator = (const GGS_configDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configDefinitionList_2E_element init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_configSettingList & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configDefinitionList_2E_element class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_configSettingList & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_immediatExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatExpression_2E_weak (const class GGS_immediatExpression & inSource) ;

  public: GGS_immediatExpression_2E_weak & operator = (const class GGS_immediatExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatExpression_2E_weak init_nil (void) {
    GGS_immediatExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatExpression bang_immediatExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatExpression unwrappedValue (void) const ;

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
  public: static GGS_immediatExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatExpressionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_immediatExpressionList final {
  public: DownEnumerator_immediatExpressionList (const class GGS_immediatExpressionList & inList) ;

  public: ~ DownEnumerator_immediatExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_immediatExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_immediatExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_immediatExpressionList (const DownEnumerator_immediatExpressionList &) = delete ;
  private: DownEnumerator_immediatExpressionList & operator = (const DownEnumerator_immediatExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_immediatExpressionList final {
  public: UpEnumerator_immediatExpressionList (const class GGS_immediatExpressionList & inList)  ;

  public: ~ UpEnumerator_immediatExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_immediatExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_immediatExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_immediatExpressionList (const UpEnumerator_immediatExpressionList &) = delete ;
  private: UpEnumerator_immediatExpressionList & operator = (const UpEnumerator_immediatExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @immediatExpressionList list
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpressionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_immediatExpressionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_immediatExpressionList (void) ;

//--- Destructor
  public: virtual ~ GGS_immediatExpressionList (void) = default ;

//--- Copy
  public: GGS_immediatExpressionList (const GGS_immediatExpressionList &) = default ;
  public: GGS_immediatExpressionList & operator = (const GGS_immediatExpressionList &) = default ;

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
  public : inline GenericArray <GGS_immediatExpressionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_immediatExpressionList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_immediatExpressionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_immediatExpression & in_mExpression,
                                                 const class GGS_location & in_mErrorLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatExpressionList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatExpressionList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatExpressionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_immediatExpressionList class_func_listWithValue (const class GGS_immediatExpression & inOperand0,
                                                                            const class GGS_location & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_immediatExpressionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_immediatExpression & inOperand0,
                                                    const class GGS_location & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_immediatExpressionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_immediatExpressionList add_operation (const GGS_immediatExpressionList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_immediatExpression constinArgument0,
                                               class GGS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_immediatExpression constinArgument0,
                                                      class GGS_location constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_immediatExpression & outArgument0,
                                                 class GGS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_immediatExpression & outArgument0,
                                                class GGS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_immediatExpression & outArgument0,
                                                      class GGS_location & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GGS_location constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_immediatExpression constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_immediatExpression & outArgument0,
                                              class GGS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_immediatExpression & outArgument0,
                                             class GGS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mErrorLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpression getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_immediatExpressionList ;
  friend class DownEnumerator_immediatExpressionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpressionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatExpressionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpressionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_immediatExpression mProperty_mExpression ;
  public: inline GGS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mErrorLocation ;
  public: inline GGS_location readProperty_mErrorLocation (void) const {
    return mProperty_mErrorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_immediatExpressionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_immediatExpressionList_2E_element (const GGS_immediatExpression & in_mExpression,
                                                 const GGS_location & in_mErrorLocation) ;

//--------------------------------- Copy constructor
  public: GGS_immediatExpressionList_2E_element (const GGS_immediatExpressionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_immediatExpressionList_2E_element & operator = (const GGS_immediatExpressionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatExpressionList_2E_element init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatExpressionList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatExpressionList_2E_element class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                             const class GGS_location & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpressionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatInteger reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatInteger : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatInteger (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatInteger (const class cPtr_immediatInteger * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatInteger init_21_ (const class GGS_luint & inOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatInteger extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatInteger class_func_new (const class GGS_luint & inOperand0,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatInteger & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatInteger ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatInteger class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatInteger : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatInteger_init_21_ (const class GGS_luint & inOperand0,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mValue ;


//--- Default constructor
  public: cPtr_immediatInteger (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatInteger (const GGS_luint & in_mValue,
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
// Phase 1: @immediatInteger_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatInteger_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatInteger_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatInteger_2E_weak (const class GGS_immediatInteger & inSource) ;

  public: GGS_immediatInteger_2E_weak & operator = (const class GGS_immediatInteger & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatInteger_2E_weak init_nil (void) {
    GGS_immediatInteger_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatInteger bang_immediatInteger_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatInteger unwrappedValue (void) const ;

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
  public: static GGS_immediatInteger_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatInteger_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatInteger_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatInteger_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatRegister reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatRegister : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatRegister (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatRegister (const class cPtr_immediatRegister * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegister (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatRegister init_21_ (const class GGS_registerExpression & inOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatRegister extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatRegister class_func_new (const class GGS_registerExpression & inOperand0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRegister & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRegister ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatRegister class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatRegister : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatRegister_init_21_ (const class GGS_registerExpression & inOperand0,
                                          Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegister ;


//--- Default constructor
  public: cPtr_immediatRegister (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatRegister (const GGS_registerExpression & in_mRegister,
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
// Phase 1: @immediatRegister_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatRegister_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatRegister_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatRegister_2E_weak (const class GGS_immediatRegister & inSource) ;

  public: GGS_immediatRegister_2E_weak & operator = (const class GGS_immediatRegister & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatRegister_2E_weak init_nil (void) {
    GGS_immediatRegister_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatRegister bang_immediatRegister_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatRegister unwrappedValue (void) const ;

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
  public: static GGS_immediatRegister_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatRegister_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRegister_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRegister_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatAdd reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatAdd : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatAdd (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatAdd (const class cPtr_immediatAdd * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatAdd init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatAdd extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatAdd class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAdd & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAdd ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatAdd class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatAdd : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatAdd_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatAdd (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatAdd (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatAdd_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatAdd_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatAdd_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatAdd_2E_weak (const class GGS_immediatAdd & inSource) ;

  public: GGS_immediatAdd_2E_weak & operator = (const class GGS_immediatAdd & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatAdd_2E_weak init_nil (void) {
    GGS_immediatAdd_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatAdd bang_immediatAdd_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatAdd unwrappedValue (void) const ;

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
  public: static GGS_immediatAdd_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatAdd_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAdd_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAdd_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatSub reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatSub : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatSub (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatSub (const class cPtr_immediatSub * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSub init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSub extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSub class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSub & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSub ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatSub class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatSub : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatSub_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatSub (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatSub (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatSub_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatSub_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatSub_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatSub_2E_weak (const class GGS_immediatSub & inSource) ;

  public: GGS_immediatSub_2E_weak & operator = (const class GGS_immediatSub & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatSub_2E_weak init_nil (void) {
    GGS_immediatSub_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatSub bang_immediatSub_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatSub unwrappedValue (void) const ;

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
  public: static GGS_immediatSub_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSub_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSub_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSub_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatMul reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatMul : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatMul (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatMul (const class cPtr_immediatMul * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatMul init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatMul extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatMul class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMul & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMul ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatMul class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatMul : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatMul_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatMul (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatMul (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatMul_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatMul_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatMul_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatMul_2E_weak (const class GGS_immediatMul & inSource) ;

  public: GGS_immediatMul_2E_weak & operator = (const class GGS_immediatMul & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatMul_2E_weak init_nil (void) {
    GGS_immediatMul_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatMul bang_immediatMul_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatMul unwrappedValue (void) const ;

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
  public: static GGS_immediatMul_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatMul_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMul_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMul_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatDiv reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatDiv : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatDiv (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatDiv (const class cPtr_immediatDiv * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatDiv init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatDiv extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatDiv class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatDiv & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatDiv ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatDiv class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatDiv : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatDiv_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatDiv (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatDiv (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatDiv_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatDiv_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatDiv_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatDiv_2E_weak (const class GGS_immediatDiv & inSource) ;

  public: GGS_immediatDiv_2E_weak & operator = (const class GGS_immediatDiv & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatDiv_2E_weak init_nil (void) {
    GGS_immediatDiv_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatDiv bang_immediatDiv_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatDiv unwrappedValue (void) const ;

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
  public: static GGS_immediatDiv_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatDiv_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatDiv_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatDiv_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatMod reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatMod : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatMod (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatMod (const class cPtr_immediatMod * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatMod init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatMod extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatMod class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMod & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMod ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatMod class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatMod : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatMod_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatMod (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatMod (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatMod_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatMod_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatMod_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatMod_2E_weak (const class GGS_immediatMod & inSource) ;

  public: GGS_immediatMod_2E_weak & operator = (const class GGS_immediatMod & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatMod_2E_weak init_nil (void) {
    GGS_immediatMod_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatMod bang_immediatMod_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatMod unwrappedValue (void) const ;

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
  public: static GGS_immediatMod_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatMod_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMod_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMod_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatOr reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatOr : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatOr (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatOr (const class cPtr_immediatOr * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatOr init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                              const class GGS_immediatExpression & inOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatOr extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatOr class_func_new (const class GGS_immediatExpression & inOperand0,
                                                      const class GGS_immediatExpression & inOperand1,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatOr & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatOr ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatOr class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatOr : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatOr_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                        const class GGS_immediatExpression & inOperand1,
                                        Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatOr (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatOr (const GGS_immediatExpression & in_mLeftExpression,
                           const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatOr_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatOr_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatOr_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatOr_2E_weak (const class GGS_immediatOr & inSource) ;

  public: GGS_immediatOr_2E_weak & operator = (const class GGS_immediatOr & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatOr_2E_weak init_nil (void) {
    GGS_immediatOr_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatOr bang_immediatOr_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatOr unwrappedValue (void) const ;

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
  public: static GGS_immediatOr_2E_weak extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatOr_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatOr_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatOr_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatAnd reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatAnd : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatAnd (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatAnd (const class cPtr_immediatAnd * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatAnd init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatAnd extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatAnd class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAnd & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAnd ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatAnd class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatAnd : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatAnd_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatAnd (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatAnd (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatAnd_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatAnd_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatAnd_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatAnd_2E_weak (const class GGS_immediatAnd & inSource) ;

  public: GGS_immediatAnd_2E_weak & operator = (const class GGS_immediatAnd & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatAnd_2E_weak init_nil (void) {
    GGS_immediatAnd_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatAnd bang_immediatAnd_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatAnd unwrappedValue (void) const ;

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
  public: static GGS_immediatAnd_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatAnd_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAnd_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAnd_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatXor reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatXor : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatXor (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatXor (const class cPtr_immediatXor * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatXor init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatXor extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatXor class_func_new (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatXor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatXor ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatXor class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatXor : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatXor_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatXor (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatXor (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatXor_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatXor_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatXor_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatXor_2E_weak (const class GGS_immediatXor & inSource) ;

  public: GGS_immediatXor_2E_weak & operator = (const class GGS_immediatXor & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatXor_2E_weak init_nil (void) {
    GGS_immediatXor_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatXor bang_immediatXor_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatXor unwrappedValue (void) const ;

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
  public: static GGS_immediatXor_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatXor_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatXor_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatXor_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatLeftShift reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLeftShift : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatLeftShift (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatLeftShift (const class cPtr_immediatLeftShift * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatLeftShift init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatLeftShift extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLeftShift class_func_new (const class GGS_immediatExpression & inOperand0,
                                                             const class GGS_immediatExpression & inOperand1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLeftShift & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLeftShift ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatLeftShift class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatLeftShift : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatLeftShift_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatLeftShift (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatLeftShift (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatLeftShift_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLeftShift_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatLeftShift_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatLeftShift_2E_weak (const class GGS_immediatLeftShift & inSource) ;

  public: GGS_immediatLeftShift_2E_weak & operator = (const class GGS_immediatLeftShift & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatLeftShift_2E_weak init_nil (void) {
    GGS_immediatLeftShift_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatLeftShift bang_immediatLeftShift_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatLeftShift unwrappedValue (void) const ;

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
  public: static GGS_immediatLeftShift_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLeftShift_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLeftShift_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLeftShift_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatRightShift reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatRightShift : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatRightShift (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatRightShift (const class cPtr_immediatRightShift * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatRightShift init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                      const class GGS_immediatExpression & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatRightShift extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatRightShift class_func_new (const class GGS_immediatExpression & inOperand0,
                                                              const class GGS_immediatExpression & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRightShift & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRightShift ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatRightShift class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatRightShift : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatRightShift_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                const class GGS_immediatExpression & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatRightShift (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatRightShift (const GGS_immediatExpression & in_mLeftExpression,
                                   const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatRightShift_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatRightShift_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatRightShift_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatRightShift_2E_weak (const class GGS_immediatRightShift & inSource) ;

  public: GGS_immediatRightShift_2E_weak & operator = (const class GGS_immediatRightShift & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatRightShift_2E_weak init_nil (void) {
    GGS_immediatRightShift_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatRightShift bang_immediatRightShift_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatRightShift unwrappedValue (void) const ;

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
  public: static GGS_immediatRightShift_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatRightShift_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRightShift_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRightShift_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatEqualTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatEqualTest (const class cPtr_immediatEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatEqualTest extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatEqualTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                             const class GGS_immediatExpression & inOperand1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatEqualTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatEqualTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatEqualTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatEqualTest_2E_weak (const class GGS_immediatEqualTest & inSource) ;

  public: GGS_immediatEqualTest_2E_weak & operator = (const class GGS_immediatEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatEqualTest_2E_weak init_nil (void) {
    GGS_immediatEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatEqualTest bang_immediatEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatEqualTest unwrappedValue (void) const ;

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
  public: static GGS_immediatEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatNotEqualTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatNotEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatNotEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatNotEqualTest (const class cPtr_immediatNotEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatNotEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                        const class GGS_immediatExpression & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatNotEqualTest extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatNotEqualTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                const class GGS_immediatExpression & inOperand1,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNotEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNotEqualTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatNotEqualTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatNotEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatNotEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                  const class GGS_immediatExpression & inOperand1,
                                                  Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatNotEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatNotEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                     const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatNotEqualTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatNotEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatNotEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatNotEqualTest_2E_weak (const class GGS_immediatNotEqualTest & inSource) ;

  public: GGS_immediatNotEqualTest_2E_weak & operator = (const class GGS_immediatNotEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatNotEqualTest_2E_weak init_nil (void) {
    GGS_immediatNotEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatNotEqualTest bang_immediatNotEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatNotEqualTest unwrappedValue (void) const ;

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
  public: static GGS_immediatNotEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatNotEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNotEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNotEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatGreaterTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatGreaterTest (const class cPtr_immediatGreaterTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatGreaterTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatGreaterTest extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatGreaterTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                               const class GGS_immediatExpression & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatGreaterTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatGreaterTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatGreaterTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                 const class GGS_immediatExpression & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatGreaterTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatGreaterTest (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatGreaterTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatGreaterTest_2E_weak (const class GGS_immediatGreaterTest & inSource) ;

  public: GGS_immediatGreaterTest_2E_weak & operator = (const class GGS_immediatGreaterTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatGreaterTest_2E_weak init_nil (void) {
    GGS_immediatGreaterTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatGreaterTest bang_immediatGreaterTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatGreaterTest unwrappedValue (void) const ;

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
  public: static GGS_immediatGreaterTest_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatGreaterTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatGreaterOrEqualTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterOrEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterOrEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatGreaterOrEqualTest (const class cPtr_immediatGreaterOrEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatGreaterOrEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                              const class GGS_immediatExpression & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatGreaterOrEqualTest extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatGreaterOrEqualTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                      const class GGS_immediatExpression & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterOrEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatGreaterOrEqualTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatGreaterOrEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatGreaterOrEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                        const class GGS_immediatExpression & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatGreaterOrEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatGreaterOrEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                           const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatGreaterOrEqualTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterOrEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterOrEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatGreaterOrEqualTest_2E_weak (const class GGS_immediatGreaterOrEqualTest & inSource) ;

  public: GGS_immediatGreaterOrEqualTest_2E_weak & operator = (const class GGS_immediatGreaterOrEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatGreaterOrEqualTest_2E_weak init_nil (void) {
    GGS_immediatGreaterOrEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatGreaterOrEqualTest bang_immediatGreaterOrEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatGreaterOrEqualTest unwrappedValue (void) const ;

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
  public: static GGS_immediatGreaterOrEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatGreaterOrEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterOrEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatLowerTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatLowerTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatLowerTest (const class cPtr_immediatLowerTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatLowerTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatLowerTest extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLowerTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                             const class GGS_immediatExpression & inOperand1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatLowerTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatLowerTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatLowerTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatLowerTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatLowerTest (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatLowerTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatLowerTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatLowerTest_2E_weak (const class GGS_immediatLowerTest & inSource) ;

  public: GGS_immediatLowerTest_2E_weak & operator = (const class GGS_immediatLowerTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatLowerTest_2E_weak init_nil (void) {
    GGS_immediatLowerTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatLowerTest bang_immediatLowerTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatLowerTest unwrappedValue (void) const ;

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
  public: static GGS_immediatLowerTest_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLowerTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatLowerOrEqualTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerOrEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatLowerOrEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatLowerOrEqualTest (const class cPtr_immediatLowerOrEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatLowerOrEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                            const class GGS_immediatExpression & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatLowerOrEqualTest extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLowerOrEqualTest class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                    const class GGS_immediatExpression & inOperand1,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerOrEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatLowerOrEqualTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatLowerOrEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatLowerOrEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                      const class GGS_immediatExpression & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatLowerOrEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatLowerOrEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                         const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatLowerOrEqualTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerOrEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatLowerOrEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatLowerOrEqualTest_2E_weak (const class GGS_immediatLowerOrEqualTest & inSource) ;

  public: GGS_immediatLowerOrEqualTest_2E_weak & operator = (const class GGS_immediatLowerOrEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatLowerOrEqualTest_2E_weak init_nil (void) {
    GGS_immediatLowerOrEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatLowerOrEqualTest bang_immediatLowerOrEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatLowerOrEqualTest unwrappedValue (void) const ;

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
  public: static GGS_immediatLowerOrEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLowerOrEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerOrEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatNegate reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatNegate : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatNegate (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatNegate (const class cPtr_immediatNegate * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatNegate init_21_ (const class GGS_immediatExpression & inOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatNegate extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatNegate class_func_new (const class GGS_immediatExpression & inOperand0,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNegate & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNegate ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatNegate class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatNegate : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatNegate_init_21_ (const class GGS_immediatExpression & inOperand0,
                                        Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mExpression ;


//--- Default constructor
  public: cPtr_immediatNegate (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatNegate (const GGS_immediatExpression & in_mExpression,
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
// Phase 1: @immediatNegate_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatNegate_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatNegate_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatNegate_2E_weak (const class GGS_immediatNegate & inSource) ;

  public: GGS_immediatNegate_2E_weak & operator = (const class GGS_immediatNegate & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatNegate_2E_weak init_nil (void) {
    GGS_immediatNegate_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatNegate bang_immediatNegate_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatNegate unwrappedValue (void) const ;

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
  public: static GGS_immediatNegate_2E_weak extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatNegate_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNegate_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNegate_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatComplement reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatComplement : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatComplement (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatComplement (const class cPtr_immediatComplement * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatComplement init_21_ (const class GGS_immediatExpression & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatComplement extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatComplement class_func_new (const class GGS_immediatExpression & inOperand0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatComplement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatComplement ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatComplement class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatComplement : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatComplement_init_21_ (const class GGS_immediatExpression & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mExpression ;


//--- Default constructor
  public: cPtr_immediatComplement (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatComplement (const GGS_immediatExpression & in_mExpression,
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
// Phase 1: @immediatComplement_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatComplement_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatComplement_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatComplement_2E_weak (const class GGS_immediatComplement & inSource) ;

  public: GGS_immediatComplement_2E_weak & operator = (const class GGS_immediatComplement & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatComplement_2E_weak init_nil (void) {
    GGS_immediatComplement_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatComplement bang_immediatComplement_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatComplement unwrappedValue (void) const ;

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
  public: static GGS_immediatComplement_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatComplement_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatComplement_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatComplement_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatSliceExpressionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_immediatSliceExpressionList final {
  public: DownEnumerator_immediatSliceExpressionList (const class GGS_immediatSliceExpressionList & inList) ;

  public: ~ DownEnumerator_immediatSliceExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSliceName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_immediatSliceExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_immediatSliceExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_immediatSliceExpressionList (const DownEnumerator_immediatSliceExpressionList &) = delete ;
  private: DownEnumerator_immediatSliceExpressionList & operator = (const DownEnumerator_immediatSliceExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_immediatSliceExpressionList final {
  public: UpEnumerator_immediatSliceExpressionList (const class GGS_immediatSliceExpressionList & inList)  ;

  public: ~ UpEnumerator_immediatSliceExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSliceName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_immediatSliceExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_immediatSliceExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_immediatSliceExpressionList (const UpEnumerator_immediatSliceExpressionList &) = delete ;
  private: UpEnumerator_immediatSliceExpressionList & operator = (const UpEnumerator_immediatSliceExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @immediatSliceExpressionList list
//--------------------------------------------------------------------------------------------------

class GGS_immediatSliceExpressionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_immediatSliceExpressionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_immediatSliceExpressionList (void) ;

//--- Destructor
  public: virtual ~ GGS_immediatSliceExpressionList (void) = default ;

//--- Copy
  public: GGS_immediatSliceExpressionList (const GGS_immediatSliceExpressionList &) = default ;
  public: GGS_immediatSliceExpressionList & operator = (const GGS_immediatSliceExpressionList &) = default ;

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
  public : inline GenericArray <GGS_immediatSliceExpressionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_immediatSliceExpressionList subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_immediatSliceExpressionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSliceName,
                                                 const class GGS_immediatExpression & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSliceExpressionList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSliceExpressionList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSliceExpressionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_immediatSliceExpressionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_immediatExpression & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_immediatSliceExpressionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_immediatExpression & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_immediatSliceExpressionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_immediatSliceExpressionList add_operation (const GGS_immediatSliceExpressionList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_immediatExpression constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_immediatExpression constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_immediatExpression & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_immediatExpression & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_immediatExpression & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_immediatExpression constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_immediatExpression & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_immediatExpression & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpression getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSliceNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatSliceExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatSliceExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatSliceExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_immediatSliceExpressionList ;
  friend class DownEnumerator_immediatSliceExpressionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatSliceExpressionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_immediatSliceExpressionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSliceName ;
  public: inline GGS_lstring readProperty_mSliceName (void) const {
    return mProperty_mSliceName ;
  }

  public: GGS_immediatExpression mProperty_mExpression ;
  public: inline GGS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_immediatSliceExpressionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceName = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_immediatSliceExpressionList_2E_element (const GGS_lstring & in_mSliceName,
                                                      const GGS_immediatExpression & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_immediatSliceExpressionList_2E_element (const GGS_immediatSliceExpressionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_immediatSliceExpressionList_2E_element & operator = (const GGS_immediatSliceExpressionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSliceExpressionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_immediatExpression & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSliceExpressionList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSliceExpressionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_immediatExpression & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatSlice reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatSlice : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatSlice (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatSlice (const class cPtr_immediatSlice * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRegisterName (void) const ;

  public: class GGS_immediatSliceExpressionList readProperty_mSliceExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSlice init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_immediatSliceExpressionList & inOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSlice extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSlice class_func_new (const class GGS_lstring & inOperand0,
                                                         const class GGS_immediatSliceExpressionList & inOperand1,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSlice & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSlice ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatSlice class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatSlice : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatSlice_init_21__21_ (const class GGS_lstring & inOperand0,
                                           const class GGS_immediatSliceExpressionList & inOperand1,
                                           Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRegisterName ;
  public: GGS_immediatSliceExpressionList mProperty_mSliceExpressionList ;


//--- Default constructor
  public: cPtr_immediatSlice (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatSlice (const GGS_lstring & in_mRegisterName,
                              const GGS_immediatSliceExpressionList & in_mSliceExpressionList,
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
// Phase 1: @immediatSlice_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatSlice_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatSlice_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatSlice_2E_weak (const class GGS_immediatSlice & inSource) ;

  public: GGS_immediatSlice_2E_weak & operator = (const class GGS_immediatSlice & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatSlice_2E_weak init_nil (void) {
    GGS_immediatSlice_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatSlice bang_immediatSlice_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatSlice unwrappedValue (void) const ;

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
  public: static GGS_immediatSlice_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSlice_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSlice_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSlice_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_constantDefinitionList final {
  public: DownEnumerator_constantDefinitionList (const class GGS_constantDefinitionList & inList) ;

  public: ~ DownEnumerator_constantDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_constantDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_constantDefinitionList (const DownEnumerator_constantDefinitionList &) = delete ;
  private: DownEnumerator_constantDefinitionList & operator = (const DownEnumerator_constantDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constantDefinitionList final {
  public: UpEnumerator_constantDefinitionList (const class GGS_constantDefinitionList & inList)  ;

  public: ~ UpEnumerator_constantDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_constantDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_constantDefinitionList (const UpEnumerator_constantDefinitionList &) = delete ;
  private: UpEnumerator_constantDefinitionList & operator = (const UpEnumerator_constantDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @constantDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_constantDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_constantDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_constantDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_constantDefinitionList (void) = default ;

//--- Copy
  public: GGS_constantDefinitionList (const GGS_constantDefinitionList &) = default ;
  public: GGS_constantDefinitionList & operator = (const GGS_constantDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_constantDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_constantDefinitionList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_constantDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mConstantName,
                                                 const class GGS_immediatExpression & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantDefinitionList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantDefinitionList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_constantDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_immediatExpression & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_constantDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_immediatExpression & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_constantDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_constantDefinitionList add_operation (const GGS_constantDefinitionList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_immediatExpression constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_immediatExpression constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_immediatExpression & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_immediatExpression & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_immediatExpression & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_immediatExpression constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_immediatExpression & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_immediatExpression & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mConstantNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpression getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_constantDefinitionList ;
  friend class DownEnumerator_constantDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_constantDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: inline GGS_lstring readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

  public: GGS_immediatExpression mProperty_mExpression ;
  public: inline GGS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constantDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantDefinitionList_2E_element (const GGS_lstring & in_mConstantName,
                                                 const GGS_immediatExpression & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_constantDefinitionList_2E_element (const GGS_constantDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constantDefinitionList_2E_element & operator = (const GGS_constantDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantDefinitionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_immediatExpression & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantDefinitionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_immediatExpression & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualConfigurationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_actualConfigurationMap final {

  public: DownEnumerator_actualConfigurationMap (const class GGS_actualConfigurationMap & inMap) ;

  public: ~ DownEnumerator_actualConfigurationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRegisterAddress (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRegisterValue (LOCATION_ARGS) const ;

  public: class GGS_actualConfigurationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_actualConfigurationMap (const DownEnumerator_actualConfigurationMap &) = delete ;
  private: DownEnumerator_actualConfigurationMap & operator = (const DownEnumerator_actualConfigurationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_actualConfigurationMap final {
  public: UpEnumerator_actualConfigurationMap (const class GGS_actualConfigurationMap & inMap)  ;

  public: ~ UpEnumerator_actualConfigurationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRegisterAddress (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRegisterValue (LOCATION_ARGS) const ;
  public: class GGS_actualConfigurationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_actualConfigurationMap (const UpEnumerator_actualConfigurationMap &) = delete ;
  private: UpEnumerator_actualConfigurationMap & operator = (const UpEnumerator_actualConfigurationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_actualConfigurationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_actualConfigurationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_actualConfigurationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_actualConfigurationMap (void) ;

//--- Handle copy
  public: GGS_actualConfigurationMap (const GGS_actualConfigurationMap & inSource) ;
  public: GGS_actualConfigurationMap & operator = (const GGS_actualConfigurationMap & inSource) ;

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
  protected: void performInsert (const class GGS_actualConfigurationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualConfigurationMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualConfigurationMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualConfigurationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_actualConfigurationMap class_func_mapWithMapToOverride (const class GGS_actualConfigurationMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterAddressForKey (class GGS_uint constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterValueForKey (class GGS_uint constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
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

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mRegisterAddressForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mRegisterValueForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualConfigurationMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_actualConfigurationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_actualConfigurationMap ;
  friend class DownEnumerator_actualConfigurationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualConfigurationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_actualConfigurationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mRegisterAddress ;
  public: inline GGS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

  public: GGS_uint mProperty_mRegisterValue ;
  public: inline GGS_uint readProperty_mRegisterValue (void) const {
    return mProperty_mRegisterValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_actualConfigurationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

  public: inline void setter_setMRegisterValue (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actualConfigurationMap_2E_element (const GGS_lstring & in_lkey,
                                                 const GGS_uint & in_mRegisterAddress,
                                                 const GGS_uint & in_mRegisterValue) ;

//--------------------------------- Copy constructor
  public: GGS_actualConfigurationMap_2E_element (const GGS_actualConfigurationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_actualConfigurationMap_2E_element & operator = (const GGS_actualConfigurationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualConfigurationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_uint & inOperand1,
                                                                         const class GGS_uint & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualConfigurationMap_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualConfigurationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_uint & inOperand1,
                                                                             const class GGS_uint & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: actualConfigurationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_actualConfigurationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_actualConfigurationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_actualConfigurationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_actualConfigurationMap_2E_element_3F_ (const GGS_actualConfigurationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_actualConfigurationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_actualConfigurationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_actualConfigurationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitNumberExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_bitNumberExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberExpression (const class cPtr_bitNumberExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberExpression init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberExpression extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitNumberExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberExpression_init (Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_bitNumberExpression (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitNumberExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_bitNumberExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberExpression_2E_weak (const class GGS_bitNumberExpression & inSource) ;

  public: GGS_bitNumberExpression_2E_weak & operator = (const class GGS_bitNumberExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberExpression_2E_weak init_nil (void) {
    GGS_bitNumberExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberExpression bang_bitNumberExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitNumberExpression unwrappedValue (void) const ;

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
  public: static GGS_bitNumberExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitNumberLiteralExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralExpression : public GGS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberLiteralExpression (const class cPtr_bitNumberLiteralExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mBitNumberLiteralExpression (void) const ;

  public: class GGS_location readProperty_mEndOfExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberLiteralExpression init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberLiteralExpression extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLiteralExpression class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitNumberLiteralExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberLiteralExpression : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberLiteralExpression_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                        const class GGS_location & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mBitNumberLiteralExpression ;
  public: GGS_location mProperty_mEndOfExpression ;


//--- Default constructor
  public: cPtr_bitNumberLiteralExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitNumberLiteralExpression (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
                                           const GGS_location & in_mEndOfExpression,
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
// Phase 1: @bitNumberLiteralExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralExpression_2E_weak : public GGS_bitNumberExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberLiteralExpression_2E_weak (const class GGS_bitNumberLiteralExpression & inSource) ;

  public: GGS_bitNumberLiteralExpression_2E_weak & operator = (const class GGS_bitNumberLiteralExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberLiteralExpression_2E_weak init_nil (void) {
    GGS_bitNumberLiteralExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberLiteralExpression bang_bitNumberLiteralExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitNumberLiteralExpression unwrappedValue (void) const ;

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
  public: static GGS_bitNumberLiteralExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLiteralExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitNumberLiteralValue reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralValue : public GGS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberLiteralValue (const class cPtr_bitNumberLiteralValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mBitNumberLiteralValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberLiteralValue init_21_ (const class GGS_luint & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberLiteralValue extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLiteralValue class_func_new (const class GGS_luint & inOperand0,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitNumberLiteralValue class
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberLiteralValue : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberLiteralValue_init_21_ (const class GGS_luint & inOperand0,
                                               Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mBitNumberLiteralValue ;


//--- Default constructor
  public: cPtr_bitNumberLiteralValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitNumberLiteralValue (const GGS_luint & in_mBitNumberLiteralValue,
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
// Phase 1: @bitNumberLiteralValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralValue_2E_weak : public GGS_bitNumberExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberLiteralValue_2E_weak (const class GGS_bitNumberLiteralValue & inSource) ;

  public: GGS_bitNumberLiteralValue_2E_weak & operator = (const class GGS_bitNumberLiteralValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberLiteralValue_2E_weak init_nil (void) {
    GGS_bitNumberLiteralValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberLiteralValue bang_bitNumberLiteralValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitNumberLiteralValue unwrappedValue (void) const ;

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
  public: static GGS_bitNumberLiteralValue_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLiteralValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitNumberLabelValue reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLabelValue : public GGS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GGS_bitNumberLabelValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberLabelValue (const class cPtr_bitNumberLabelValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mBitNumberLabelValue (void) const ;

  public: class GGS_luint readProperty_mBitNumberIndexValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberLabelValue init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_luint & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberLabelValue extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLabelValue class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_luint & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLabelValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLabelValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitNumberLabelValue class
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberLabelValue : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberLabelValue_init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_luint & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mBitNumberLabelValue ;
  public: GGS_luint mProperty_mBitNumberIndexValue ;


//--- Default constructor
  public: cPtr_bitNumberLabelValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitNumberLabelValue (const GGS_lstring & in_mBitNumberLabelValue,
                                    const GGS_luint & in_mBitNumberIndexValue,
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
// Phase 1: @bitNumberLabelValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLabelValue_2E_weak : public GGS_bitNumberExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitNumberLabelValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberLabelValue_2E_weak (const class GGS_bitNumberLabelValue & inSource) ;

  public: GGS_bitNumberLabelValue_2E_weak & operator = (const class GGS_bitNumberLabelValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberLabelValue_2E_weak init_nil (void) {
    GGS_bitNumberLabelValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberLabelValue bang_bitNumberLabelValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitNumberLabelValue unwrappedValue (void) const ;

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
  public: static GGS_bitNumberLabelValue_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLabelValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLabelValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLabelValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @labelMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_labelMap final {

  public: DownEnumerator_labelMap (const class GGS_labelMap & inMap) ;

  public: ~ DownEnumerator_labelMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_labelMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_labelMap (const DownEnumerator_labelMap &) = delete ;
  private: DownEnumerator_labelMap & operator = (const DownEnumerator_labelMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_labelMap final {
  public: UpEnumerator_labelMap (const class GGS_labelMap & inMap)  ;

  public: ~ UpEnumerator_labelMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_labelMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_labelMap (const UpEnumerator_labelMap &) = delete ;
  private: UpEnumerator_labelMap & operator = (const UpEnumerator_labelMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_labelMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_labelMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_labelMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_labelMap (void) ;

//--- Handle copy
  public: GGS_labelMap (const GGS_labelMap & inSource) ;
  public: GGS_labelMap & operator = (const GGS_labelMap & inSource) ;

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
  protected: void performInsert (const class GGS_labelMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_labelMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_labelMap extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_labelMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_labelMap class_func_mapWithMapToOverride (const class GGS_labelMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
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

  public: VIRTUAL_IN_DEBUG class GGS_labelMap getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_labelMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_labelMap ;
  friend class DownEnumerator_labelMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @labelMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_labelMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_labelMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_labelMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_labelMap_2E_element (const GGS_labelMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_labelMap_2E_element & operator = (const GGS_labelMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_labelMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_labelMap_2E_element extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_labelMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: labelMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_labelMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_labelMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_labelMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_labelMap_2E_element_3F_ (const GGS_labelMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_labelMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_labelMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_labelMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE piccolo_5F_lexique
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_piccolo_5F_lexique : public cToken {
  public: utf32 mLexicalAttribute_charValue ;
  public: String mLexicalAttribute_identifierString ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_piccolo_5F_lexique (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_piccolo_5F_lexique : public Lexique {
//--- Constructors
  public: Lexique_piccolo_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_piccolo_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_piccolo_5F_lexique (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_label = 2 ;
  public: static const int32_t kToken_integer = 3 ;
  public: static const int32_t kToken_literal_5F_char = 4 ;
  public: static const int32_t kToken_literal_5F_string = 5 ;
  public: static const int32_t kToken_comment = 6 ;
  public: static const int32_t kToken_commentMark = 7 ;
  public: static const int32_t kToken_bank = 8 ;
  public: static const int32_t kToken_banksave = 9 ;
  public: static const int32_t kToken_banksel = 10 ;
  public: static const int32_t kToken_baseline = 11 ;
  public: static const int32_t kToken_block = 12 ;
  public: static const int32_t kToken_bootloader = 13 ;
  public: static const int32_t kToken_byte = 14 ;
  public: static const int32_t kToken_case = 15 ;
  public: static const int32_t kToken_checkbank = 16 ;
  public: static const int32_t kToken_checknobank = 17 ;
  public: static const int32_t kToken_checkpic = 18 ;
  public: static const int32_t kToken_computed = 19 ;
  public: static const int32_t kToken_configuration = 20 ;
  public: static const int32_t kToken_const = 21 ;
  public: static const int32_t kToken_contextsave = 22 ;
  public: static const int32_t kToken_data = 23 ;
  public: static const int32_t kToken_data_31__36_ = 24 ;
  public: static const int32_t kToken_data_38_ = 25 ;
  public: static const int32_t kToken_do = 26 ;
  public: static const int32_t kToken_end = 27 ;
  public: static const int32_t kToken_else = 28 ;
  public: static const int32_t kToken_elsif = 29 ;
  public: static const int32_t kToken_ensures = 30 ;
  public: static const int32_t kToken_fast = 31 ;
  public: static const int32_t kToken_forever = 32 ;
  public: static const int32_t kToken_if = 33 ;
  public: static const int32_t kToken_implements = 34 ;
  public: static const int32_t kToken_include = 35 ;
  public: static const int32_t kToken_inline = 36 ;
  public: static const int32_t kToken_interrupt = 37 ;
  public: static const int32_t kToken_macro = 38 ;
  public: static const int32_t kToken_midrange = 39 ;
  public: static const int32_t kToken_nobank = 40 ;
  public: static const int32_t kToken_noreturn = 41 ;
  public: static const int32_t kToken_page = 42 ;
  public: static const int32_t kToken_pic_31__38_ = 43 ;
  public: static const int32_t kToken_preserved = 44 ;
  public: static const int32_t kToken_protected = 45 ;
  public: static const int32_t kToken_private = 46 ;
  public: static const int32_t kToken_ram = 47 ;
  public: static const int32_t kToken_requires = 48 ;
  public: static const int32_t kToken_rom = 49 ;
  public: static const int32_t kToken_routine = 50 ;
  public: static const int32_t kToken_switch = 51 ;
  public: static const int32_t kToken_unused = 52 ;
  public: static const int32_t kToken_uses = 53 ;
  public: static const int32_t kToken_w = 54 ;
  public: static const int32_t kToken_while = 55 ;
  public: static const int32_t kToken_addlw = 56 ;
  public: static const int32_t kToken_addwf = 57 ;
  public: static const int32_t kToken_addwfc = 58 ;
  public: static const int32_t kToken_andlw = 59 ;
  public: static const int32_t kToken_andwf = 60 ;
  public: static const int32_t kToken_bc = 61 ;
  public: static const int32_t kToken_bcf = 62 ;
  public: static const int32_t kToken_bn = 63 ;
  public: static const int32_t kToken_bnc = 64 ;
  public: static const int32_t kToken_bnn = 65 ;
  public: static const int32_t kToken_bov = 66 ;
  public: static const int32_t kToken_bnov = 67 ;
  public: static const int32_t kToken_bnz = 68 ;
  public: static const int32_t kToken_bsf = 69 ;
  public: static const int32_t kToken_bra = 70 ;
  public: static const int32_t kToken_btg = 71 ;
  public: static const int32_t kToken_bz = 72 ;
  public: static const int32_t kToken_call = 73 ;
  public: static const int32_t kToken_clrf = 74 ;
  public: static const int32_t kToken_clrw = 75 ;
  public: static const int32_t kToken_clrwdt = 76 ;
  public: static const int32_t kToken_comf = 77 ;
  public: static const int32_t kToken_daw = 78 ;
  public: static const int32_t kToken_decf = 79 ;
  public: static const int32_t kToken_incf = 80 ;
  public: static const int32_t kToken_iorlw = 81 ;
  public: static const int32_t kToken_iorwf = 82 ;
  public: static const int32_t kToken_fnop = 83 ;
  public: static const int32_t kToken_goto = 84 ;
  public: static const int32_t kToken_jsr = 85 ;
  public: static const int32_t kToken_jump = 86 ;
  public: static const int32_t kToken_lfsr = 87 ;
  public: static const int32_t kToken_ldataptr = 88 ;
  public: static const int32_t kToken_ldata_38_ptr = 89 ;
  public: static const int32_t kToken_ldata_31__36_ptr = 90 ;
  public: static const int32_t kToken_ltblptr = 91 ;
  public: static const int32_t kToken_mnop = 92 ;
  public: static const int32_t kToken_movf = 93 ;
  public: static const int32_t kToken_movff = 94 ;
  public: static const int32_t kToken_movlw = 95 ;
  public: static const int32_t kToken_movwf = 96 ;
  public: static const int32_t kToken_mullw = 97 ;
  public: static const int32_t kToken_mulwf = 98 ;
  public: static const int32_t kToken_negf = 99 ;
  public: static const int32_t kToken_nop = 100 ;
  public: static const int32_t kToken_nopbra = 101 ;
  public: static const int32_t kToken_pop = 102 ;
  public: static const int32_t kToken_option = 103 ;
  public: static const int32_t kToken_push = 104 ;
  public: static const int32_t kToken_rcall = 105 ;
  public: static const int32_t kToken_reset = 106 ;
  public: static const int32_t kToken_retlw = 107 ;
  public: static const int32_t kToken_rlcf = 108 ;
  public: static const int32_t kToken_rlf = 109 ;
  public: static const int32_t kToken_rlncf = 110 ;
  public: static const int32_t kToken_rrcf = 111 ;
  public: static const int32_t kToken_rrf = 112 ;
  public: static const int32_t kToken_rrncf = 113 ;
  public: static const int32_t kToken_setf = 114 ;
  public: static const int32_t kToken_sleep = 115 ;
  public: static const int32_t kToken_subfwb = 116 ;
  public: static const int32_t kToken_sublw = 117 ;
  public: static const int32_t kToken_subwf = 118 ;
  public: static const int32_t kToken_subwfb = 119 ;
  public: static const int32_t kToken_swapf = 120 ;
  public: static const int32_t kToken_tblrd = 121 ;
  public: static const int32_t kToken_tblwt = 122 ;
  public: static const int32_t kToken_tris = 123 ;
  public: static const int32_t kToken_xorlw = 124 ;
  public: static const int32_t kToken_xorwf = 125 ;
  public: static const int32_t kToken__2A_ = 126 ;
  public: static const int32_t kToken__2A__2B_ = 127 ;
  public: static const int32_t kToken__2C_ = 128 ;
  public: static const int32_t kToken__21__3D_ = 129 ;
  public: static const int32_t kToken__3C__3D_ = 130 ;
  public: static const int32_t kToken__3E__3D_ = 131 ;
  public: static const int32_t kToken__2A__2D_ = 132 ;
  public: static const int32_t kToken__2B__2A_ = 133 ;
  public: static const int32_t kToken__3B_ = 134 ;
  public: static const int32_t kToken__3A_ = 135 ;
  public: static const int32_t kToken__3D__3D_ = 136 ;
  public: static const int32_t kToken__3C_ = 137 ;
  public: static const int32_t kToken__3E_ = 138 ;
  public: static const int32_t kToken__5B_ = 139 ;
  public: static const int32_t kToken__5D_ = 140 ;
  public: static const int32_t kToken__2E_ = 141 ;
  public: static const int32_t kToken__21_ = 142 ;
  public: static const int32_t kToken__26_ = 143 ;
  public: static const int32_t kToken__7C_ = 144 ;
  public: static const int32_t kToken__3D_ = 145 ;
  public: static const int32_t kToken__7B_ = 146 ;
  public: static const int32_t kToken__7D_ = 147 ;
  public: static const int32_t kToken__28_ = 148 ;
  public: static const int32_t kToken__29_ = 149 ;
  public: static const int32_t kToken__2F_ = 150 ;
  public: static const int32_t kToken__2D_ = 151 ;
  public: static const int32_t kToken__2B_ = 152 ;
  public: static const int32_t kToken__3F_ = 153 ;
  public: static const int32_t kToken__5E_ = 154 ;
  public: static const int32_t kToken__3C__3C_ = 155 ;
  public: static const int32_t kToken__3E__3E_ = 156 ;
  public: static const int32_t kToken__7E_ = 157 ;
  public: static const int32_t kToken__25_ = 158 ;
  public: static const int32_t kToken__2E__2E__2E_ = 159 ;

//--- Key words table 'controlKeyWordList'
  public: static int32_t search_into_controlKeyWordList (const String & inSearchedString) ;

//--- Key words table 'instructionKeyWordList'
  public: static int32_t search_into_instructionKeyWordList (const String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int32_t search_into_delimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_lchar synthetizedAttribute_charValue (void) const ;
  public: GGS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: utf32 attributeValue_charValue (void) const ;
  public: String attributeValue_identifierString (void) const ;
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- indexing keys
public: static const uint32_t kIndexing_routineDefinition = 0 ;
public: static const uint32_t kIndexing_routineCall = 1 ;
public: static const uint32_t kIndexing_variableDeclaration = 2 ;
public: static const uint32_t kIndexing_variableUse = 3 ;
public: static const uint32_t kIndexing_constantDeclaration = 4 ;

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_piccolo_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 159 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_piccolo_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_ (class GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_ (class GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                    class GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                    class GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                    class GGS_lstringlist & ioArgument3,
                                    class GGS_lstringlist & ioArgument4,
                                    class GGS_ramDefinitionList & ioArgument5,
                                    class GGS_lstringlist & ioArgument6,
                                    class GGS_configDefinitionList & ioArgument7,
                                    class GGS_constantDefinitionList & ioArgument8,
                                    class GGS_checkpicList & ioArgument9,
                                    class GGS_dataList & ioArgument10,
                                    class GGS_bool & ioArgument11,
                                    class GGS_bool & ioArgument12,
                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_ (class GGS_checkpicList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_ (class GGS_dataList & ioArgument0,
                                                  class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_ (class GGS_pic_31__38_InstructionList & outArgument0,
                                                   class GGS_bool & ioArgument1,
                                                   class GGS_bool & ioArgument2,
                                                   class GGS_labelMap & ioArgument3,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_ (class GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       class GGS_bool & ioArgument1,
                                                       class GGS_bool & ioArgument2,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_ (class GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                     class GGS_bool & ioArgument1,
                                                     class GGS_bool & ioArgument2,
                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_ (class GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_ (const class GGS_lstring constinArgument0,
                                                               class GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                               class GGS_bool & ioArgument2,
                                                               class GGS_bool & ioArgument3,
                                                               class GGS_labelMap & ioArgument4,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_ (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                         class GGS_bool & ioArgument1,
                                                         class GGS_bool & ioArgument2,
                                                         class GGS_labelMap & ioArgument3,
                                                         class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_syntax_body_i0_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                       GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                       GGS_lstringlist & ioArgument3,
                                                       GGS_lstringlist & ioArgument4,
                                                       GGS_ramDefinitionList & ioArgument5,
                                                       GGS_lstringlist & ioArgument6,
                                                       GGS_configDefinitionList & ioArgument7,
                                                       GGS_constantDefinitionList & ioArgument8,
                                                       GGS_checkpicList & ioArgument9,
                                                       GGS_dataList & ioArgument10,
                                                       GGS_bool & ioArgument11,
                                                       GGS_bool & ioArgument12,
                                                       Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_body_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_body_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_ (GGS_checkpicList & ioArgument0,
                                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GGS_dataList & ioArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GGS_dataList & ioArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_ (GGS_pic_31__38_InstructionList & outArgument0,
                                                                      GGS_bool & ioArgument1,
                                                                      GGS_bool & ioArgument2,
                                                                      GGS_labelMap & ioArgument3,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                                          GGS_bool & ioArgument1,
                                                                          GGS_bool & ioArgument2,
                                                                          Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                                        GGS_bool & ioArgument1,
                                                                        GGS_bool & ioArgument2,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_ (GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                                             GGS_bool & ioArgument1,
                                                                             GGS_bool & ioArgument2,
                                                                             GGS_labelMap & ioArgument3,
                                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_ (const GGS_lstring constinArgument0,
                                                                                   GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                                                   GGS_bool & ioArgument2,
                                                                                   GGS_bool & ioArgument3,
                                                                                   GGS_labelMap & ioArgument4,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_syntax_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_20 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_21 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_22 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_23 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_24 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_25 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_26 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_27 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_28 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_29 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_30 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_31 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_32 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_33 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_34 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_35 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_36 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_37 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_38 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_39 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_40 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_41 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_42 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_43 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_44 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_45 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_46 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_47 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_48 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_49 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_50 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_51 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_52 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_53 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_54 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_55 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_56 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_57 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_58 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_59 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_60 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_61 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_62 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_63 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_64 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

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
// Phase 1: @pic_31__38_AndCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_AndCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_AndCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_AndCondition (const class cPtr_pic_31__38_AndCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_ConditionExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_pic_31__38_ConditionExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_AndCondition init_21__21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                           const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_AndCondition extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_AndCondition class_func_new (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                   const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_AndCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18AndCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_AndCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_AndCondition_init_21__21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                     const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                     Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_ConditionExpression mProperty_mLeftExpression ;
  public: GGS_pic_31__38_ConditionExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_AndCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_AndCondition (const GGS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                        const GGS_pic_31__38_ConditionExpression & in_mRightExpression,
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
// Phase 1: @pic_31__38_BccInStructuredCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BccInStructuredCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BccInStructuredCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_BccInStructuredCondition (const class cPtr_pic_31__38_BccInStructuredCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mConditionLocation (void) const ;

  public: class GGS_conditional_5F_branch readProperty_mCondition (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_BccInStructuredCondition init_21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_conditional_5F_branch & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_BccInStructuredCondition extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BccInStructuredCondition class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_conditional_5F_branch & inOperand1,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_BccInStructuredCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ;

//--------------------------------------------------------------------------------------------------
//   enum conditional_5F_branch
//--------------------------------------------------------------------------------------------------

class GGS_conditional_5F_branch : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_conditional_5F_branch (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_bz,
    enum_bnz,
    enum_bn,
    enum_bnn,
    enum_bc,
    enum_bnc,
    enum_bov,
    enum_bnov
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
  public: static GGS_conditional_5F_branch extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_conditional_5F_branch class_func_bc (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bn (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bnc (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bnn (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bnov (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bnz (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bov (LOCATION_ARGS) ;

  public: static class GGS_conditional_5F_branch class_func_bz (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_conditional_5F_branch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBn (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBnc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBnn (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBnov (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBnz (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBov (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBz (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_conditional_5F_branch ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18BccInStructuredCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_BccInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_BccInStructuredCondition_init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_conditional_5F_branch & inOperand1,
                                                                 Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mConditionLocation ;
  public: GGS_conditional_5F_branch mProperty_mCondition ;


//--- Default constructor
  public: cPtr_pic_31__38_BccInStructuredCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_BccInStructuredCondition (const GGS_location & in_mConditionLocation,
                                                    const GGS_conditional_5F_branch & in_mCondition,
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
// Phase 1: @pic_31__38_BitTestInStructuredCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BitTestInStructuredCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BitTestInStructuredCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_BitTestInStructuredCondition (const class cPtr_pic_31__38_BitTestInStructuredCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_BitTestInStructuredCondition init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                           const class GGS_bitNumberExpression & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_BitTestInStructuredCondition extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BitTestInStructuredCondition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                                   const class GGS_bitNumberExpression & inOperand1,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_BitTestInStructuredCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18BitTestInStructuredCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_BitTestInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_BitTestInStructuredCondition_init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                     const class GGS_bitNumberExpression & inOperand1,
                                                                     Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_BitTestInStructuredCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_BitTestInStructuredCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                        const GGS_bitNumberExpression & in_mBitNumber,
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
// Phase 1: @pic_31__38_IncDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_IncDecRegisterInCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_IncDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_IncDecRegisterInCondition (const class cPtr_pic_31__38_IncDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_IncDecRegisterInCondition init_21__21__21__21_ (const class GGS_registerExpression & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                const class GGS_bool & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_IncDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_IncDecRegisterInCondition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                const class GGS_bool & inOperand3,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_IncDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18IncDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_IncDecRegisterInCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_IncDecRegisterInCondition_init_21__21__21__21_ (const class GGS_registerExpression & inOperand0,
                                                                          const class GGS_bool & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          const class GGS_bool & inOperand3,
                                                                          Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_pic_31__38_IncDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_IncDecRegisterInCondition (const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_FA reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FA : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_FA (const class cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_FA_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_FA init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_FA_5F_instruction_5F_base_5F_code & inOperand1,
                                                                    const class GGS_registerExpression & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_FA extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FA class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_FA_5F_instruction_5F_base_5F_code & inOperand1,
                                                                        const class GGS_registerExpression & inOperand2,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;

//--------------------------------------------------------------------------------------------------
//   enum FA_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_FA_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_FA_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRF,
    enum_CPFSEQ,
    enum_CPFSGT,
    enum_CPFSLT,
    enum_MOVWF,
    enum_MULWF,
    enum_NEGF,
    enum_SETF,
    enum_TSTFSZ
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
  public: static GGS_FA_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CLRF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CPFSEQ (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CPFSGT (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CPFSLT (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_MOVWF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_MULWF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_NEGF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_SETF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMULWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNEGF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSETF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_FA class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FA : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_FA_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_FA_5F_instruction_5F_base_5F_code & inOperand1,
                                                              const class GGS_registerExpression & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_FA_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_FA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FA (const GGS_location & in_mInstructionLocation,
                                             const GGS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                             const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_FBA reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FBA : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FBA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_FBA (const class cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_FBA init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bitNumberExpression & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_FBA extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FBA class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bitNumberExpression & inOperand3,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;

//--------------------------------------------------------------------------------------------------
//   enum bit_5F_oriented_5F_op
//--------------------------------------------------------------------------------------------------

class GGS_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_BCF,
    enum_BSF,
    enum_BTG
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
  public: static GGS_bit_5F_oriented_5F_op extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bit_5F_oriented_5F_op class_func_BCF (LOCATION_ARGS) ;

  public: static class GGS_bit_5F_oriented_5F_op class_func_BSF (LOCATION_ARGS) ;

  public: static class GGS_bit_5F_oriented_5F_op class_func_BTG (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBSF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBTG (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_FBA class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FBA : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_FBA_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bitNumberExpression & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_FBA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FBA (const GGS_location & in_mInstructionLocation,
                                              const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                              const GGS_registerExpression & in_mRegisterExpression,
                                              const GGS_bitNumberExpression & in_mBitNumber,
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
// Phase 1: @pic_31__38_Instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FDA : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_FDA (const class cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_FDA init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_FDA extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FDA class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;

//--------------------------------------------------------------------------------------------------
//   enum pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ADDWF,
    enum_ADDWFC,
    enum_ANDWF,
    enum_COMF,
    enum_DECF,
    enum_INCF,
    enum_IORWF,
    enum_MOVF,
    enum_RLCF,
    enum_RLNCF,
    enum_RRCF,
    enum_RRNCF,
    enum_SUBFWB,
    enum_SUBWF,
    enum_SUBWFB,
    enum_SWAPF,
    enum_XORWF
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
  public: static GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_ADDWF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_ADDWFC (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_ANDWF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_COMF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_DECF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_INCF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_IORWF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_MOVF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_RLCF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_RLNCF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_RRCF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_RRNCF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_SUBFWB (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_SUBWF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_SUBWFB (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_SWAPF (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class_func_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isADDWFC (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDECF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isINCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRLCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRLNCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRRCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRRNCF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBFWB (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBWFB (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_FDA class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FDA : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_FDA_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bool & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FDA (const GGS_location & in_mInstructionLocation,
                                              const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                              const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_FOREVER : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_FOREVER (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_FOREVER (const class cPtr_pic_31__38_Instruction_5F_FOREVER * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_FOREVER init_21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                         const class GGS_location & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_FOREVER extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_FOREVER class_func_new (const class GGS_location & inOperand0,
                                                                             const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                             const class GGS_location & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ;

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
// Phase 2: pointer class for @pic18Instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FOREVER : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_FOREVER_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                   const class GGS_location & inOperand2,
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
  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstructionList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FOREVER (const GGS_location & in_mInstructionLocation,
                                                  const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                  const GGS_location & in_mEndOfInstructionList,
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const class cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_PiccoloSimpleInstruction readProperty_mEmbeddedInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON init_21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_init_21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                           Compiler * inCompiler) ;


//--- Properties
  public: GGS_pic_31__38_PiccoloSimpleInstruction mProperty_mEmbeddedInstruction ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                              const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_BitTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_BitTest : public GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_IF_5F_BitTest (const class cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_BitTest init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_registerExpression & inOperand3,
                                                                                       const class GGS_bitNumberExpression & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_BitTest extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_IF_5F_BitTest class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                   const class GGS_bool & inOperand2,
                                                                                   const class GGS_registerExpression & inOperand3,
                                                                                   const class GGS_bitNumberExpression & inOperand4,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_registerExpression & inOperand3,
                                                                                 const class GGS_bitNumberExpression & inOperand4,
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
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (const GGS_location & in_mInstructionLocation,
                                                        const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                        const GGS_bool & in_mSkipIfSet,
                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                        const GGS_bitNumberExpression & in_mBitNumber,
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON : public GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const class cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_if_5F_semi_5F_colon_5F_op readProperty_mOpCode (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                               const class GGS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                               const class GGS_registerExpression & inOperand3,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON class_func_new (const class GGS_location & inOperand0,
                                                                                               const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                               const class GGS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                               const class GGS_registerExpression & inOperand3,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;

//--------------------------------------------------------------------------------------------------
//   enum if_5F_semi_5F_colon_5F_op
//--------------------------------------------------------------------------------------------------

class GGS_if_5F_semi_5F_colon_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_if_5F_semi_5F_colon_5F_op (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CPFSEQ,
    enum_CPFSGT,
    enum_CPFSLT,
    enum_TSTFSZ
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
  public: static GGS_if_5F_semi_5F_colon_5F_op extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_if_5F_semi_5F_colon_5F_op class_func_CPFSEQ (LOCATION_ARGS) ;

  public: static class GGS_if_5F_semi_5F_colon_5F_op class_func_CPFSGT (LOCATION_ARGS) ;

  public: static class GGS_if_5F_semi_5F_colon_5F_op class_func_CPFSLT (LOCATION_ARGS) ;

  public: static class GGS_if_5F_semi_5F_colon_5F_op class_func_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_if_5F_semi_5F_colon_5F_op ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_IF_FA_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                         const class GGS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                         const class GGS_registerExpression & inOperand3,
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
  public: GGS_if_5F_semi_5F_colon_5F_op mProperty_mOpCode ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                    const GGS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                    const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_IF_5F_IncDec : public GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_IF_5F_IncDec (const class cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_bool readProperty_mSkipIfZero (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_IncDec init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                          const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          const class GGS_bool & inOperand3,
                                                                                          const class GGS_registerExpression & inOperand4,
                                                                                          const class GGS_bool & inOperand5,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_IF_5F_IncDec extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_IF_5F_IncDec class_func_new (const class GGS_location & inOperand0,
                                                                                  const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                  const class GGS_bool & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
                                                                                  const class GGS_registerExpression & inOperand4,
                                                                                  const class GGS_bool & inOperand5,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_IF_5F_IncDec_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    const class GGS_bool & inOperand3,
                                                                                    const class GGS_registerExpression & inOperand4,
                                                                                    const class GGS_bool & inOperand5,
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
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_mSkipIfZero ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (const GGS_location & in_mInstructionLocation,
                                                       const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                       const GGS_bool & in_mIncrement,
                                                       const GGS_bool & in_mSkipIfZero,
                                                       const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_JSR : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_JSR (const class cPtr_pic_31__38_Instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_JSR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_jumpInstructionKind & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_JSR extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_JSR class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_jumpInstructionKind & inOperand2,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;

//--------------------------------------------------------------------------------------------------
//   enum jumpInstructionKind
//--------------------------------------------------------------------------------------------------

class GGS_jumpInstructionKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_jumpInstructionKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ipicRelative,
    enum_relative,
    enum_absolute
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
  public: static GGS_jumpInstructionKind extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_jumpInstructionKind class_func_absolute (LOCATION_ARGS) ;

  public: static class GGS_jumpInstructionKind class_func_ipicRelative (LOCATION_ARGS) ;

  public: static class GGS_jumpInstructionKind class_func_relative (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_jumpInstructionKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAbsolute (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIpicRelative (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRelative (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jumpInstructionKind ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_JSR class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_JSR : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_JSR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_jumpInstructionKind & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GGS_stringset arg_inInlinedRoutineSet,
           const class GGS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GGS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GGS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_jumpInstructionKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JSR (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              const GGS_jumpInstructionKind & in_mKind,
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
// Phase 1: @pic_31__38_Instruction_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_JUMP : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_JUMP (const class cPtr_pic_31__38_Instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_JUMP init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_jumpInstructionKind & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_JUMP extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_JUMP class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_jumpInstructionKind & inOperand2,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_JUMP class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_JUMP : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_JUMP_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_jumpInstructionKind & inOperand2,
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
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_jumpInstructionKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               const GGS_jumpInstructionKind & in_mKind,
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
// Phase 1: @pic_31__38_Instruction_5F_JUMPCC reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_JUMPCC : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_JUMPCC (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_JUMPCC (const class cPtr_pic_31__38_Instruction_5F_JUMPCC * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_conditional_5F_branch readProperty_mConditionalBranch (void) const ;

  public: class GGS_bool readProperty_mIsBcc (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_JUMPCC init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_conditional_5F_branch & inOperand2,
                                                                            const class GGS_bool & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_JUMPCC extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_JUMPCC class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_conditional_5F_branch & inOperand2,
                                                                            const class GGS_bool & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_JUMPCC & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_JUMPCC class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_JUMPCC : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_JUMPCC_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_conditional_5F_branch & inOperand2,
                                                                      const class GGS_bool & inOperand3,
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
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_conditional_5F_branch mProperty_mConditionalBranch ;
  public: GGS_bool mProperty_mIsBcc ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMPCC (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMPCC (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 const GGS_conditional_5F_branch & in_mConditionalBranch,
                                                 const GGS_bool & in_mIsBcc,
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
// Phase 1: @pic_31__38_Instruction_5F_LDATA_31__36_PTR reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const class cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDataName (void) const ;

  public: class GGS_luint readProperty_mDataIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_luint & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_luint & inOperand2,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_LDATA16PTR class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_LDATA_31__36_PTR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_luint & inOperand2,
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
  public: GGS_lstring mProperty_mDataName ;
  public: GGS_luint mProperty_mDataIndex ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const GGS_location & in_mInstructionLocation,
                                                           const GGS_lstring & in_mDataName,
                                                           const GGS_luint & in_mDataIndex,
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
// Phase 1: @pic_31__38_Instruction_5F_LDATA_38_PTR reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LDATA_38_PTR : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LDATA_38_PTR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_LDATA_38_PTR (const class cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDataName (void) const ;

  public: class GGS_luint readProperty_mDataIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_LDATA_38_PTR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_luint & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_LDATA_38_PTR extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LDATA_38_PTR class_func_new (const class GGS_location & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_luint & inOperand2,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_LDATA8PTR class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_LDATA_38_PTR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_luint & inOperand2,
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
  public: GGS_lstring mProperty_mDataName ;
  public: GGS_luint mProperty_mDataIndex ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (const GGS_location & in_mInstructionLocation,
                                                       const GGS_lstring & in_mDataName,
                                                       const GGS_luint & in_mDataIndex,
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
// Phase 1: @pic_31__38_Instruction_5F_LFSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LFSR : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LFSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_LFSR (const class cPtr_pic_31__38_Instruction_5F_LFSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mFSRindex (void) const ;

  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_LFSR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_luint & inOperand1,
                                                                      const class GGS_immediatExpression & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_LFSR extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LFSR class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_luint & inOperand1,
                                                                          const class GGS_immediatExpression & inOperand2,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_LFSR class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_LFSR : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_LFSR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_luint & inOperand1,
                                                                const class GGS_immediatExpression & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mFSRindex ;
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LFSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LFSR (const GGS_location & in_mInstructionLocation,
                                               const GGS_luint & in_mFSRindex,
                                               const GGS_immediatExpression & in_mImmediatExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_LTBLPTR reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_LTBLPTR : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_LTBLPTR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_LTBLPTR (const class cPtr_pic_31__38_Instruction_5F_LTBLPTR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_LTBLPTR init_21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_immediatExpression & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_LTBLPTR extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_LTBLPTR class_func_new (const class GGS_location & inOperand0,
                                                                             const class GGS_immediatExpression & inOperand1,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_LTBLPTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_LTBLPTR class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_LTBLPTR : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_LTBLPTR_init_21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_immediatExpression & inOperand1,
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
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_LTBLPTR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LTBLPTR (const GGS_location & in_mInstructionLocation,
                                                  const GGS_immediatExpression & in_mImmediatExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_MNOP : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_MNOP (const class cPtr_pic_31__38_Instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_luint & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_MNOP class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_luint & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_MNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_MNOP : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_luint & inOperand1,
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
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @pic_31__38_Instruction_5F_MOVFF reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_MOVFF : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_MOVFF (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_MOVFF (const class cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mSourceRegisterName (void) const ;

  public: class GGS_registerExpression readProperty_mDestinationRegisterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_MOVFF init_21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_registerExpression & inOperand1,
                                                                       const class GGS_registerExpression & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_MOVFF extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_MOVFF class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_registerExpression & inOperand1,
                                                                           const class GGS_registerExpression & inOperand2,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_MOVFF class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_MOVFF : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_MOVFF_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_registerExpression & inOperand1,
                                                                 const class GGS_registerExpression & inOperand2,
                                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mSourceRegisterName ;
  public: GGS_registerExpression mProperty_mDestinationRegisterName ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_MOVFF (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_MOVFF (const GGS_location & in_mInstructionLocation,
                                                const GGS_registerExpression & in_mSourceRegisterName,
                                                const GGS_registerExpression & in_mDestinationRegisterName,
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
// Phase 1: @pic_31__38_Instruction_5F_NOPBRA reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_NOPBRA : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_NOPBRA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_NOPBRA (const class cPtr_pic_31__38_Instruction_5F_NOPBRA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_NOPBRA init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_luint & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_NOPBRA extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_NOPBRA class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_luint & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_NOPBRA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_NOPBRA class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_NOPBRA : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_NOPBRA_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_luint & inOperand1,
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
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_NOPBRA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_NOPBRA (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @pic_31__38_Instruction_5F_TBLRD reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_TBLRD : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_TBLRD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_TBLRD (const class cPtr_pic_31__38_Instruction_5F_TBLRD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_tableAccessOption readProperty_mOption (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_TBLRD init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_tableAccessOption & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_TBLRD extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_TBLRD class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_tableAccessOption & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;

//--------------------------------------------------------------------------------------------------
//   enum tableAccessOption
//--------------------------------------------------------------------------------------------------

class GGS_tableAccessOption : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_tableAccessOption (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_simpleAccess,
    enum_postIncrement,
    enum_postDecrement,
    enum_preIncrement
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
  public: static GGS_tableAccessOption extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tableAccessOption class_func_postDecrement (LOCATION_ARGS) ;

  public: static class GGS_tableAccessOption class_func_postIncrement (LOCATION_ARGS) ;

  public: static class GGS_tableAccessOption class_func_preIncrement (LOCATION_ARGS) ;

  public: static class GGS_tableAccessOption class_func_simpleAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPostDecrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPostIncrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPreIncrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSimpleAccess (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableAccessOption ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_TBLRD class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_TBLRD : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_TBLRD_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_tableAccessOption & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLRD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLRD (const GGS_location & in_mInstructionLocation,
                                                const GGS_tableAccessOption & in_mOption,
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
// Phase 1: @pic_31__38_Instruction_5F_TBLWT reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_TBLWT : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_TBLWT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_TBLWT (const class cPtr_pic_31__38_Instruction_5F_TBLWT * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_tableAccessOption readProperty_mOption (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_TBLWT init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_tableAccessOption & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_TBLWT extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_TBLWT class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_tableAccessOption & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_TBLWT class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_TBLWT : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_TBLWT_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_tableAccessOption & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLWT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_TBLWT (const GGS_location & in_mInstructionLocation,
                                                const GGS_tableAccessOption & in_mOption,
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
// Phase 1: @pic_31__38_Instruction_5F_block reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_block : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_block (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_block (const class cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mStartBlockName (void) const ;

  public: class GGS_pic_31__38_BlockInstructionBlockList readProperty_mBlockList (void) const ;

  public: class GGS_location readProperty_mEndOfBlockInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_block init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_pic_31__38_BlockInstructionBlockList & inOperand2,
                                                                           const class GGS_location & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_block extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_block class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_pic_31__38_BlockInstructionBlockList & inOperand2,
                                                                           const class GGS_location & inOperand3,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_block & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;

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
// Phase 2: pointer class for @pic18Instruction_block class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_block : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_block_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_pic_31__38_BlockInstructionBlockList & inOperand2,
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
  public: GGS_lstring mProperty_mStartBlockName ;
  public: GGS_pic_31__38_BlockInstructionBlockList mProperty_mBlockList ;
  public: GGS_location mProperty_mEndOfBlockInstruction ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_block (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_block (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mStartBlockName,
                                                const GGS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                const GGS_location & in_mEndOfBlockInstruction,
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_bra reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_bra : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_bra (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_computed_5F_bra (const class cPtr_pic_31__38_Instruction_5F_computed_5F_bra * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mSizeExpression (void) const ;

  public: class GGS_lstringlist readProperty_mTargetLabels (void) const ;

  public: class GGS_bool readProperty_mUsesRelativeCall (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_bra init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_immediatExpression & inOperand1,
                                                                                     const class GGS_lstringlist & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_bra extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_bra class_func_new (const class GGS_location & inOperand0,
                                                                                     const class GGS_immediatExpression & inOperand1,
                                                                                     const class GGS_lstringlist & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_bra & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_computed_bra class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_bra : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_bra_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_immediatExpression & inOperand1,
                                                                               const class GGS_lstringlist & inOperand2,
                                                                               const class GGS_bool & inOperand3,
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
  public: GGS_immediatExpression mProperty_mSizeExpression ;
  public: GGS_lstringlist mProperty_mTargetLabels ;
  public: GGS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_bra (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_bra (const GGS_location & in_mInstructionLocation,
                                                          const GGS_immediatExpression & in_mSizeExpression,
                                                          const GGS_lstringlist & in_mTargetLabels,
                                                          const GGS_bool & in_mUsesRelativeCall,
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_goto reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_goto : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_goto (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_computed_5F_goto (const class cPtr_pic_31__38_Instruction_5F_computed_5F_goto * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mSizeExpression (void) const ;

  public: class GGS_lstringlist readProperty_mTargetLabels (void) const ;

  public: class GGS_bool readProperty_mUsesRelativeCall (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_goto init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_immediatExpression & inOperand1,
                                                                                      const class GGS_lstringlist & inOperand2,
                                                                                      const class GGS_bool & inOperand3,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_goto extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_goto class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_immediatExpression & inOperand1,
                                                                                      const class GGS_lstringlist & inOperand2,
                                                                                      const class GGS_bool & inOperand3,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_goto & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_computed_goto class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_goto : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_goto_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_immediatExpression & inOperand1,
                                                                                const class GGS_lstringlist & inOperand2,
                                                                                const class GGS_bool & inOperand3,
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
  public: GGS_immediatExpression mProperty_mSizeExpression ;
  public: GGS_lstringlist mProperty_mTargetLabels ;
  public: GGS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_goto (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_goto (const GGS_location & in_mInstructionLocation,
                                                           const GGS_immediatExpression & in_mSizeExpression,
                                                           const GGS_lstringlist & in_mTargetLabels,
                                                           const GGS_bool & in_mUsesRelativeCall,
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_rcall reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_rcall : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_rcall (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_computed_5F_rcall (const class cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mSizeExpression (void) const ;

  public: class GGS_lstringlist readProperty_mTargetLabels (void) const ;

  public: class GGS_bool readProperty_mUsesRelativeCall (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_rcall init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_immediatExpression & inOperand1,
                                                                                       const class GGS_lstringlist & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_rcall extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_rcall class_func_new (const class GGS_location & inOperand0,
                                                                                       const class GGS_immediatExpression & inOperand1,
                                                                                       const class GGS_lstringlist & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_rcall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_computed_rcall class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_rcall : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_rcall_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_immediatExpression & inOperand1,
                                                                                 const class GGS_lstringlist & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
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
  public: GGS_immediatExpression mProperty_mSizeExpression ;
  public: GGS_lstringlist mProperty_mTargetLabels ;
  public: GGS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (const GGS_location & in_mInstructionLocation,
                                                            const GGS_immediatExpression & in_mSizeExpression,
                                                            const GGS_lstringlist & in_mTargetLabels,
                                                            const GGS_bool & in_mUsesRelativeCall,
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
// Phase 1: @pic_31__38_Instruction_5F_computed_5F_retlw reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_computed_5F_retlw : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_computed_5F_retlw (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_computed_5F_retlw (const class cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mSizeExpression (void) const ;

  public: class GGS_immediatExpressionList readProperty_mImmediateExpressionList (void) const ;

  public: class GGS_bool readProperty_mUsesRelativeCall (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_retlw init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_immediatExpression & inOperand1,
                                                                                       const class GGS_immediatExpressionList & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_computed_5F_retlw extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_computed_5F_retlw class_func_new (const class GGS_location & inOperand0,
                                                                                       const class GGS_immediatExpression & inOperand1,
                                                                                       const class GGS_immediatExpressionList & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_retlw & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_computed_retlw class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_computed_5F_retlw : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_computed_5F_retlw_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_immediatExpression & inOperand1,
                                                                                 const class GGS_immediatExpressionList & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
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
  public: GGS_immediatExpression mProperty_mSizeExpression ;
  public: GGS_immediatExpressionList mProperty_mImmediateExpressionList ;
  public: GGS_bool mProperty_mUsesRelativeCall ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (const GGS_location & in_mInstructionLocation,
                                                            const GGS_immediatExpression & in_mSizeExpression,
                                                            const GGS_immediatExpressionList & in_mImmediateExpressionList,
                                                            const GGS_bool & in_mUsesRelativeCall,
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
// Phase 1: @pic_31__38_Instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_do_5F_while : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_do_5F_while (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_do_5F_while (const class cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_InstructionList readProperty_mRepeatedInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfRepeatedInstructionList (void) const ;

  public: class GGS_pic_31__38_DoWhilePartList readProperty_mWhilePartList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_do_5F_while init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                 const class GGS_location & inOperand2,
                                                                                 const class GGS_pic_31__38_DoWhilePartList & inOperand3,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_do_5F_while extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_do_5F_while class_func_new (const class GGS_location & inOperand0,
                                                                                 const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                 const class GGS_location & inOperand2,
                                                                                 const class GGS_pic_31__38_DoWhilePartList & inOperand3,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_DoWhilePartList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_DoWhilePartList final {
  public: DownEnumerator_pic_31__38_DoWhilePartList (const class GGS_pic_31__38_DoWhilePartList & inList) ;

  public: ~ DownEnumerator_pic_31__38_DoWhilePartList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_ConditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_DoWhilePartList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_DoWhilePartList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_DoWhilePartList (const DownEnumerator_pic_31__38_DoWhilePartList &) = delete ;
  private: DownEnumerator_pic_31__38_DoWhilePartList & operator = (const DownEnumerator_pic_31__38_DoWhilePartList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_DoWhilePartList final {
  public: UpEnumerator_pic_31__38_DoWhilePartList (const class GGS_pic_31__38_DoWhilePartList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_DoWhilePartList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_ConditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_DoWhilePartList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_DoWhilePartList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_DoWhilePartList (const UpEnumerator_pic_31__38_DoWhilePartList &) = delete ;
  private: UpEnumerator_pic_31__38_DoWhilePartList & operator = (const UpEnumerator_pic_31__38_DoWhilePartList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18DoWhilePartList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_DoWhilePartList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_DoWhilePartList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_DoWhilePartList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_DoWhilePartList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_DoWhilePartList (const GGS_pic_31__38_DoWhilePartList &) = default ;
  public: GGS_pic_31__38_DoWhilePartList & operator = (const GGS_pic_31__38_DoWhilePartList &) = default ;

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
  public : inline GenericArray <GGS_pic_31__38_DoWhilePartList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_DoWhilePartList subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_DoWhilePartList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfPartLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_DoWhilePartList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_DoWhilePartList extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_DoWhilePartList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_DoWhilePartList class_func_listWithValue (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                                const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                                const class GGS_location & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_DoWhilePartList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                    const class GGS_pic_31__38_InstructionList & inOperand1,
                                                    const class GGS_location & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_DoWhilePartList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_DoWhilePartList add_operation (const GGS_pic_31__38_DoWhilePartList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_pic_31__38_ConditionExpression constinArgument0,
                                               class GGS_pic_31__38_InstructionList constinArgument1,
                                               class GGS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_pic_31__38_ConditionExpression constinArgument0,
                                                      class GGS_pic_31__38_InstructionList constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                 class GGS_pic_31__38_InstructionList & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                class GGS_pic_31__38_InstructionList & outArgument1,
                                                class GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                      class GGS_pic_31__38_InstructionList & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConditionAtIndex (class GGS_pic_31__38_ConditionExpression constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfPartLocationAtIndex (class GGS_location constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                              class GGS_pic_31__38_InstructionList & outArgument1,
                                              class GGS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                             class GGS_pic_31__38_InstructionList & outArgument1,
                                             class GGS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_ConditionExpression getter_mConditionAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfPartLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_DoWhilePartList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_DoWhilePartList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_DoWhilePartList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_DoWhilePartList ;
  friend class DownEnumerator_pic_31__38_DoWhilePartList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_do_while class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_do_5F_while : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_do_5F_while_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           const class GGS_pic_31__38_DoWhilePartList & inOperand3,
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
  public: GGS_pic_31__38_InstructionList mProperty_mRepeatedInstructionList ;
  public: GGS_location mProperty_mEndOfRepeatedInstructionList ;
  public: GGS_pic_31__38_DoWhilePartList mProperty_mWhilePartList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_do_5F_while (const GGS_location & in_mInstructionLocation,
                                                      const GGS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                      const GGS_location & in_mEndOfRepeatedInstructionList,
                                                      const GGS_pic_31__38_DoWhilePartList & in_mWhilePartList,
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
// Phase 1: @pic_31__38_Instruction_5F_fnop reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_fnop : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_fnop (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_fnop (const class cPtr_pic_31__38_Instruction_5F_fnop * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_fnop init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_immediatExpression & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_fnop extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_fnop class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_immediatExpression & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_fnop & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_fnop class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_fnop : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_fnop_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_immediatExpression & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_fnop (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_fnop (const GGS_location & in_mInstructionLocation,
                                               const GGS_immediatExpression & in_mImmediatExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_literalOperation : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_literalOperation (const class cPtr_pic_31__38_Instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GGS_immediatExpression readProperty_mImmediatExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                  const class GGS_immediatExpression & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_literalOperation class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                      const class GGS_immediatExpression & inOperand2,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
//   enum literal_5F_instruction_5F_opcode
//--------------------------------------------------------------------------------------------------

class GGS_literal_5F_instruction_5F_opcode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_literal_5F_instruction_5F_opcode (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ADDLW,
    enum_ANDLW,
    enum_IORLW,
    enum_MOVLW,
    enum_MULLW,
    enum_SUBLW,
    enum_XORLW
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
  public: static GGS_literal_5F_instruction_5F_opcode extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literal_5F_instruction_5F_opcode class_func_ADDLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_ANDLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_IORLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_MOVLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_MULLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_SUBLW (LOCATION_ARGS) ;

  public: static class GGS_literal_5F_instruction_5F_opcode class_func_XORLW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isADDLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isANDLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIORLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMULLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSUBLW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_literalOperation : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                            const class GGS_immediatExpression & inOperand2,
                                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GGS_immediatExpression mProperty_mImmediatExpression ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                           const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                           const GGS_immediatExpression & in_mImmediatExpression,
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
// Phase 1: @pic_31__38_Instruction_5F_macro reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_macro : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_macro (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_macro (const class cPtr_pic_31__38_Instruction_5F_macro * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mMacroName (void) const ;

  public: class GGS_immediatExpressionList readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_macro init_21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_immediatExpressionList & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_macro extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_macro class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_immediatExpressionList & inOperand2,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_macro & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_macro class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_macro : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_macro_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 const class GGS_immediatExpressionList & inOperand2,
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
  public: GGS_lstring mProperty_mMacroName ;
  public: GGS_immediatExpressionList mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_macro (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_macro (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mMacroName,
                                                const GGS_immediatExpressionList & in_mExpressionList,
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
// Phase 1: @pic_31__38_Instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_structured_5F_if : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_structured_5F_if (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_structured_5F_if (const class cPtr_pic_31__38_Instruction_5F_structured_5F_if * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_ConditionExpression readProperty_mIfCondition (void) const ;

  public: class GGS_pic_31__38_InstructionList readProperty_mThenInstructionList (void) const ;

  public: class GGS_pic_31__38_InstructionList readProperty_mElseInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfElsePartLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_structured_5F_if init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                          const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                                          const class GGS_location & inOperand4,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_structured_5F_if extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_structured_5F_if class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                                                      const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                      const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                                      const class GGS_location & inOperand4,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_structured_if class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_structured_5F_if : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_pic_31__38_ConditionExpression & inOperand1,
                                                                                    const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                    const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                                    const class GGS_location & inOperand4,
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
  public: GGS_pic_31__38_ConditionExpression mProperty_mIfCondition ;
  public: GGS_pic_31__38_InstructionList mProperty_mThenInstructionList ;
  public: GGS_pic_31__38_InstructionList mProperty_mElseInstructionList ;
  public: GGS_location mProperty_mEndOfElsePartLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_structured_5F_if (const GGS_location & in_mInstructionLocation,
                                                           const GGS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                           const GGS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                           const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                           const GGS_location & in_mEndOfElsePartLocation,
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
// Phase 1: @pic_31__38_Instruction_5F_switch reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_switch : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_switch (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_switch (const class cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_SwitchInstructionCaseList readProperty_mCaseList (void) const ;

  public: class GGS_location readProperty_mElseBranchStartLocation (void) const ;

  public: class GGS_pic_31__38_InstructionList readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_switch init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_switch extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_switch class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_switch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_SwitchInstructionCaseList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_SwitchInstructionCaseList final {
  public: DownEnumerator_pic_31__38_SwitchInstructionCaseList (const class GGS_pic_31__38_SwitchInstructionCaseList & inList) ;

  public: ~ DownEnumerator_pic_31__38_SwitchInstructionCaseList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_SwitchInstructionCaseList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_SwitchInstructionCaseList (const DownEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
  private: DownEnumerator_pic_31__38_SwitchInstructionCaseList & operator = (const DownEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_SwitchInstructionCaseList final {
  public: UpEnumerator_pic_31__38_SwitchInstructionCaseList (const class GGS_pic_31__38_SwitchInstructionCaseList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_SwitchInstructionCaseList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_SwitchInstructionCaseList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_SwitchInstructionCaseList (const UpEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
  private: UpEnumerator_pic_31__38_SwitchInstructionCaseList & operator = (const UpEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18SwitchInstructionCaseList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SwitchInstructionCaseList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_SwitchInstructionCaseList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_SwitchInstructionCaseList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList &) = default ;
  public: GGS_pic_31__38_SwitchInstructionCaseList & operator = (const GGS_pic_31__38_SwitchInstructionCaseList &) = default ;

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
  public : inline GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_SwitchInstructionCaseList subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_SwitchInstructionCaseList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mStartOfCase,
                                                 const class GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_SwitchInstructionCaseList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_SwitchInstructionCaseList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SwitchInstructionCaseList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_SwitchInstructionCaseList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                                          const class GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_location & inOperand0,
                                                    const class GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                    const class GGS_pic_31__38_InstructionList & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_SwitchInstructionCaseList add_operation (const GGS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               class GGS_pic_31__38_CaseExpressionList constinArgument1,
                                               class GGS_pic_31__38_InstructionList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_pic_31__38_CaseExpressionList constinArgument1,
                                                      class GGS_pic_31__38_InstructionList constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                                 class GGS_pic_31__38_InstructionList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                                class GGS_pic_31__38_InstructionList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                                      class GGS_pic_31__38_InstructionList & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseExpressionListAtIndex (class GGS_pic_31__38_CaseExpressionList constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartOfCaseAtIndex (class GGS_location constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                              class GGS_pic_31__38_InstructionList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                             class GGS_pic_31__38_InstructionList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_mCaseExpressionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mStartOfCaseAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_SwitchInstructionCaseList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_SwitchInstructionCaseList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_SwitchInstructionCaseList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_SwitchInstructionCaseList ;
  friend class DownEnumerator_pic_31__38_SwitchInstructionCaseList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_switch class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_switch : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_switch_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                      const class GGS_location & inOperand2,
                                                                      const class GGS_pic_31__38_InstructionList & inOperand3,
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
  public: GGS_pic_31__38_SwitchInstructionCaseList mProperty_mCaseList ;
  public: GGS_location mProperty_mElseBranchStartLocation ;
  public: GGS_pic_31__38_InstructionList mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (const GGS_location & in_mInstructionLocation,
                                                 const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                 const GGS_location & in_mElseBranchStartLocation,
                                                 const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
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
// Phase 1: @pic_31__38_Instruction_5F_withNoOperand reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_withNoOperand : public GGS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_withNoOperand (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_withNoOperand (const class cPtr_pic_31__38_Instruction_5F_withNoOperand * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_InstructionWithNoOperandKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_withNoOperand init_21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_withNoOperand extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_withNoOperand class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_withNoOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ;

//--------------------------------------------------------------------------------------------------
//   enum pic_31__38_InstructionWithNoOperandKind
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InstructionWithNoOperandKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_InstructionWithNoOperandKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRWDT,
    enum_DAW,
    enum_NOP,
    enum_POP,
    enum_PUSH,
    enum_RESET,
    enum_SLEEP
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
  public: static GGS_pic_31__38_InstructionWithNoOperandKind extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_CLRWDT (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_DAW (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_NOP (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_POP (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_PUSH (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_RESET (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InstructionWithNoOperandKind class_func_SLEEP (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCLRWDT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDAW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNOP (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPOP (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPUSH (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRESET (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSLEEP (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_withNoOperand class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_withNoOperand : public cPtr_pic_31__38_PiccoloSimpleInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_withNoOperand_init_21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                     Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_InstructionWithNoOperandKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_withNoOperand (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_withNoOperand (const GGS_location & in_mInstructionLocation,
                                                        const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
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
// Phase 1: @pic_31__38_AbstractCaseItem reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_AbstractCaseItem : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_AbstractCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_AbstractCaseItem (const class cPtr_pic_31__38_AbstractCaseItem * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_AbstractCaseItem init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_AbstractCaseItem extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_AbstractCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18AbstractCaseItem class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_AbstractCaseItem : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_AbstractCaseItem_init (Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_string arg_inIndexForLabels,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_caseConstantMap & arg_ioCaseConstantMap,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_pic_31__38_AbstractCaseItem (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_IntervalCaseItem reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_IntervalCaseItem : public GGS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_IntervalCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_IntervalCaseItem (const class cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mMinExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mMaxExpression (void) const ;

  public: class GGS_location readProperty_mCaseExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_IntervalCaseItem init_21__21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                   const class GGS_immediatExpression & inOperand1,
                                                                   const class GGS_location & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_IntervalCaseItem extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_IntervalCaseItem class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                       const class GGS_immediatExpression & inOperand1,
                                                                       const class GGS_location & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_IntervalCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18IntervalCaseItem class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_IntervalCaseItem : public cPtr_pic_31__38_AbstractCaseItem {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_IntervalCaseItem_init_21__21__21_ (const class GGS_immediatExpression & inOperand0,
                                                             const class GGS_immediatExpression & inOperand1,
                                                             const class GGS_location & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_string arg_inIndexForLabels,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_caseConstantMap & arg_ioCaseConstantMap,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mMinExpression ;
  public: GGS_immediatExpression mProperty_mMaxExpression ;
  public: GGS_location mProperty_mCaseExpressionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_IntervalCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_IntervalCaseItem (const GGS_immediatExpression & in_mMinExpression,
                                            const GGS_immediatExpression & in_mMaxExpression,
                                            const GGS_location & in_mCaseExpressionLocation,
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
// Phase 1: @pic_31__38_NegateCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_NegateCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_NegateCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_NegateCondition (const class cPtr_pic_31__38_NegateCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_ConditionExpression readProperty_mCondition (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_NegateCondition init_21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_NegateCondition extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_NegateCondition class_func_new (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_NegateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18NegateCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_NegateCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_NegateCondition_init_21_ (const class GGS_pic_31__38_ConditionExpression & inOperand0,
                                                    Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_ConditionExpression mProperty_mCondition ;


//--- Default constructor
  public: cPtr_pic_31__38_NegateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_NegateCondition (const GGS_pic_31__38_ConditionExpression & in_mCondition,
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
// Phase 1: @pic_31__38_RegisterComparisonCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterComparisonCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterComparisonCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_RegisterComparisonCondition (const class cPtr_pic_31__38_RegisterComparisonCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_pic_31__38_RegisterComparison readProperty_mComparison (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_RegisterComparisonCondition init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                          const class GGS_pic_31__38_RegisterComparison & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_RegisterComparisonCondition extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterComparisonCondition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                                  const class GGS_pic_31__38_RegisterComparison & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_RegisterComparisonCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;

//--------------------------------------------------------------------------------------------------
//   enum pic_31__38_RegisterComparison
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterComparison (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_notEqual,
    enum_equal,
    enum_greaterOrEqual,
    enum_greater,
    enum_lowerOrEqual,
    enum_lower
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
  public: static GGS_pic_31__38_RegisterComparison extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterComparison class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_greater (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_lower (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGreater (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLower (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18RegisterComparisonCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterComparisonCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_RegisterComparisonCondition_init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                    const class GGS_pic_31__38_RegisterComparison & inOperand1,
                                                                    Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_pic_31__38_RegisterComparison mProperty_mComparison ;


//--- Default constructor
  public: cPtr_pic_31__38_RegisterComparisonCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterComparisonCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                       const GGS_pic_31__38_RegisterComparison & in_mComparison,
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
// Phase 1: @pic_31__38_RegisterTestCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterTestCondition : public GGS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterTestCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_RegisterTestCondition (const class cPtr_pic_31__38_RegisterTestCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_RegisterTestCondition init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                                    const class GGS_bool & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_RegisterTestCondition extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterTestCondition class_func_new (const class GGS_registerExpression & inOperand0,
                                                                            const class GGS_bool & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_RegisterTestCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18RegisterTestCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterTestCondition : public cPtr_pic_31__38_ConditionExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_RegisterTestCondition_init_21__21_ (const class GGS_registerExpression & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              Compiler * inCompiler) ;


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
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_pic_31__38_RegisterTestCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterTestCondition (const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @pic_31__38_SimpleConstantCaseItem reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SimpleConstantCaseItem : public GGS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_SimpleConstantCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_SimpleConstantCaseItem (const class cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mCaseExpression (void) const ;

  public: class GGS_location readProperty_mCaseExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_SimpleConstantCaseItem init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_SimpleConstantCaseItem extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SimpleConstantCaseItem class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18SimpleConstantCaseItem class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_SimpleConstantCaseItem : public cPtr_pic_31__38_AbstractCaseItem {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_SimpleConstantCaseItem_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                               const class GGS_location & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_string arg_inIndexForLabels,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_caseConstantMap & arg_ioCaseConstantMap,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mCaseExpression ;
  public: GGS_location mProperty_mCaseExpressionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (const GGS_immediatExpression & in_mCaseExpression,
                                                  const GGS_location & in_mCaseExpressionLocation,
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
//
//Parser class 'communs' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_communs {
//--- Virtual destructor
  public: virtual ~ cParser_communs (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GGS_declarationInRam & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_ (class GGS_immediatExpression & outArgument0,
                                                              class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_ (class GGS_immediatExpression & outArgument0,
                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_ (class GGS_immediatExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_ (class GGS_immediatExpression & outArgument0,
                                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_ (class GGS_immediatExpression & outArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_communs_configuration_5F_definition_i0_ (GGS_configDefinitionList & ioArgument0,
                                                                Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_configuration_5F_definition_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_configuration_5F_definition_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_ (GGS_declarationInRam & outArgument0,
                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_ (GGS_ramDefinitionList & ioArgument0,
                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_ (GGS_constantDefinitionList & ioArgument0,
                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_ (GGS_immediatExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_ (GGS_immediatExpression & outArgument0,
                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_ (GGS_immediatExpression & outArgument0,
                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_ (GGS_immediatExpression & outArgument0,
                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_ (GGS_immediatExpression & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_ (GGS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_ (GGS_registerExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_ (GGS_bool & outArgument0,
                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_communs_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_20 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR pic18_include_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_pic_31__38__5F_include_5F_grammar : public cParser_pic_31__38__5F_syntax,
                                                   public cParser_communs {
//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_bit_5F_number_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_bit_5F_number_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_bit_5F_number_5F_parsing_ (GGS_bitNumberExpression & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'block_termination' non terminal
//--- 'parse' label
  public: virtual void nt_block_5F_termination_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_block_5F_termination_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_block_5F_termination_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'body' non terminal
//--- 'parse' label
  public: virtual void nt_body_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_body_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_body_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                 GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                 GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                 GGS_lstringlist & ioArgument3,
                                 GGS_lstringlist & ioArgument4,
                                 GGS_ramDefinitionList & ioArgument5,
                                 GGS_lstringlist & ioArgument6,
                                 GGS_configDefinitionList & ioArgument7,
                                 GGS_constantDefinitionList & ioArgument8,
                                 GGS_checkpicList & ioArgument9,
                                 GGS_dataList & ioArgument10,
                                 GGS_bool & ioArgument11,
                                 GGS_bool & ioArgument12,
                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                  GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                  GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                  GGS_lstringlist & ioArgument3,
                                                  GGS_lstringlist & ioArgument4,
                                                  GGS_ramDefinitionList & ioArgument5,
                                                  GGS_lstringlist & ioArgument6,
                                                  GGS_configDefinitionList & ioArgument7,
                                                  GGS_constantDefinitionList & ioArgument8,
                                                  GGS_checkpicList & ioArgument9,
                                                  GGS_dataList & ioArgument10,
                                                  GGS_bool & ioArgument11,
                                                  GGS_bool & ioArgument12
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                    GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                    GGS_lstringlist & ioArgument3,
                                                    GGS_lstringlist & ioArgument4,
                                                    GGS_ramDefinitionList & ioArgument5,
                                                    GGS_lstringlist & ioArgument6,
                                                    GGS_configDefinitionList & ioArgument7,
                                                    GGS_constantDefinitionList & ioArgument8,
                                                    GGS_checkpicList & ioArgument9,
                                                    GGS_dataList & ioArgument10,
                                                    GGS_bool & ioArgument11,
                                                    GGS_bool & ioArgument12
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'checkpic_definition' non terminal
//--- 'parse' label
  public: virtual void nt_checkpic_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_checkpic_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_checkpic_5F_definition_ (GGS_checkpicList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_expression_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_factor_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_term_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_definition' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_configuration_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_definition_ (GGS_configDefinitionList & ioArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'constant_definition' non terminal
//--- 'parse' label
  public: virtual void nt_constant_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_constant_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_constant_5F_definition_ (GGS_constantDefinitionList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'data_definition' non terminal
//--- 'parse' label
  public: virtual void nt_data_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_data_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_data_5F_definition_ (GGS_dataList & ioArgument0,
                                               Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_in_ram' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_5F_in_5F_ram_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_5F_in_5F_ram_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_5F_in_5F_ram_ (GGS_declarationInRam & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_ (GGS_immediatExpression & outArgument0,
                                                           Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_ (GGS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_expression' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_expression_ (GGS_immediatExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_factor_ (GGS_immediatExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_primary' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_primary_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_primary_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_primary_ (GGS_immediatExpression & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_term_ (GGS_immediatExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_5F_list_ (GGS_pic_31__38_InstructionList & outArgument0,
                                                GGS_bool & ioArgument1,
                                                GGS_bool & ioArgument2,
                                                GGS_labelMap & ioArgument3,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'interrupt_definition' non terminal
//--- 'parse' label
  public: virtual void nt_interrupt_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_interrupt_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interrupt_5F_definition_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GGS_bool & ioArgument1,
                                                    GGS_bool & ioArgument2,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_ (GGS_bool & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'ram_definition' non terminal
//--- 'parse' label
  public: virtual void nt_ram_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_ram_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_ram_5F_definition_ (GGS_ramDefinitionList & ioArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'register_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_register_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_register_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_register_5F_parsing_ (GGS_registerExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_definition_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                  GGS_bool & ioArgument1,
                                                  GGS_bool & ioArgument2,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_instruction_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_if_5F_instruction_ (const GGS_lstring inArgument0,
                                                            GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                            GGS_bool & ioArgument2,
                                                            GGS_bool & ioArgument3,
                                                            GGS_labelMap & ioArgument4,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_instruction_ (GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      GGS_bool & ioArgument1,
                                                      GGS_bool & ioArgument2,
                                                      GGS_labelMap & ioArgument3,
                                                      Lexique_piccolo_5F_lexique * inCompiler) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_20 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_21 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_22 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_23 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_24 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_25 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_26 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_27 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_28 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_29 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_30 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_31 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_32 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_33 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_34 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_35 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_36 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_37 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_38 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_39 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_40 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_41 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_42 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_43 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_44 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_45 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_46 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_47 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_48 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_49 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_50 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_51 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_52 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_53 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_54 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_55 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_56 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_57 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_58 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_59 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_60 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_61 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_62 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_63 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_64 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_20 (Lexique_piccolo_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// Phase 1: @checkpicList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_checkpicList final {
  public: DownEnumerator_checkpicList (const class GGS_checkpicList & inList) ;

  public: ~ DownEnumerator_checkpicList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_checkpicList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_checkpicList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_checkpicList (const DownEnumerator_checkpicList &) = delete ;
  private: DownEnumerator_checkpicList & operator = (const DownEnumerator_checkpicList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_checkpicList final {
  public: UpEnumerator_checkpicList (const class GGS_checkpicList & inList)  ;

  public: ~ UpEnumerator_checkpicList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_checkpicList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_checkpicList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_checkpicList (const UpEnumerator_checkpicList &) = delete ;
  private: UpEnumerator_checkpicList & operator = (const UpEnumerator_checkpicList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @checkpicList list
//--------------------------------------------------------------------------------------------------

class GGS_checkpicList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_checkpicList_2E_element> mArray ;

//--- Default constructor
  public: GGS_checkpicList (void) ;

//--- Destructor
  public: virtual ~ GGS_checkpicList (void) = default ;

//--- Copy
  public: GGS_checkpicList (const GGS_checkpicList &) = default ;
  public: GGS_checkpicList & operator = (const GGS_checkpicList &) = default ;

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
  public : inline GenericArray <GGS_checkpicList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_checkpicList subList (const int32_t inStart,
                                     const int32_t inLength,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_checkpicList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mErrorLocation,
                                                 const class GGS_lstringlist & in_mValueList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_checkpicList init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkpicList extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_checkpicList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_checkpicList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                  const class GGS_lstringlist & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_checkpicList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_location & inOperand0,
                                                    const class GGS_lstringlist & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_checkpicList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_checkpicList add_operation (const GGS_checkpicList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               class GGS_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_lstringlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                class GGS_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_lstringlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GGS_location constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GGS_lstringlist constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              class GGS_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             class GGS_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mErrorLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mValueListAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_checkpicList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_checkpicList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_checkpicList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_checkpicList ;
  friend class DownEnumerator_checkpicList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkpicList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dataList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_dataList final {
  public: DownEnumerator_dataList (const class GGS_dataList & inList) ;

  public: ~ DownEnumerator_dataList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mDataName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpressionList current_mValueList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsByteList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_dataList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_dataList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_dataList (const DownEnumerator_dataList &) = delete ;
  private: DownEnumerator_dataList & operator = (const DownEnumerator_dataList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_dataList final {
  public: UpEnumerator_dataList (const class GGS_dataList & inList)  ;

  public: ~ UpEnumerator_dataList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mDataName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpressionList current_mValueList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsByteList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_dataList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_dataList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_dataList (const UpEnumerator_dataList &) = delete ;
  private: UpEnumerator_dataList & operator = (const UpEnumerator_dataList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @dataList list
//--------------------------------------------------------------------------------------------------

class GGS_dataList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_dataList_2E_element> mArray ;

//--- Default constructor
  public: GGS_dataList (void) ;

//--- Destructor
  public: virtual ~ GGS_dataList (void) = default ;

//--- Copy
  public: GGS_dataList (const GGS_dataList &) = default ;
  public: GGS_dataList & operator = (const GGS_dataList &) = default ;

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
  public : inline GenericArray <GGS_dataList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_dataList subList (const int32_t inStart,
                                 const int32_t inLength,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_dataList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mDataName,
                                                 const class GGS_immediatExpressionList & in_mValueList,
                                                 const class GGS_bool & in_mIsByteList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dataList init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dataList extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dataList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_dataList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                              const class GGS_immediatExpressionList & inOperand1,
                                                              const class GGS_bool & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_dataList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_immediatExpressionList & inOperand1,
                                                    const class GGS_bool & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_dataList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_dataList add_operation (const GGS_dataList & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_immediatExpressionList constinArgument1,
                                               class GGS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_immediatExpressionList constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_immediatExpressionList & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_immediatExpressionList & outArgument1,
                                                class GGS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_immediatExpressionList & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsByteListAtIndex (class GGS_bool constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GGS_immediatExpressionList constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_immediatExpressionList & outArgument1,
                                              class GGS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_immediatExpressionList & outArgument1,
                                             class GGS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mDataNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsByteListAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_immediatExpressionList getter_mValueListAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_dataList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_dataList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_dataList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_dataList ;
  friend class DownEnumerator_dataList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dataList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_CaseExpressionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_CaseExpressionList final {
  public: DownEnumerator_pic_31__38_CaseExpressionList (const class GGS_pic_31__38_CaseExpressionList & inList) ;

  public: ~ DownEnumerator_pic_31__38_CaseExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_CaseExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_CaseExpressionList (const DownEnumerator_pic_31__38_CaseExpressionList &) = delete ;
  private: DownEnumerator_pic_31__38_CaseExpressionList & operator = (const DownEnumerator_pic_31__38_CaseExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_CaseExpressionList final {
  public: UpEnumerator_pic_31__38_CaseExpressionList (const class GGS_pic_31__38_CaseExpressionList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_CaseExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_CaseExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_CaseExpressionList (const UpEnumerator_pic_31__38_CaseExpressionList &) = delete ;
  private: UpEnumerator_pic_31__38_CaseExpressionList & operator = (const UpEnumerator_pic_31__38_CaseExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18CaseExpressionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_CaseExpressionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_CaseExpressionList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_CaseExpressionList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList &) = default ;
  public: GGS_pic_31__38_CaseExpressionList & operator = (const GGS_pic_31__38_CaseExpressionList &) = default ;

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
  public : inline GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_CaseExpressionList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_CaseExpressionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_CaseExpressionList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_CaseExpressionList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_CaseExpressionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_CaseExpressionList class_func_listWithValue (const class GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_CaseExpressionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_CaseExpressionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_CaseExpressionList add_operation (const GGS_pic_31__38_CaseExpressionList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseItemAtIndex (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_AbstractCaseItem getter_mCaseItemAtIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_CaseExpressionList ;
  friend class DownEnumerator_pic_31__38_CaseExpressionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_InterruptDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_InterruptDefinitionList final {
  public: DownEnumerator_pic_31__38_InterruptDefinitionList (const class GGS_pic_31__38_InterruptDefinitionList & inList) ;

  public: ~ DownEnumerator_pic_31__38_InterruptDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFastReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_InterruptDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_InterruptDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_InterruptDefinitionList (const DownEnumerator_pic_31__38_InterruptDefinitionList &) = delete ;
  private: DownEnumerator_pic_31__38_InterruptDefinitionList & operator = (const DownEnumerator_pic_31__38_InterruptDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_InterruptDefinitionList final {
  public: UpEnumerator_pic_31__38_InterruptDefinitionList (const class GGS_pic_31__38_InterruptDefinitionList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_InterruptDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFastReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_InterruptDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_InterruptDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_InterruptDefinitionList (const UpEnumerator_pic_31__38_InterruptDefinitionList &) = delete ;
  private: UpEnumerator_pic_31__38_InterruptDefinitionList & operator = (const UpEnumerator_pic_31__38_InterruptDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18InterruptDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InterruptDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_InterruptDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_InterruptDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_InterruptDefinitionList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_InterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList &) = default ;
  public: GGS_pic_31__38_InterruptDefinitionList & operator = (const GGS_pic_31__38_InterruptDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_pic_31__38_InterruptDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_InterruptDefinitionList subList (const int32_t inStart,
                                                           const int32_t inLength,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_InterruptDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInterruptName,
                                                 const class GGS_bool & in_mFastReturn,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfInterruptLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_InterruptDefinitionList init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_InterruptDefinitionList extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_InterruptDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_InterruptDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_bool & inOperand1,
                                                                                        const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                        const class GGS_location & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_InterruptDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_bool & inOperand1,
                                                    const class GGS_pic_31__38_InstructionList & inOperand2,
                                                    const class GGS_location & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_InterruptDefinitionList add_operation (const GGS_pic_31__38_InterruptDefinitionList & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_bool constinArgument1,
                                               class GGS_pic_31__38_InstructionList constinArgument2,
                                               class GGS_location constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_pic_31__38_InstructionList constinArgument2,
                                                      class GGS_location constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 class GGS_pic_31__38_InstructionList & outArgument2,
                                                 class GGS_location & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_bool & outArgument1,
                                                class GGS_pic_31__38_InstructionList & outArgument2,
                                                class GGS_location & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_pic_31__38_InstructionList & outArgument2,
                                                      class GGS_location & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInterruptLocationAtIndex (class GGS_location constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFastReturnAtIndex (class GGS_bool constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_bool & outArgument1,
                                              class GGS_pic_31__38_InstructionList & outArgument2,
                                              class GGS_location & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_bool & outArgument1,
                                             class GGS_pic_31__38_InstructionList & outArgument2,
                                             class GGS_location & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfInterruptLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mFastReturnAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInterruptNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InterruptDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InterruptDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InterruptDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_InterruptDefinitionList ;
  friend class DownEnumerator_pic_31__38_InterruptDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_MacroDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_MacroDefinitionList final {
  public: DownEnumerator_pic_31__38_MacroDefinitionList (const class GGS_pic_31__38_MacroDefinitionList & inList) ;

  public: ~ DownEnumerator_pic_31__38_MacroDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mMacroName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_MacroDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_MacroDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_MacroDefinitionList (const DownEnumerator_pic_31__38_MacroDefinitionList &) = delete ;
  private: DownEnumerator_pic_31__38_MacroDefinitionList & operator = (const DownEnumerator_pic_31__38_MacroDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_MacroDefinitionList final {
  public: UpEnumerator_pic_31__38_MacroDefinitionList (const class GGS_pic_31__38_MacroDefinitionList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_MacroDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mMacroName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_MacroDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_MacroDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_MacroDefinitionList (const UpEnumerator_pic_31__38_MacroDefinitionList &) = delete ;
  private: UpEnumerator_pic_31__38_MacroDefinitionList & operator = (const UpEnumerator_pic_31__38_MacroDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18MacroDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_MacroDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_MacroDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_MacroDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_MacroDefinitionList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_MacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList &) = default ;
  public: GGS_pic_31__38_MacroDefinitionList & operator = (const GGS_pic_31__38_MacroDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_pic_31__38_MacroDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_MacroDefinitionList subList (const int32_t inStart,
                                                       const int32_t inLength,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_MacroDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mMacroName,
                                                 const class GGS_lstringlist & in_mConstantNameList,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_MacroDefinitionList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_MacroDefinitionList extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_MacroDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_MacroDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstringlist & inOperand1,
                                                                                    const class GGS_pic_31__38_InstructionList & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_MacroDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstringlist & inOperand1,
                                                    const class GGS_pic_31__38_InstructionList & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_MacroDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_MacroDefinitionList add_operation (const GGS_pic_31__38_MacroDefinitionList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstringlist constinArgument1,
                                               class GGS_pic_31__38_InstructionList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstringlist constinArgument1,
                                                      class GGS_pic_31__38_InstructionList constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 class GGS_pic_31__38_InstructionList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstringlist & outArgument1,
                                                class GGS_pic_31__38_InstructionList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstringlist & outArgument1,
                                                      class GGS_pic_31__38_InstructionList & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameListAtIndex (class GGS_lstringlist constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMacroNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstringlist & outArgument1,
                                              class GGS_pic_31__38_InstructionList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstringlist & outArgument1,
                                             class GGS_pic_31__38_InstructionList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mConstantNameListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mMacroNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_MacroDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_MacroDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_MacroDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_MacroDefinitionList ;
  friend class DownEnumerator_pic_31__38_MacroDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_RoutineDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_RoutineDefinitionList final {
  public: DownEnumerator_pic_31__38_RoutineDefinitionList (const class GGS_pic_31__38_RoutineDefinitionList & inList) ;

  public: ~ DownEnumerator_pic_31__38_RoutineDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_RoutineDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_RoutineDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_RoutineDefinitionList (const DownEnumerator_pic_31__38_RoutineDefinitionList &) = delete ;
  private: DownEnumerator_pic_31__38_RoutineDefinitionList & operator = (const DownEnumerator_pic_31__38_RoutineDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_RoutineDefinitionList final {
  public: UpEnumerator_pic_31__38_RoutineDefinitionList (const class GGS_pic_31__38_RoutineDefinitionList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_RoutineDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_RoutineDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_RoutineDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_RoutineDefinitionList (const UpEnumerator_pic_31__38_RoutineDefinitionList &) = delete ;
  private: UpEnumerator_pic_31__38_RoutineDefinitionList & operator = (const UpEnumerator_pic_31__38_RoutineDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18RoutineDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RoutineDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_RoutineDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_RoutineDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_RoutineDefinitionList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_RoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList &) = default ;
  public: GGS_pic_31__38_RoutineDefinitionList & operator = (const GGS_pic_31__38_RoutineDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_pic_31__38_RoutineDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_RoutineDefinitionList subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_RoutineDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mRoutineName,
                                                 const class GGS_luint & in_mRequiredBank,
                                                 const class GGS_luint & in_mReturnedBank,
                                                 const class GGS_bool & in_mPreservesBank,
                                                 const class GGS_bool & in_mIsNoReturn,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfRoutineLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_RoutineDefinitionList init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_RoutineDefinitionList extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RoutineDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RoutineDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_luint & inOperand1,
                                                                                      const class GGS_luint & inOperand2,
                                                                                      const class GGS_bool & inOperand3,
                                                                                      const class GGS_bool & inOperand4,
                                                                                      const class GGS_pic_31__38_InstructionList & inOperand5,
                                                                                      const class GGS_location & inOperand6
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_RoutineDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_luint & inOperand1,
                                                    const class GGS_luint & inOperand2,
                                                    const class GGS_bool & inOperand3,
                                                    const class GGS_bool & inOperand4,
                                                    const class GGS_pic_31__38_InstructionList & inOperand5,
                                                    const class GGS_location & inOperand6
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_RoutineDefinitionList add_operation (const GGS_pic_31__38_RoutineDefinitionList & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_luint constinArgument1,
                                               class GGS_luint constinArgument2,
                                               class GGS_bool constinArgument3,
                                               class GGS_bool constinArgument4,
                                               class GGS_pic_31__38_InstructionList constinArgument5,
                                               class GGS_location constinArgument6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_luint constinArgument1,
                                                      class GGS_luint constinArgument2,
                                                      class GGS_bool constinArgument3,
                                                      class GGS_bool constinArgument4,
                                                      class GGS_pic_31__38_InstructionList constinArgument5,
                                                      class GGS_location constinArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_luint & outArgument1,
                                                 class GGS_luint & outArgument2,
                                                 class GGS_bool & outArgument3,
                                                 class GGS_bool & outArgument4,
                                                 class GGS_pic_31__38_InstructionList & outArgument5,
                                                 class GGS_location & outArgument6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_luint & outArgument1,
                                                class GGS_luint & outArgument2,
                                                class GGS_bool & outArgument3,
                                                class GGS_bool & outArgument4,
                                                class GGS_pic_31__38_InstructionList & outArgument5,
                                                class GGS_location & outArgument6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_luint & outArgument1,
                                                      class GGS_luint & outArgument2,
                                                      class GGS_bool & outArgument3,
                                                      class GGS_bool & outArgument4,
                                                      class GGS_pic_31__38_InstructionList & outArgument5,
                                                      class GGS_location & outArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineLocationAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GGS_bool constinArgument0,
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
                                              class GGS_bool & outArgument3,
                                              class GGS_bool & outArgument4,
                                              class GGS_pic_31__38_InstructionList & outArgument5,
                                              class GGS_location & outArgument6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_luint & outArgument1,
                                             class GGS_luint & outArgument2,
                                             class GGS_bool & outArgument3,
                                             class GGS_bool & outArgument4,
                                             class GGS_pic_31__38_InstructionList & outArgument5,
                                             class GGS_location & outArgument6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfRoutineLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsNoReturnAtIndex (const class GGS_uint & constinOperand0,
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

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_RoutineDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_RoutineDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_RoutineDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_RoutineDefinitionList ;
  friend class DownEnumerator_pic_31__38_RoutineDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ;

