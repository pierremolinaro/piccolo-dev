//---------------------------------------------------------------------------*
//                                                                           *
//                             piccolo Project                               *
//                                                                           *
//---------------------------------------------------------------------------*

#include "ipic_generic.h"
#include "utilities/MF_MemoryControl.h"
#include "collections/TC_UniqueSparseArray.h"

//---------------------------------------------------------------------------*
//                                                                           *
//                  I N T E L    H E X    F O R M A T                        *
//                                                                           *
//---------------------------------------------------------------------------*
//                                                                           *
// References:                                                               *
//                                                                           *
//   http://www.kmitl.ac.th/~kswichit%20/illustrate/hex.htm                  *
//   http://en.wikipedia.org/wiki/.hex                                       *
//                                                                           *
//---------------------------------------------------------------------------*
//                                                                           *
// Address prefix example:                                                   *
// :020000041234B3                                                           *
//  |||  ||||  |||                                                           *
//  |||  ||||  ||++-> checksum (2's complement of 03+00+00+04+12+34)         *
//  |||  |||+--+-> 2 bytes of data : 12 34: fix the 16 upper bits of address *
//  |||  |++-> Record type 04                                                *
//  ||+--+-> Address (big endian) : 00 00 (should allways be zero)           *
//  ++-> Data bytes count (2)                                                *
//                                                                           *
// Data line example:                                                        *
//                                                                           *
// :03800000028100FA                                                         *
//  |||  ||||    |||                                                         *
//  |||  ||||    |++-> checksum (2's complement of 03+80+00+00+00+02+81+00)  *
//  |||  |||+----+-> 3 bytes of data : 02, 81, 00                            *
//  |||  |++-> Record type 00                                                *
//  ||+--+-> Address (big endian) : 80 00                                    *
//  ++-> Data bytes count (3)                                                *
//                                                                           *
// End of file example:                                                      *
//                                                                           *
// :00000001FF                                                               *
//  |||  |||||                                                               *
//  |||  |||++-> checksum (2's complement of 00+00+00+01)                    *
//  |||  |++-> Record type 01: end of file                                   *
//  ||+--+-> Address (big endian) : 00 00                                    *
//  ++-> Data bytes count (0)                                                *
//                                                                           *
//---------------------------------------------------------------------------*

static void
emit_04_record (C_String & ioGeneratedCode,
                PMUInt32 & ioBufferHighAddress,
                const PMUInt32 inStartAddress) {
  if (ioBufferHighAddress != (inStartAddress & 0xFFFF0000)) {
    char s [20] ; sprintf (s, ":02000004%04X", inStartAddress >> 16) ;
    ioGeneratedCode << s ;
    PMUInt8 somme = 2 + 4 ;
    somme = (PMUInt8) (somme + ((inStartAddress >> 24) & 255 )) ;
    somme = (PMUInt8) (somme + ((inStartAddress >> 16) & 255 )) ;
    sprintf (s, "%02X", (- somme) & 255) ;
    ioGeneratedCode << s << "\n" ;
    ioBufferHighAddress = (inStartAddress & 0xFFFF0000) ;
  }
}

//---------------------------------------------------------------------------*

static void
emit_data_record (C_String & ioGeneratedCode,
                  PMUInt32 & ioBufferHighAddress,
                  const PMUInt8 inBuffer [16],
                  PMUInt32 & ioBufferEntryCount,
                  const PMUInt32 inCurrentAddress) {
  if (ioBufferEntryCount != 0) {
    const PMUInt32 startAddress = inCurrentAddress - ioBufferEntryCount ;
  //--- Emit 04 record (if needed)
    emit_04_record (ioGeneratedCode, ioBufferHighAddress, startAddress) ;
  //---
    const PMUInt32 startAddressMod16 = startAddress & 0x0000FFFF ;
    char s [20] ; sprintf (s, ":%02X%04X00", ioBufferEntryCount, startAddressMod16) ;
    ioGeneratedCode << s ;
    PMUInt8 somme = (PMUInt8) ioBufferEntryCount ;
    somme = (PMUInt8) (somme + ((startAddressMod16 >> 8) & 255)) ;
    somme = (PMUInt8) (somme + (startAddressMod16 & 255)) ;
    for (PMUInt32 i=0 ; i<ioBufferEntryCount ; i++) {
      const unsigned char c = inBuffer [i] ;
      sprintf (s, "%02X", c) ; ioGeneratedCode << s ;
      somme = (PMUInt8) (somme + c) ;
    }
    sprintf (s, "%02X", (- somme) & 255) ; ioGeneratedCode << s << "\n" ;
    ioBufferEntryCount = 0 ;
  }
}

