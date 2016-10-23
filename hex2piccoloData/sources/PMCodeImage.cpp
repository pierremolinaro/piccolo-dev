/*
 *  PMCodeImage.cpp
 *
 */

//---------------------------------------------------------------------------*

// http://en.wikipedia.org/wiki/.hex

//---------------------------------------------------------------------------*

#include "PMCodeImage.h"
#include "MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#include <stdio.h>
#include <string.h>

//---------------------------------------------------------------------------*

PMCodeImage::PMCodeImage (const char * inFileName) :
mImage (NULL),
mDefinition (NULL),
mAllocatedSize (0),
mBaseAddress (0),
mFirstAddress (0),
mLastAddress (0),
mDefaultValue (0),
mDefaultValueDefined (false) {
  FILE * f = fopen (inFileName, "rt") ;
  if (f == NULL) {
    char * s = new char [100] ;
    strcpy (s, "cannot open s-record file") ;
    throw s ;
  }
  const char * extension = strrchr (inFileName, '.') ;
  if (extension == NULL) {
    printf ("** ERROR: input file '%s' has no extension **\n", inFileName) ;
  }else if (strcmp (extension, ".symb") == 0) {
    read_symbols_in_symbsrec_file (f) ;
    read_s_records_in_srec_file (f) ;
  }else if (strcmp (extension, ".mot") == 0) {
    read_s_records_in_srec_file (f) ;
  }else if (strcmp (extension, ".hex") == 0) {
    read_hex_file (f) ;
  }else{
    printf ("** ERROR: unhandled extension (%s) for input file **\n", extension) ;
  }
  fclose (f) ;
}

//---------------------------------------------------------------------------*

PMCodeImage::PMCodeImage (const char * inFileName,
                          const uint8_t inDefaultValue) :
mImage (NULL),
mDefinition (NULL),
mAllocatedSize (0),
mBaseAddress (0),
mFirstAddress (0),
mLastAddress (0),
mDefaultValue (inDefaultValue),
mDefaultValueDefined (true) {
  FILE * f = fopen (inFileName, "rt") ;
  if (f == NULL) {
    char * s = new char [100] ;
    strcpy (s, "cannot open s-record file") ;
    throw s ;
  }
  const char * extension = strrchr (inFileName, '.') ;
  if (extension == NULL) {
    printf ("** ERROR: input file '%s' has no extension **\n", inFileName) ;
  }else if (strcmp (extension, ".symb") == 0) {
    read_symbols_in_symbsrec_file (f) ;
    read_s_records_in_srec_file (f) ;
  }else if (strcmp (extension, ".mot") == 0) {
    read_s_records_in_srec_file (f) ;
  }else if (strcmp (extension, ".hex") == 0) {
    read_hex_file (f) ;
  }else{
    printf ("** ERROR: unhandled extension (%s) for input file **\n", extension) ;
  }
  fclose (f) ;
}

//---------------------------------------------------------------------------*

PMCodeImage::~PMCodeImage (void) {
  macroMyDeletePODArray (mImage) ;
  macroMyDeletePODArray (mDefinition) ;
}

//---------------------------------------------------------------------------*

void PMCodeImage::defineDefaultValue (const uint8_t inDefaultValue) {
  mDefaultValue = inDefaultValue ;
  mDefaultValueDefined = true ;
}

//---------------------------------------------------------------------------*

void PMCodeImage::dumpCodeImage (const char * inLinePrefix) const {
  if (mDefinition == NULL) {
    printf (" Empty code\n") ;
  }else{
    const uint32_t start = (mFirstAddress / 16) * 16 ;
    printf ("%s  Address:  0 1  2 3  4 5  6 7  8 9  A B  C D  E F\n", inLinePrefix) ;
    uint32_t idx = start ;
    while (idx <= mLastAddress) {
      bool empty = true ;
      for (uint32_t i=0 ; (i<16) && empty ; i++) {
        empty = ! byteIsDefinedAtAddress (idx + i) ;
      }
      if (! empty) {
        printf ("%s%04X_%04X:", inLinePrefix, idx >> 16, idx & 0xFFFF) ;
        for (uint32_t i=0 ; i<16 ; i++) {
          if ((i & 1) == 0) {
            printf (" ") ;
          }
          if (byteIsDefinedAtAddress (idx + i)) {
            printf ("%02hhX", byteAtAddress (idx + i)) ;
          }else{
            printf ("??") ;
          }
        }
        printf ("\n") ;
      }
      idx += 16 ;
    }
  }
}

