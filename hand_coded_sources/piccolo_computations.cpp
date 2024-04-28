//---------------------------------------------------------------------------*
//                                                                           *
//                             piccolo Project                               *
//                                                                           *
//---------------------------------------------------------------------------*

#include "intermediate_generic.h"
#include "MF_MemoryControl.h"
#include "TC_UniqueSparseArray.h"
#include "Compiler.h"
#include "PrologueEpilogue.h"

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
//  ||+--+-> Address (big endian) : 00 00 (should always be zero)            *
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
emit_04_record (String & ioGeneratedCode,
                uint32_t & ioBufferHighAddress,
                const uint32_t inStartAddress) {
  if (ioBufferHighAddress != (inStartAddress & 0xFFFF0000)) {
    char s [20] ; snprintf (s, 20, ":02000004%04X", inStartAddress >> 16) ;
    ioGeneratedCode.appendString (s) ;
    uint8_t somme = 2 + 4 ;
    somme = (uint8_t) (somme + ((inStartAddress >> 24) & 255 )) ;
    somme = (uint8_t) (somme + ((inStartAddress >> 16) & 255 )) ;
    snprintf (s, 20, "%02X", (- somme) & 255) ;
    ioGeneratedCode.appendString (s) ;
    ioGeneratedCode.appendString ("\n") ;
    ioBufferHighAddress = (inStartAddress & 0xFFFF0000) ;
  }
}

//---------------------------------------------------------------------------*

static void
emit_data_record (String & ioGeneratedCode,
                  uint32_t & ioBufferHighAddress,
                  const uint8_t inBuffer [16],
                  uint32_t & ioBufferEntryCount,
                  const uint32_t inCurrentAddress) {
  if (ioBufferEntryCount != 0) {
    const uint32_t startAddress = inCurrentAddress - ioBufferEntryCount ;
  //--- Emit 04 record (if needed)
    emit_04_record (ioGeneratedCode, ioBufferHighAddress, startAddress) ;
  //---
    const uint32_t startAddressMod16 = startAddress & 0x0000FFFF ;
    char s [20] ; snprintf (s, 20, ":%02X%04X00", ioBufferEntryCount, startAddressMod16) ;
    ioGeneratedCode.appendString (s) ;
    uint8_t somme = (uint8_t) (ioBufferEntryCount & 255) ;
    somme = (uint8_t) (somme + ((startAddressMod16 >> 8) & 255)) ;
    somme = (uint8_t) (somme + (startAddressMod16 & 255)) ;
    for (uint32_t i=0 ; i<ioBufferEntryCount ; i++) {
      const unsigned char c = inBuffer [i] ;
      snprintf (s, 20, "%02X", c) ; ioGeneratedCode.appendString (s) ;
      somme = (uint8_t) (somme + c) ;
    }
    snprintf (s, 20, "%02X", (- somme) & 255) ;
    ioGeneratedCode.appendString (s) ;
    ioGeneratedCode.appendString ("\n") ;
    ioBufferEntryCount = 0 ;
  }
}

//---------------------------------------------------------------------------*