//---------------------------------------------------------------------------*

static C_String
generate_C_ArrayImplementationFileFromSpareArray (const C_String & inSourceName,
                                                  const TC_UniqueSparseArray <PMUInt8> & inSpareArray) {
  C_String implementationCode ;
  implementationCode << "#include \"" << inSourceName << ".h\"\n\n" ;
  implementationCode.append_C_HyphenLineComment () ;
  TC_UniqueArray <PMUInt32> startAddressArray ;
  TC_UniqueArray <PMUInt32> blockLengthArray ;
//--- Loop
  PMUInt32 currentAddress = 0 ;
  while (inSpareArray.findFirstEntryWithIndex (currentAddress)) {
    C_String currentStream ;
    PMUInt32 currentStreamEntryCount = 0 ;
    startAddressArray.addObject (currentAddress) ;
    while (! inSpareArray.isDefaultObjectAtIndex (currentAddress)) {
      if (currentStreamEntryCount > 0) {
        currentStream << "," ;
      }
      if ((currentStreamEntryCount % 16) == 0) {
        currentStream << "\n  " ;
      }
      currentStream << "0x" ;
      currentStream.appendUnsignedHex2 (inSpareArray.objectAtIndex (currentAddress)) ;
      currentAddress ++ ;
      currentStreamEntryCount ++ ;
    }
    implementationCode << "\n"
                          "static unsigned char gArray_" << cStringWithUnsigned (blockLengthArray.count ()) << " [" << cStringWithUnsigned (currentStreamEntryCount) << "] = {"
                       << currentStream << "\n} ;\n\n" ;
    implementationCode.append_C_HyphenLineComment () ;
    blockLengthArray.addObject (currentStreamEntryCount) ;
  }
//--- Start address array
  implementationCode << "\n"
                        "static unsigned long gBlockStartAddressArray [" << cStringWithUnsigned (startAddressArray.count ()) << "] = {" ;
  for (PMSInt32 i=0 ; i<startAddressArray.count () ; i++) {
    if (i > 0) {
      implementationCode << "," ;
    }
    implementationCode << "\n  0x" ;
    implementationCode.appendUnsignedHex (startAddressArray (i COMMA_HERE)) ;
  }
  implementationCode << "\n} ;\n\n" ;
  implementationCode.append_C_HyphenLineComment () ;
//--- block length array
  implementationCode << "\n"
                        "static unsigned long gBlockLengthArray [" << cStringWithUnsigned (blockLengthArray.count ()) << "] = {" ;
  for (PMSInt32 i=0 ; i<blockLengthArray.count () ; i++) {
    if (i > 0) {
      implementationCode << "," ;
    }
    implementationCode << "\n  " ;
    implementationCode.appendUnsigned (blockLengthArray (i COMMA_HERE)) ;
  }
  implementationCode << "\n} ;\n\n" ;
  implementationCode.append_C_HyphenLineComment () ;
//--- block data array
  implementationCode << "\n"
                        "static unsigned char * gBlockDataArray [" << cStringWithUnsigned (blockLengthArray.count ()) << "] = {" ;
  for (PMSInt32 i=0 ; i<blockLengthArray.count () ; i++) {
    if (i > 0) {
      implementationCode << "," ;
    }
    implementationCode << "\n  gArray_" ;
    implementationCode.appendUnsigned (i) ;
  }
  implementationCode << "\n} ;\n\n" ;
  implementationCode.append_C_HyphenLineComment () ;
//--- routines
  implementationCode << "\n"
                        "unsigned long " << inSourceName << "_blockCount (void) {\n"
                        "  return " << cStringWithUnsigned (blockLengthArray.count ()) << " ;\n"
                        "}\n\n" ;
  implementationCode.append_C_HyphenLineComment () ;
  implementationCode << "\n"
                        "unsigned long " << inSourceName << "_blockStartAddressForIndex (const unsigned long inIndex) {\n"
                        "  return gBlockStartAddressArray [inIndex] ;\n"
                        "}\n\n" ;
  implementationCode.append_C_HyphenLineComment () ;
  implementationCode << "\n"
                        "unsigned long " << inSourceName << "_blockLengthForIndex (const unsigned long inIndex) {\n"
                        "  return gBlockLengthArray [inIndex] ;\n"
                        "}\n\n" ;
  implementationCode.append_C_HyphenLineComment () ;
  implementationCode << "\n"
                        "unsigned char " << inSourceName << "_dataForIndexAndOffset (const unsigned long inIndex,\n"
                        "                                     const unsigned long inOffset) {\n"
                        "  return gBlockDataArray [inIndex] [inOffset] ;\n"
                        "}\n\n" ;
  implementationCode.append_C_HyphenLineComment () ;
//---
  return implementationCode ;
}