//---------------------------------------------------------------------------*

static const uint32_t kAllocationSize = 4096 ;

//---------------------------------------------------------------------------*

void PMCodeImage::enterByteAtAddress (const uint8_t inByte,
                                      const uint32_t inAddress,
                                      const uint32_t inSourceLine) {
  // printf ("ENTER 0x%02hx AT %X\n", inByte, inAddress) ;
//--- Reallocate ?
  if (mImage == NULL) {
    mBaseAddress = (inAddress / kAllocationSize) * kAllocationSize ;
    mAllocatedSize = kAllocationSize ;
    mFirstAddress = inAddress ;
    mLastAddress = inAddress ;
    macroMyNewPODArray (mImage, uint8_t, mAllocatedSize) ;
    macroMyNewPODArray (mDefinition, bool, mAllocatedSize) ;
    for (uint32_t i=0 ; i<mAllocatedSize ; i++) {
      mDefinition [i] = false ;
    }
  }else if (inAddress >= (mBaseAddress + mAllocatedSize)) { // Extend at end
    const uint32_t newNeededSize = ((inAddress - mBaseAddress) / kAllocationSize + 1) * kAllocationSize ;
    macroMyReallocPODArray (mImage, uint8_t, newNeededSize) ;
    macroMyReallocPODArray (mDefinition, bool, newNeededSize) ;
/*    uint8_t * newImage = new uint8_t [newNeededSize] ;
    bool * newDefinition = new bool [newNeededSize] ;
    for (uint32_t i=0 ; i<mAllocatedSize ; i++) {
      newImage [i] = mImage [i] ;
      newDefinition [i] = mDefinition [i] ;
    }*/
    for (uint32_t i=mAllocatedSize ; i<newNeededSize ; i++) {
      mDefinition [i] = false ;
    }
//    delete [] mImage ; mImage = newImage ; newImage = NULL ;
//    delete [] mDefinition ; mDefinition = newDefinition ; newDefinition = NULL ;
    mAllocatedSize = newNeededSize ;
  }else if (inAddress < mBaseAddress) { // Extend at begining
    const uint32_t newBaseAddress = (inAddress / kAllocationSize) * kAllocationSize ;
    const uint32_t prependSize = mBaseAddress - newBaseAddress ;
    const uint32_t newNeededSize = mAllocatedSize + prependSize ;
    uint8_t * newImage = NULL ;
    macroMyNewPODArray (newImage, uint8_t, newNeededSize) ;
    bool * newDefinition = NULL ;
    macroMyNewPODArray (newDefinition, bool, newNeededSize) ;
    for (uint32_t i=0 ; i<mAllocatedSize ; i++) {
      newImage [i + prependSize] = mImage [i] ;
      newDefinition [i + prependSize] = mDefinition [i] ;
    }
    for (uint32_t i=0 ; i<prependSize ; i++) {
      newDefinition [i] = false ;
    }
    macroMyDeletePODArray (mImage) ; mImage = newImage ; newImage = NULL ;
    macroMyDeletePODArray (mDefinition) ; mDefinition = newDefinition ; newDefinition = NULL ;
    mAllocatedSize = newNeededSize ;
  }
//--- Enter
  if (mDefinition [inAddress - mBaseAddress]) {
    char * s = new char [100] ;
    sprintf (s, "Byte already entered in code image at address 0x%X (source line %u)", inAddress, inSourceLine) ;
    throw s ;
  }
  mDefinition [inAddress - mBaseAddress] = true ;
  mImage [inAddress - mBaseAddress] = inByte ;
  if (inAddress < mFirstAddress) {
    mFirstAddress = inAddress ;
  }
  if (inAddress > mLastAddress) {
    mLastAddress = inAddress ;
  }
}

//---------------------------------------------------------------------------*