static String
generate_C_ArrayImplementationFileFromSpareArray (const String & inSourceName,
                                                  const TC_UniqueSparseArray <uint8_t> & inSpareArray) {
  String implementationCode ;
  implementationCode.appendString ("#include \"") ;
  implementationCode.appendString (inSourceName) ;
  implementationCode.appendString (".h\"\n\n") ;
  implementationCode.append_C_HyphenLineComment () ;
  TC_UniqueArray <uint32_t> startAddressArray ;
  TC_UniqueArray <uint32_t> blockLengthArray ;
//--- Loop
  uint32_t currentAddress = 0 ;
  while (inSpareArray.findFirstEntryWithIndex (currentAddress)) {
    String currentStream ;
    uint32_t currentStreamEntryCount = 0 ;
    startAddressArray.appendObject (currentAddress) ;
    while (! inSpareArray.isDefaultObjectAtIndex (currentAddress)) {
      if (currentStreamEntryCount > 0) {
        currentStream.appendString (",") ;
      }
      if ((currentStreamEntryCount % 16) == 0) {
        currentStream.appendString ("\n  ") ;
      }
      currentStream.appendString ("0x") ;
      currentStream.appendUnsignedHex2 (inSpareArray.objectAtIndex (currentAddress)) ;
      currentAddress ++ ;
      currentStreamEntryCount ++ ;
    }
    implementationCode.appendString ("\n"
                                     "static unsigned char gArray_") ;
    implementationCode.appendSigned (blockLengthArray.count ()) ;
    implementationCode.appendString (" [") ;
    implementationCode.appendUnsigned (currentStreamEntryCount) ;
    implementationCode.appendString ("] = {") ;
    implementationCode.appendString (currentStream) ;
    implementationCode.appendString ("\n} ;\n\n") ;
    implementationCode.append_C_HyphenLineComment () ;
    blockLengthArray.appendObject (currentStreamEntryCount) ;
  }
//--- Start address array
  implementationCode.appendString ("\n"
                                   "static unsigned long gBlockStartAddressArray [") ;
  implementationCode.appendSigned (startAddressArray.count ()) ;
  implementationCode.appendString ("] = {") ;
  for (int32_t i=0 ; i<startAddressArray.count () ; i++) {
    if (i > 0) {
      implementationCode.appendString (",") ;
    }
    implementationCode.appendString ("\n  0x") ;
    implementationCode.appendUnsignedHex (startAddressArray (i COMMA_HERE)) ;
  }
  implementationCode.appendString ("\n} ;\n\n") ;
  implementationCode.append_C_HyphenLineComment () ;
//--- block length array
  implementationCode.appendString ("\n" "static unsigned long gBlockLengthArray [") ;
  implementationCode.appendSigned (blockLengthArray.count ()) ;
  implementationCode.appendString ("] = {") ;
  for (int32_t i=0 ; i<blockLengthArray.count () ; i++) {
    if (i > 0) {
      implementationCode.appendString (",") ;
    }
    implementationCode.appendString ("\n  ") ;
    implementationCode.appendUnsigned (blockLengthArray (i COMMA_HERE)) ;
  }
  implementationCode.appendString ("\n} ;\n\n") ;
  implementationCode.append_C_HyphenLineComment () ;
//--- block data array
  implementationCode.appendString ("\n" "static unsigned char * gBlockDataArray [") ;
  implementationCode.appendSigned (blockLengthArray.count ()) ;
  implementationCode.appendString ("] = {") ;
  for (int32_t i=0 ; i<blockLengthArray.count () ; i++) {
    if (i > 0) {
      implementationCode.appendString (",") ;
    }
    implementationCode.appendString ("\n  gArray_") ;
    implementationCode.appendSigned (i) ;
  }
  implementationCode.appendString ("\n} ;\n\n") ;
  implementationCode.append_C_HyphenLineComment () ;
//--- routines
  implementationCode.appendString ("\n" "unsigned long ") ;
  implementationCode.appendString (inSourceName) ;
  implementationCode.appendString ("_blockCount (void) {\n"  "  return ") ;
  implementationCode.appendSigned (blockLengthArray.count ()) ;
  implementationCode.appendString (" ;\n"  "}\n\n") ;
  implementationCode.append_C_HyphenLineComment () ;
  implementationCode.appendString ("\n"  "unsigned long ") ;
  implementationCode.appendString (inSourceName) ;
  implementationCode.appendString ("_blockStartAddressForIndex (const unsigned long inIndex) {\n"
                                   "  return gBlockStartAddressArray [inIndex] ;\n"
                                   "}\n\n") ;
  implementationCode.append_C_HyphenLineComment () ;
  implementationCode.appendString ("\n" "unsigned long ") ;
  implementationCode.appendString (inSourceName) ;
  implementationCode.appendString ("_blockLengthForIndex (const unsigned long inIndex) {\n"
                                   "  return gBlockLengthArray [inIndex] ;\n"
                                   "}\n\n") ;
  implementationCode.append_C_HyphenLineComment () ;
  implementationCode.appendString ("\n" "unsigned char ") ;
  implementationCode.appendString (inSourceName) ;
  implementationCode.appendString ("_dataForIndexAndOffset (const unsigned long inIndex,\n"
                                   "                                     const unsigned long inOffset) {\n"
                                   "  return gBlockDataArray [inIndex] [inOffset] ;\n"
                                   "}\n\n") ;
  implementationCode.append_C_HyphenLineComment () ;
//---
  return implementationCode ;
}