//---------------------------------------------------------------------------*

static C_String
generate_C_ArrayHeaderFileFromSpareArray (const C_String & inSourceName,
                                          const TC_UniqueSparseArray <PMUInt8> & /* inSpareArray */) {
  C_String headerCode ;
  headerCode << "#ifdef __cplusplus\n"
                "  extern \"C\" {\n"
                "#endif\n\n" ;
  headerCode.append_C_HyphenLineComment () ;
  headerCode << "\n"
                "unsigned long " << inSourceName << "_blockCount (void) ;\n\n" ;
  headerCode.append_C_HyphenLineComment () ;
  headerCode << "\n"
                "unsigned long " << inSourceName << "_blockStartAddressForIndex (const unsigned long inIndex) ;\n\n" ;
  headerCode.append_C_HyphenLineComment () ;
  headerCode << "\n"
                "unsigned long " << inSourceName << "_blockLengthForIndex (const unsigned long inIndex) ;\n\n" ;
  headerCode.append_C_HyphenLineComment () ;
  headerCode << "\n"
                "unsigned char " << inSourceName << "_dataForIndexAndOffset (const unsigned long inIndex,\n"
                        "                                     const unsigned long inOffset) ;\n\n" ;
  headerCode.append_C_HyphenLineComment () ;
  headerCode << "\n"
                "#ifdef __cplusplus\n"
                "  }\n"
                "#endif\n\n" ;
  headerCode.append_C_HyphenLineComment () ;
//---
  return headerCode ;
}

//---------------------------------------------------------------------------*

static C_String
generateHexCodeFromSpareArray (const TC_UniqueSparseArray <PMUInt8> & inSpareArray) {
  C_String hexCode ;
//--- Header
  hexCode << ":020000040000FA\n" ;
//--- Loop
  PMUInt32 bufferHighAddress = 0 ;
  PMUInt32 address = 0 ;
  bool loop = true ;
  while (loop && inSpareArray.findFirstEntryWithIndex (address)) {
    // const PMUInt32 startAddress = address ;
  //--- Emit data
    PMUInt8 buffer [16] ;
    PMUInt32 bufferEntryCount = 0 ;
    do{
      buffer [bufferEntryCount] = inSpareArray.objectAtIndex (address) ;
      bufferEntryCount ++ ;
      address ++ ;
      if (bufferEntryCount == 16) {
        emit_data_record (hexCode, bufferHighAddress, buffer, bufferEntryCount, address) ;
      }
    }while ((address != 0) && ! inSpareArray.isDefaultObjectAtIndex (address)) ;
    emit_data_record (hexCode, bufferHighAddress, buffer, bufferEntryCount, address) ;
    // printf ("INTERVAL: [0x%X, 0x%X]\n", startAddress, address - 1) ;
    loop = address != 0 ;
  }
//--- End
  hexCode << ":00000001FF\n" ;
//---
  return hexCode ;
}

//---------------------------------------------------------------------------*

static TC_UniqueSparseArray <PMUInt8> gSparseArray (0) ;
static PMUInt32 gCurrentAddress = 0 ;

//---------------------------------------------------------------------------*