uint8_t PMCodeImage::byteAtAddress (const uint32_t inAddress) const {
  const uint32_t address = inAddress ;
  uint8_t result = mDefaultValue ;
  if (address < mFirstAddress) {
    char * s = new char [100] ;
    strcpy (s, "Try to read code before first address") ;
    throw s ;
  }else if (address > mLastAddress) {
    if (! mDefaultValueDefined) {
      char * s = new char [100] ;
      sprintf (s, "Try to read code at 0x%X after last address 0x%X", inAddress, mLastAddress) ;
      throw s ;
    }
  }else if (mDefinition [address - mBaseAddress]) {
    result = mImage [address - mBaseAddress] ;
  }else if (! mDefaultValueDefined) {
    char * s = new char [100] ;
    sprintf (s, "Try to read code in undefined address (0x%X)", address) ;
    throw s ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

bool PMCodeImage::byteIsDefinedAtAddress (const uint32_t inAddress) const {
  const uint32_t address = inAddress ;
  bool result = false ;
  if ((address >= mFirstAddress) && (address <= mLastAddress)) {
    result = mDefinition [address - mBaseAddress] ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

int8_t PMCodeImage::sint8_AtAddress (const uint32_t inAddress) const {
  signed char c = (signed char) byteAtAddress (inAddress) ;
  return c ;
}

//---------------------------------------------------------------------------*

int16_t PMCodeImage::sint16BE_AtAddress (const uint32_t inAddress) const {
  short word = byteAtAddress (inAddress) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  return word ;
}

//---------------------------------------------------------------------------*

int16_t PMCodeImage::sint16LE_AtAddress (const uint32_t inAddress) const {
  short word = byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress) ;
  return word ;
}

//---------------------------------------------------------------------------*

uint16_t PMCodeImage::uint16BE_AtAddress (const uint32_t inAddress) const {
  uint16_t word = byteAtAddress (inAddress) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  return word ;
}

//---------------------------------------------------------------------------*

uint16_t PMCodeImage::uint16LE_AtAddress (const uint32_t inAddress) const {
  uint16_t word = byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress) ;
  return word ;
}

//---------------------------------------------------------------------------*

uint32_t PMCodeImage::uint24BE_AtAddress (const uint32_t inAddress) const {
  uint32_t word = byteAtAddress (inAddress) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 2) ;
  return word ;
}

//---------------------------------------------------------------------------*

uint32_t PMCodeImage::uint24LE_AtAddress (const uint32_t inAddress) const {
  uint32_t word = byteAtAddress (inAddress + 2) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress) ;
  return word ;
}

//---------------------------------------------------------------------------*

uint32_t PMCodeImage::uint32BE_AtAddress (const uint32_t inAddress) const {
  uint32_t word = byteAtAddress (inAddress) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 2) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 3) ;
  return word ;
}

//---------------------------------------------------------------------------*

uint32_t PMCodeImage::uint32LE_AtAddress (const uint32_t inAddress) const {
  uint32_t word = byteAtAddress (inAddress + 3) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 2) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress) ;
  return word ;
}

//---------------------------------------------------------------------------*

int32_t PMCodeImage::sint32BE_AtAddress (const uint32_t inAddress) const {
  int32_t word = byteAtAddress (inAddress) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 2) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 3) ;
  return word ;
}

//---------------------------------------------------------------------------*

int32_t PMCodeImage::sint32LE_AtAddress (const uint32_t inAddress) const {
  int32_t word = byteAtAddress (inAddress + 3) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 2) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress) ;
  return word ;
}

//---------------------------------------------------------------------------*

static uint8_t lireChiffre (const char * inString,
                            const uint32_t inIndex,
                            const uint32_t inNumeroLigne,
                            bool & ioOk) {
  uint8_t valeur = 0UL ;
  const char c = inString [inIndex] ;
  if ((c >= '0') && (c <= '9')) {
    valeur = (uint8_t) (c - '0') ;
  }else if ((c >= 'A') && (c <= 'F')) {
    valeur = (uint8_t) (c - 'A' + 10) ;
  }else if ((c >= 'a') && (c <= 'f')) {
    valeur = (uint8_t) (c - 'a' + 10) ;
  }else{
    fprintf (stderr, "Erreur : un chiffre hexa est attendu dans la colonne %u de la ligne %u :\n",
            inIndex + 1, inNumeroLigne) ;
    fprintf (stderr, "%s", inString) ;
    ioOk = false ;
  }
  return valeur ;
}