//---------------------------------------------------------------------------*

static String
generate_C_ArrayHeaderFileFromSpareArray (const String & inSourceName,
                                          const TC_UniqueSparseArray <uint8_t> & /* inSpareArray */) {
  String headerCode ;
  headerCode.appendString ("#ifdef __cplusplus\n"
                           "  extern \"C\" {\n"
                           "#endif\n\n") ;
  headerCode.append_C_HyphenLineComment () ;
  headerCode.appendString ("\n" "unsigned long ") ;
  headerCode.appendString (inSourceName) ;
  headerCode.appendString ("_blockCount (void) ;\n\n") ;
  headerCode.append_C_HyphenLineComment () ;
  headerCode.appendString ("\n" "unsigned long ") ;
  headerCode.appendString (inSourceName) ;
  headerCode.appendString ("_blockStartAddressForIndex (const unsigned long inIndex) ;\n\n") ;
  headerCode.append_C_HyphenLineComment () ;
  headerCode.appendString ("\n" "unsigned long ") ;
  headerCode.appendString (inSourceName) ;
  headerCode.appendString ("_blockLengthForIndex (const unsigned long inIndex) ;\n\n") ;
  headerCode.append_C_HyphenLineComment () ;
  headerCode.appendString ("\n" "unsigned char ") ;
  headerCode.appendString (inSourceName) ;
  headerCode.appendString ("_dataForIndexAndOffset (const unsigned long inIndex,\n"
                           "                                     const unsigned long inOffset) ;\n\n") ;
  headerCode.append_C_HyphenLineComment () ;
  headerCode.appendString ("\n"
                           "#ifdef __cplusplus\n"
                           "  }\n"
                           "#endif\n\n") ;
  headerCode.append_C_HyphenLineComment () ;
//---
  return headerCode ;
}

//---------------------------------------------------------------------------*

