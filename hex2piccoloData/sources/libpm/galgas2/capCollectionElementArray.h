//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  capCollectionElementArray                                                                                          *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2010, ..., 2016 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef CAP_COLLECTION_OBJECT_ARRAY_CLASS_DEFINED
#define CAP_COLLECTION_OBJECT_ARRAY_CLASS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/capCollectionElement.h"

//---------------------------------------------------------------------------------------------------------------------*

class Compiler ;

//---------------------------------------------------------------------------------------------------------------------*

class capCollectionElementArray {
//--- Default constructor
  public : capCollectionElementArray (void) ;

//--- Default constructor
  public : capCollectionElementArray (const uint32_t inCapacity) ;

//--- Virtual destructor
  public : virtual ~ capCollectionElementArray (void) ;

//--- Handle copy
  public : capCollectionElementArray (const capCollectionElementArray & inSource) ;
  public : capCollectionElementArray & operator = (const capCollectionElementArray & inSource) ;

//--- Set capacity
  public : void setCapacity (const uint32_t inNewCapacity) ;

//--- Append Object
  public : void appendObject (const capCollectionElement & inObject) ;

  public : void insertObjectAtIndex (const capCollectionElement & inObject,
                                     const uint32_t inInsertionIndex,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public : void removeObjectAtIndex (capCollectionElement & outObject,
                                     const uint32_t inInsertionIndex,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public : void removeFirstObject (capCollectionElement & outObject,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public : void readFirstObject (capCollectionElement & outObject,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

  public : void removeLastObject (capCollectionElement & outObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public : void readLastObject (capCollectionElement & outObject,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public : void replaceObjectAtIndex (const capCollectionElement & inObject,
                                      const uint32_t inIndex
                                      COMMA_LOCATION_ARGS) ;

  public : void appendObjects (const capCollectionElementArray inObjects) ; // Passing using copy constructor

//--- Get object
  public : capCollectionElement objectAtIndex (const uint32_t inIndex COMMA_LOCATION_ARGS) const ;

//--- Get object pointer for writing (perform implicitly an "insulate" action)
  public : cCollectionElement * uniquelyReferencedPointerAtIndex (const uint32_t inIndex
                                                                  COMMA_LOCATION_ARGS) ;

//--- Get object pointer for reading
  public : const cCollectionElement * pointerAtIndexForReadAccess (const uint32_t inIndex
                                                                   COMMA_LOCATION_ARGS) const ;

//--- Get count
  public : uint32_t count (void) const ;

//--- Get count
  public : uint32_t capacity (void) const ;

//--- Remove an object
  public : void removeObjectAtIndex (const uint32_t inIndex) ;

//--- Prepend object (insert them from index 0)
  public : void predendObject (const capCollectionElement & inObject) ;

//--- Remove all objects (without changing capacity)
  public : void removeAllObjects (void) ;

//--- Sublists
  public : void subListToIndex (capCollectionElementArray & outSubList,
                                const uint32_t inIndex,
                                bool & outOk,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public : void subListWithRange (capCollectionElementArray & ioSubList,
                                  const uint32_t inStartIndex,
                                  const uint32_t inLength,
                                  bool & outOk,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const ;

  public : void subListFromIndex (capCollectionElementArray & ioSubList,
                                  const uint32_t inIndex,
                                  bool & outOk,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const ;

//--- Compare
  public : typeComparisonResult compareCollectionElementArray (const capCollectionElementArray & inOperand) const ;

//--- Description
  public : void description (C_String & ioString,
                             const int32_t inIndentation) const ;

//--- Internal
  private : void insulateOrCreate (void) ;

//--- Property
  private : class capCollectionRoot * mSharedRoot ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