//---------------------------------------------------------------------------*

static uint8_t
lireOctet (const char * inString,
           const uint32_t inIndex,
           const uint32_t inNumeroLigne,
           uint32_t & io_somme_controle,
           bool & ioOk) {
  uint8_t valeur = lireChiffre (inString, inIndex, inNumeroLigne, ioOk) ;
  if (ioOk) {
    valeur *= 16 ;
    valeur += lireChiffre (inString, inIndex + 1, inNumeroLigne, ioOk) ;
  }
  io_somme_controle += valeur ;
  return valeur ;
}

//---------------------------------------------------------------------------*

static uint32_t
lireDoubleOctet (const char * inString,
                 const uint32_t inIndex,
                 const uint32_t inNumeroLigne,
                 uint32_t & io_somme_controle,
                 bool & ioOk) {
  uint32_t valeur = lireOctet (inString, inIndex, inNumeroLigne, io_somme_controle, ioOk) ;
  if (ioOk) {
    valeur *= 256 ;
    valeur += lireOctet (inString, inIndex + 2, inNumeroLigne, io_somme_controle, ioOk) ;
  }
  return valeur ;
}

//---------------------------------------------------------------------------*

static uint32_t
lireTripleOctet (const char * inString,
                 const uint32_t inIndex,
                 const uint32_t inNumeroLigne,
                 uint32_t & io_somme_controle,
                 bool & ioOk) {
  uint32_t valeur = lireDoubleOctet (inString, inIndex, inNumeroLigne, io_somme_controle, ioOk) ;
  if (ioOk) {
    valeur *= 256 ;
    valeur += lireOctet (inString, inIndex + 4, inNumeroLigne, io_somme_controle, ioOk) ;
  }
  return valeur ;
}

//---------------------------------------------------------------------------*

void PMCodeImage::
read_s_records_in_srec_file (FILE * inFichier) {
//--- Lire le fichier image
  bool ok = true ;
  char line [1000] ;
  uint32_t ligne = 1 ;
  while (fgets (line, 1000, inFichier)) {
    if (line [0] != 'S') {
      fprintf (stderr, "Erreur : la ligne %u ne commence pas par 'S' : %s", ligne, line) ;
      ok = false ;
    }
    switch (line [1]) {
    case '0' : // Ignorer la ligne
    case '8' : // Ignorer la ligne
    case '9' : // Ignorer la ligne
      break ;
    case '1' :
      { uint32_t somme_controle = 0UL ;
        const uint32_t lg = lireOctet (line, 2, ligne, somme_controle, ok) ;
        const uint32_t adresseChargement = lireDoubleOctet (line, 4, ligne, somme_controle, ok) ;
        if (ok) {
          for (uint32_t i=0 ; (i<(lg-3)) && ok ; i++) {
            const uint8_t c = lireOctet (line, 8 + i + i, ligne, somme_controle, ok) ;
            const uint32_t adr = adresseChargement + i ;
            enterByteAtAddress (c, adr, ligne) ;
          }
        }
        uint32_t pipo = 0 ;
        uint32_t somme_lue = 0 ;
        if (ok) {
          somme_lue = lireOctet (line,
                                2 + lg + lg,
                                ligne, pipo, ok) ;
        }
        const uint32_t somme_a_verifier = (~somme_controle) & 255 ;
        if (ok && (somme_lue != somme_a_verifier)) {
          fprintf (stderr, "Erreur de somme de controle a la ligne %u : %s", ligne, line) ;
          ok = false ;
        }
      }
      break ;
    case '2' :
      { uint32_t somme_controle = 0UL ;
        const uint32_t lg = lireOctet (line, 2, ligne, somme_controle, ok) ;
        const uint32_t adresseChargement = lireTripleOctet (line, 4, ligne, somme_controle, ok) ;
        if (ok) {
          for (uint32_t i=0 ; (i<(lg-4)) && ok ; i++) {
            const uint8_t c = lireOctet (line, 10 + i + i, ligne, somme_controle, ok) ;
            const uint32_t adr = adresseChargement + i ;
            enterByteAtAddress (c, adr, ligne) ;
          }
        }
        uint32_t pipo = 0 ;
        uint32_t somme_lue = 0 ;
        if (ok) {
          somme_lue = lireOctet (line,
                                 2 + lg + lg,
                                 ligne, pipo, ok) ;
        }
        const uint32_t somme_a_verifier = (~somme_controle) & 255 ;
        if (ok && (somme_lue != somme_a_verifier)) {
          fprintf (stderr, "Erreur de somme de controle a la ligne %u : %s", ligne, line) ;
          ok = false ;
        }
      }
      break ;
    default :
      fprintf (stderr, "Erreur : S-record inconnu a la ligne %u : %s", ligne, line) ;
      ok = false ;
    }
    ligne ++ ;
  }
}

