//--------------------------------------------------------------------------------------------------
//
//  'IndexingDictionary': dictionary for indexing soures                                        
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2010, ..., 2023 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "M_machine.h"

//--------------------------------------------------------------------------------------------------

class String ;
class cIndexEntryNode ;

//--------------------------------------------------------------------------------------------------
//                 IndexingDictionary
//--------------------------------------------------------------------------------------------------

class IndexingDictionary final {

//--- Constructor
  public: IndexingDictionary (void) ;

//--- Destructor
  public: ~ IndexingDictionary (void) ;

//--- No copy
  private: IndexingDictionary (const IndexingDictionary &) = delete ;
  private: IndexingDictionary & operator = (const IndexingDictionary &) = delete ;

//--- Add indexed entry
  public: void addIndexedKey (const uint32_t inIndexingKind,
                               const String & inIndexedKey,
                               const String & inSourceFilePath,
                               const uint32_t inTokenLineInSource,
                               const uint32_t inTokenLocationInSource,
                               const uint32_t inTokenLengthInSource) ;

//--- Generate Index file (in a plist format)
  public: void generateIndexFile (const String & inOutputIndexFilePath) const ;

//--- Internal private method
  private: cIndexEntryNode * findOrAddEntry (cIndexEntryNode * & ioRootPtr,
                                              const String & inKey,
                                              bool & ioExtension) ;

//--- Private attributes
  private: cIndexEntryNode * mEntryRoot ;
} ;

//--------------------------------------------------------------------------------------------------