void routine_setEmitAddress (C_Compiler & /* inLexique */,
                             const GGS_uint inAddress
                             COMMA_UNUSED_LOCATION_ARGS) {
  gCurrentAddress = inAddress.uintValue () ;
}

//---------------------------------------------------------------------------*

void routine_currentEmitAddress (C_Compiler & /* inLexique */,
                                 GGS_uint & outAddress
                             COMMA_UNUSED_LOCATION_ARGS) {
  outAddress = GGS_uint (true, gCurrentAddress) ;
}

//---------------------------------------------------------------------------*

void routine_emitCode (C_Compiler & inLexique,
                       const GGS_uint inCode
                       COMMA_LOCATION_ARGS) {
  if (inCode.uintValue () > 0xFFFF) {
    C_String errorMessage ;
    errorMessage << "Internal error: code (" << cStringWithUnsigned (inCode.uintValue ()) << ") greater than 2**16-1" ;
    inLexique.onTheFlySemanticError (errorMessage COMMA_THERE) ;
  }
  const unsigned char lowByte = (unsigned char) (inCode.uintValue () & 255) ;
  const unsigned char highByte = (unsigned char) ((inCode.uintValue () >> 8) & 255) ;
//--- Low Byte
  gSparseArray.setObjectAtIndex (lowByte, gCurrentAddress) ;
  if (gSparseArray.isDefaultObjectAtIndex (gCurrentAddress)) {
    C_String errorMessage ;
    errorMessage << "Internal error: still default object at index " << cStringWithUnsigned (gCurrentAddress) ;
    inLexique.onTheFlySemanticError (errorMessage COMMA_THERE) ;
  }
  gCurrentAddress ++ ;
//--- High Byte
  gSparseArray.setObjectAtIndex (highByte, gCurrentAddress) ;
  if (gSparseArray.isDefaultObjectAtIndex (gCurrentAddress)) {
    C_String errorMessage ;
    errorMessage << "Internal error: still default object at index " << cStringWithUnsigned (gCurrentAddress) ;
    inLexique.onTheFlySemanticError (errorMessage COMMA_THERE) ;
  }
  gCurrentAddress ++ ;
}

//---------------------------------------------------------------------------*

void routine_emitByte (C_Compiler & inLexique,
                       const GGS_uint inCode
                       COMMA_LOCATION_ARGS) {
  if (inCode.uintValue () > 0xFF) {
    C_String errorMessage ;
    errorMessage << "Internal error: code (" << cStringWithUnsigned (inCode.uintValue ()) << ") greater than 255" ;
    inLexique.onTheFlySemanticError (errorMessage COMMA_THERE) ;
  }
//---
  gSparseArray.setObjectAtIndex ((unsigned char) (inCode.uintValue () & 255), gCurrentAddress) ;
  if (gSparseArray.isDefaultObjectAtIndex (gCurrentAddress)) {
    C_String errorMessage ;
    errorMessage << "Internal error: still default object at index " << cStringWithUnsigned (gCurrentAddress) ;
    inLexique.onTheFlySemanticError (errorMessage COMMA_THERE) ;
  }
  gCurrentAddress ++ ;
}

//---------------------------------------------------------------------------*

void routine_getGeneratedContents (C_Compiler & /* inLexique */,
                                   GGS_string & outHexFileContents
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outHexFileContents = GGS_string (true, generateHexCodeFromSpareArray (gSparseArray)) ;
}

//---------------------------------------------------------------------------*

void routine_get_C_ArrayImplementation (C_Compiler & /* inLexique */,
                                        GGS_string inSourceName,
                                        GGS_string & outHexFileContents
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outHexFileContents = GGS_string (true, generate_C_ArrayImplementationFileFromSpareArray (inSourceName.string (), gSparseArray)) ;
}

//---------------------------------------------------------------------------*

void routine_get_C_ArrayHeader (C_Compiler & /* inLexique */,
                                GGS_string inSourceName,
                                GGS_string & outHexFileContents
                                COMMA_UNUSED_LOCATION_ARGS) {
  outHexFileContents = GGS_string (true, generate_C_ArrayHeaderFileFromSpareArray (inSourceName.string (), gSparseArray)) ;
}

//---------------------------------------------------------------------------*