//---------------------------------------------------------------------------*

void PMCodeImage::
read_symbols_in_symbsrec_file (FILE * inFichier) {
  char line [1000] ;
//--- The first line should begin by "$$"
  bool ok = fgets (line, 1000, inFichier) ;
  ok = ok && (strncmp (line, "$$", 2) == 0) ;
  if (! ok) {
    printf ("** Error: symbsrec file does not begin by '$$' **\n") ;
  }
  bool loop = ok ;
  while (loop && ok) {
    ok = fgets (line, 1000, inFichier) ;
    if (ok) {
      loop = ! (strncmp (line, "$$", 2) == 0) ;
      if (loop) {
        // printf ("[%s]\n", line) ;
        char name [100] = "" ;
        uint32_t address = 0 ;
        sscanf (line, " %s $%X", name, & address) ;
        // printf ("ADDRESS: '%s', ADDRESS: 0x%X\n", name, address) ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

static bool 
ascii2hex (const char inChar,
           const long inLine,
           uint32_t & ioValue) {
  bool ok = true ;
  ioValue <<= 4 ;
  if ((inChar >= '0') && (inChar <= '9')) {
    ioValue += inChar - '0' ;
  }else if ((inChar >= 'A') && (inChar <= 'F')) {
    ioValue += inChar - 'A' + 10 ;
  }else if ((inChar >= 'a') && (inChar <= 'f')) {
    ioValue += inChar - 'a' + 10 ;
  }else{
    printf ("error at line %ld : character is not a hex digit\n", inLine) ;
    ok = false ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
readByte (const char * inText,
          const long inLine,
          long & ioTextIndex,
          uint32_t & outByte,
          uint8_t & ioSum) {
  outByte = 0 ;
  bool ok = ascii2hex (inText [ioTextIndex], inLine, outByte) ;
  ioTextIndex ++ ;
  if (ok) {
    ok = ascii2hex (inText [ioTextIndex], inLine, outByte) ;
    ioTextIndex ++ ;
    ioSum += outByte ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
readWord (const char * inText,
          const long inLine,
          long & ioTextIndex,
          uint32_t & outWord,
          uint8_t & ioSum) {
  uint32_t byte ;
  bool ok = readByte (inText, inLine, ioTextIndex, byte, ioSum) ;
  outWord = byte ;
  if (ok) {
    ok = readByte (inText, inLine, ioTextIndex, byte, ioSum) ;
    outWord <<= 8 ;
    outWord += byte ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

bool PMCodeImage::readHexRecord (FILE * inFile,
                                 uint32_t & ioLine,
                                 uint32_t & outAddressField,
                                 uint32_t & outRecordType,
                                 uint8_t * & outDataField,
                                 uint32_t & outDataFieldLength) {
//  outDataField = new uint8_t [100] ;
  macroMyNewPODArray (outDataField, uint8_t, 100) ;
  outDataFieldLength = 0 ;
  ioLine ++ ;
  uint8_t sum = 0 ;
//--- Read string
  char line [1000] ;
  bool ok = fgets (line, 1000, inFile) ;
  const long lineLength = strlen (line) ;
  long strIndex = 0 ;
//--- Check that first character is ':'
  if (ok) {
    ok = line [strIndex] == ':' ;
    if (! ok) {
      printf ("error at line %d : first character is not ':', but ASCII 0x%02hhd.\n",
              ioLine,
              line [strIndex]) ;
    }
  }
  strIndex ++ ;
//--- Get length
  uint32_t length = 0 ;
  if (ok) {
    ok = readByte (line, ioLine, strIndex, length, sum) ;
  }
//--- Get address
  if (ok) {
    ok = readWord (line, ioLine, strIndex, outAddressField, sum) ;
  }
//--- Get record type
  if (ok) {
    ok = readByte (line, ioLine, strIndex, outRecordType, sum) ;
  }
//--- Get data field
  for (uint8_t i=0 ; (i<length) && ok ; i++) {
    uint32_t byte = 0 ;
    ok = readByte (line, ioLine, strIndex, byte, sum) ;
    outDataField [outDataFieldLength] = (uint8_t) byte ;
    outDataFieldLength ++ ;
  }
//--- Get checksum byte
  if (ok) {
    uint32_t unused = 0 ;
    ok = readByte (line, ioLine, strIndex, unused, sum) ;
  }
//--- Check checksum is ok
  if (ok && (sum != 0)) {
    printf ("error at line %d : checksum error\n", ioLine) ;
    ok = false ;
  }
//--- Check that current character is an end of line
  if (ok) {
    if (line [strIndex] == '\n') {
      strIndex ++ ;
      if ((strIndex < lineLength)
       && (line [strIndex] == '\n')) {
        strIndex ++ ;
      }
    }else if (line [strIndex] == '\r') {
      strIndex ++ ;
      if ((strIndex < lineLength)
       && (line [strIndex] == '\n')) {
        strIndex ++ ;
      }
    }else{
      ok = false ;
      printf ("error at line %d : incorrect end of line.\n", ioLine) ;
    }
  }
//--- Return 
  return ok ;
}

//---------------------------------------------------------------------------*

void PMCodeImage::read_hex_file (FILE * inFile) {
  uint32_t line = 0 ;
  uint32_t addressField = 0 ;
  uint32_t recordType ;
  uint8_t * dataField = NULL ;
  uint32_t dataFieldLength = 0 ;
  uint32_t extendedLinearAddress = 0 ;
  bool loop = true ;
  while (loop) {
    loop = readHexRecord (inFile, line,
                          addressField, recordType,
                          dataField, dataFieldLength) ;
    /*printf ("Line %6lu: address: 0x%04lX, recordType: %02lu, data:", line, addressField, recordType) ;
    for (uint32_t i=0 ; i<dataFieldLength ; i++) {
      printf (" 0x%02hX", dataField [i]) ;
    }
    printf (" (%lu)\n", dataFieldLength) ; */
    switch (recordType) {
    case 0 : // data record
      for (uint32_t i=0 ; i<dataFieldLength ; i++) {
        enterByteAtAddress (dataField [i], extendedLinearAddress + i + addressField, line) ;
      } 
      break ;
    case 1 : // end of file record
      loop = false ;
      break ;
    case 3 : // 'start Segment Address Record' record (ignored)
      if (dataFieldLength != 4) {
        char * s = new char [100] ;
        sprintf (s, "Start Segment Address Record at line %u must have 4 bytes of data.", line) ;
        throw s ;
      }
      break ;
    case 4 : // Extended linear address record
      if (addressField != 0) {
        char * s = new char [100] ;
        sprintf (s, "Extended Linear Address Record at line %u has non-zero address field.", line) ;
        throw s ;
      }
      if (dataFieldLength != 2) {
        char * s = new char [100] ;
        sprintf (s, "Extended Linear Address Record at line %u must have 2 bytes of data.", line) ;
        throw s ;
      }else{
        extendedLinearAddress = dataField [0] ;
        extendedLinearAddress <<= 8 ;
        extendedLinearAddress |= dataField [1] ;
        extendedLinearAddress <<= 16 ;
      }
      break ;
    case 5 : // Start Linear Address Record
      if (addressField != 0) {
        char * s = new char [100] ;
        sprintf (s, "Extended linear address record at line %d has non-zero address field.", line) ;
        throw s ;
      }
      if (dataFieldLength != 4) {
        char * s = new char [100] ;
        sprintf (s, "Extended linear address record at line %d must have 4 bytes of data.", line) ;
        throw s ;
      }
      break ;
    default :
      char * s = new char [100] ;
      sprintf (s, "Unknown record type (0x%02x) at line %d.", recordType, line) ;
      throw s ;
      break ;
    }
    macroMyDeletePODArray (dataField) ;
  }
}

//---------------------------------------------------------------------------*
