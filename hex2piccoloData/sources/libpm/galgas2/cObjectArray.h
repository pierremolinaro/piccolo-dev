//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  capCollectionElementArray                                                                                          *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2010, ..., 2010 Pierre Molinaro.                                                                     *
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

#ifndef C_OBJECT_ARRAY_CLASS_DEFINED
#define C_OBJECT_ARRAY_CLASS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "C_SharedObject.h"

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_object ;
class GALGAS_objectlist ;
class Compiler ;

//---------------------------------------------------------------------------------------------------------------------*

class cObjectArray {
//--- Default constructor
  public : cObjectArray (const GALGAS_objectlist & inObjectList,
                         Compiler * inCompiler
                         COMMA_LOCATION_ARGS) ;

//--- Virtual destructor
  public : virtual ~ cObjectArray (void) ;

//--- No copy
  private : cObjectArray (const cObjectArray & inSource) ;
  private : cObjectArray & operator = (const cObjectArray & inSource) ;

//--- Object count
  public : inline uint32_t count (void) const { return mCount ; }

//--- Object at index
  public : GALGAS_object objectAtIndex (const uint32_t inIndex COMMA_LOCATION_ARGS) const ;

//--- Attributes
  private : GALGAS_object * mArray ;
  private : uint32_t mCount ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