static String
generateHexCodeFromSpareArray (const TC_UniqueSparseArray <uint8_t> & inSpareArray) {
  String hexCode ;
//--- Header
  hexCode.appendString (":020000040000FA\n") ;
//--- Loop
  uint32_t bufferHighAddress = 0 ;
  uint32_t address = 0 ;
  bool loop = true ;
  while (loop && inSpareArray.findFirstEntryWithIndex (address)) {
    // const uint32_t startAddress = address ;
  //--- Emit data
    uint8_t buffer [16] ;
    uint32_t bufferEntryCount = 0 ;
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
  hexCode.appendString (":00000001FF\n") ;
//---
  return hexCode ;
}

//---------------------------------------------------------------------------*

static TC_UniqueSparseArray <uint8_t> gSparseArray (0) ;
static uint32_t gCurrentAddress = 0 ;

//---------------------------------------------------------------------------*

void routine_initCodeGenerator (Compiler * /* inCompiler */
                                COMMA_UNUSED_LOCATION_ARGS) {
  gSparseArray.free () ;
}

//---------------------------------------------------------------------------*

static void freeSparseArray (void) {
  gSparseArray.free () ;
}

//---------------------------------------------------------------------------*

PrologueEpilogue freeSparseArrayOnEpilogue (NULL, freeSparseArray) ;

//---------------------------------------------------------------------------*

void routine_setEmitAddress_3F_ (const GGS_uint inAddress,
                             Compiler * /* inCompiler */
                             COMMA_UNUSED_LOCATION_ARGS) {
  gCurrentAddress = inAddress.uintValue () ;
}

//---------------------------------------------------------------------------*

void routine_currentEmitAddress_21_ (GGS_uint & outAddress,
                                 Compiler * /* inCompiler */
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outAddress = GGS_uint (gCurrentAddress) ;
}

//---------------------------------------------------------------------------*

void routine_emitCode_3F_ (const GGS_uint inCode,
                       Compiler * inCompiler
                       COMMA_LOCATION_ARGS) {
  if (inCode.uintValue () > 0xFFFF) {
    String errorMessage ;
    errorMessage.appendString ("Internal error: code (") ;
    errorMessage.appendUnsigned (inCode.uintValue ()) ;
    errorMessage.appendString (") greater than 2**16-1") ;
    inCompiler->onTheFlySemanticError (errorMessage COMMA_THERE) ;
  }
  const unsigned char lowByte = (unsigned char) (inCode.uintValue () & 255) ;
  const unsigned char highByte = (unsigned char) ((inCode.uintValue () >> 8) & 255) ;
//--- Low Byte
  gSparseArray.setObjectAtIndex (lowByte, gCurrentAddress) ;
  if (gSparseArray.isDefaultObjectAtIndex (gCurrentAddress)) {
    String errorMessage ;
    errorMessage.appendString ("Internal error: still default object at index ") ;
    errorMessage.appendUnsigned (gCurrentAddress) ;
    inCompiler->onTheFlySemanticError (errorMessage COMMA_THERE) ;
  }
  gCurrentAddress ++ ;
//--- High Byte
  gSparseArray.setObjectAtIndex (highByte, gCurrentAddress) ;
  if (gSparseArray.isDefaultObjectAtIndex (gCurrentAddress)) {
    String errorMessage ;
    errorMessage.appendString ("Internal error: still default object at index ") ;
    errorMessage.appendUnsigned (gCurrentAddress) ;
    inCompiler->onTheFlySemanticError (errorMessage COMMA_THERE) ;
  }
  gCurrentAddress ++ ;
}

//---------------------------------------------------------------------------*

void routine_emitByte_3F_ (const GGS_uint inCode,
                       Compiler * inCompiler
                       COMMA_LOCATION_ARGS) {
  if (inCode.uintValue () > 0xFF) {
    String errorMessage ;
    errorMessage.appendString ("Internal error: code (") ;
    errorMessage.appendUnsigned (inCode.uintValue ()) ;
    errorMessage.appendString (") greater than 255") ;
    inCompiler->onTheFlySemanticError (errorMessage COMMA_THERE) ;
  }
//---
  gSparseArray.setObjectAtIndex ((unsigned char) (inCode.uintValue () & 255), gCurrentAddress) ;
  if (gSparseArray.isDefaultObjectAtIndex (gCurrentAddress)) {
    String errorMessage ;
    errorMessage.appendString ("Internal error: still default object at index ") ;
    errorMessage.appendUnsigned (gCurrentAddress) ;
    inCompiler->onTheFlySemanticError (errorMessage COMMA_THERE) ;
  }
  gCurrentAddress ++ ;
}

//---------------------------------------------------------------------------*

void routine_getGeneratedContents_21_ (GGS_string & outHexFileContents,
                                   Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outHexFileContents = GGS_string (generateHexCodeFromSpareArray (gSparseArray)) ;
}

//---------------------------------------------------------------------------*

void routine_get_5F_C_5F_ArrayImplementation_3F__21_ (const GGS_string inSourceName,
                                              GGS_string & outHexFileContents,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outHexFileContents = GGS_string (generate_C_ArrayImplementationFileFromSpareArray (inSourceName.stringValue (), gSparseArray)) ;
}

//---------------------------------------------------------------------------*

void routine_get_5F_C_5F_ArrayHeader_3F__21_ (GGS_string inSourceName,
                                      GGS_string & outHexFileContents,
                                      Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outHexFileContents = GGS_string (generate_C_ArrayHeaderFileFromSpareArray (inSourceName.stringValue (), gSparseArray)) ;
}

//---------------------------------------------------------------------------*

