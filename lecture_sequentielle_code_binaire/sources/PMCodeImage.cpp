/*
 *  PMCodeImage.cpp
 *
 */

//---------------------------------------------------------------------------*

// http://en.wikipedia.org/wiki/.hex

//---------------------------------------------------------------------------*

#include "PMCodeImage.h"

//---------------------------------------------------------------------------*

#include <stdio.h>
#include <string.h>

//---------------------------------------------------------------------------*

PMCodeImage::PMCodeImage (const char * inFileName) :
mEndianKind (kBigEndian),
mImage (NULL),
mDefinition (NULL),
mAllocatedSize (0),
mBaseAddress (0),
mFirstAddress (0),
mLastAddress (0) {
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
    mEndianKind = kLittleEndian16 ;
    read_hex_file (f) ;
  }else{
    printf ("** ERROR: unhandled extension (%s) for input file **\n", extension) ;
  }
  fclose (f) ;
}

//---------------------------------------------------------------------------*

PMCodeImage::~PMCodeImage (void) {
  delete [] mImage ;
  delete [] mDefinition ;
}

//---------------------------------------------------------------------------*

void PMCodeImage::
setEndianKind (const enumEndianKind inEndianKind) {
  mEndianKind = inEndianKind ;
}

//---------------------------------------------------------------------------*

enumEndianKind PMCodeImage::endianKind (void) const {
  return mEndianKind ;
}

//---------------------------------------------------------------------------*

void PMCodeImage::dumpCodeImage (void) const {
  if (mDefinition == NULL) {
    printf (" Empty code\n") ;
  }else{
    const unsigned long start = (mFirstAddress / 16) * 16 ;
    printf ("  Address:  0 1  2 3  4 5  6 7  8 9  A B  C D  E F\n") ;
    unsigned long idx = start ;
    while (idx <= mLastAddress) {
      bool empty = true ;
      for (unsigned i=0 ; (i<16) && empty ; i++) {
        empty = ! byteIsDefinedAtAddress (idx + i) ;
      }
      if (! empty) {
        printf ("%04lX_%04lX:", idx >> 16, idx & 0xFFFF) ;
        for (unsigned i=0 ; i<16 ; i++) {
          if ((i & 1) == 0) {
            printf (" ") ;
          }
          if (byteIsDefinedAtAddress (idx + i)) {
            printf ("%02hX", byteAtAddress (idx + i)) ;
          }else{
            printf ("??") ;
          }
        }
        printf ("\n") ;
      }
      idx += 16 ;
    }
  }
  printf ("************ END OF DUMP INPUT FILE ************\n") ;
}

//---------------------------------------------------------------------------*

static const unsigned long kAllocationSize = 4096 ;

//---------------------------------------------------------------------------*

void PMCodeImage::
enterByteAtAddress (const unsigned inByte,
                    const unsigned long inAddress,
                    const unsigned long inSourceLine) {
  // printf ("ENTER 0x%02hx AT %X\n", inByte, inAddress) ;
//--- Reallocate ?
  if (mImage == NULL) {
    mBaseAddress = (inAddress / kAllocationSize) * kAllocationSize ;
    mAllocatedSize = kAllocationSize ;
    mFirstAddress = inAddress ;
    mLastAddress = inAddress ;
    mImage = new unsigned char [mAllocatedSize] ;
    mDefinition = new bool [mAllocatedSize] ;
    for (unsigned i=0 ; i<mAllocatedSize ; i++) {
      mDefinition [i] = false ;
    }
  }else if (inAddress >= (mBaseAddress + mAllocatedSize)) { // Extend at end
    const unsigned long newNeededSize = ((inAddress - mBaseAddress) / kAllocationSize + 1) * kAllocationSize ;
    unsigned char * newImage = new unsigned char [newNeededSize] ;
    bool * newDefinition = new bool [newNeededSize] ;
    for (unsigned i=0 ; i<mAllocatedSize ; i++) {
      newImage [i] = mImage [i] ;
      newDefinition [i] = mDefinition [i] ;
    }
    for (unsigned i=mAllocatedSize ; i<newNeededSize ; i++) {
      newDefinition [i] = false ;
    }
    delete [] mImage ; mImage = newImage ; newImage = NULL ;
    delete [] mDefinition ; mDefinition = newDefinition ; newDefinition = NULL ;
    mAllocatedSize = newNeededSize ;
  }else if (inAddress < mBaseAddress) { // Extend at begining
    const unsigned long newBaseAddress = (inAddress / kAllocationSize) * kAllocationSize ;
    const unsigned long prependSize = mBaseAddress - newBaseAddress ;
    const unsigned long newNeededSize = mAllocatedSize + prependSize ;
    unsigned char * newImage = new unsigned char [newNeededSize] ;
    bool * newDefinition = new bool [newNeededSize] ;
    for (unsigned i=0 ; i<mAllocatedSize ; i++) {
      newImage [i + prependSize] = mImage [i] ;
      newDefinition [i + prependSize] = mDefinition [i] ;
    }
    for (unsigned i=0 ; i<prependSize ; i++) {
      newDefinition [i] = false ;
    }
    delete [] mImage ; mImage = newImage ; newImage = NULL ;
    delete [] mDefinition ; mDefinition = newDefinition ; newDefinition = NULL ;
    mAllocatedSize = newNeededSize ;
  }
//--- Enter
  if (mDefinition [inAddress - mBaseAddress]) {
    char * s = new char [100] ;
    sprintf (s, "Byte already entered in code image at address 0x%lX (source line %lu)", inAddress, inSourceLine) ;
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

static unsigned long endian_mask (const enumEndianKind inEndianKind) {
  unsigned long result = 0 ;
  if (inEndianKind == kLittleEndian16) {
    result = 1 ;
  }else if (inEndianKind == kLittleEndian32) {
    result = 3 ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

unsigned char PMCodeImage::
byteAtAddress (const unsigned long inAddress) const {
  const unsigned long address = inAddress ^ endian_mask (mEndianKind) ;
  if (address < mFirstAddress) {
    char * s = new char [100] ;
    strcpy (s, "Try to read code before first address") ;
    throw s ;
  }else if (address > mLastAddress) {
    char * s = new char [100] ;
    sprintf (s, "Try to read code at 0x%lX after last address 0x%lX", inAddress, mLastAddress) ;
    throw s ;
  }else if (! mDefinition [address - mBaseAddress]) {
    char * s = new char [100] ;
    sprintf (s, "Try to read code in undefined address (0x%lX)", address) ;
    throw s ;
  }
  return mImage [address - mBaseAddress] ;
}

//---------------------------------------------------------------------------*

bool PMCodeImage::
byteIsDefinedAtAddress (const unsigned long inAddress) const {
  const unsigned long address = inAddress ^ endian_mask (mEndianKind) ;
  bool result = false ;
  if ((address >= mFirstAddress) && (address <= mLastAddress)) {
    result = mDefinition [address - mBaseAddress] ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

signed char PMCodeImage::
sint8_AtAddress (const unsigned long inAddress) const {
  signed char c = (signed char) byteAtAddress (inAddress) ;
  return c ;
}

//---------------------------------------------------------------------------*

short PMCodeImage::
sint16BE_AtAddress (const unsigned long inAddress) const {
  short word = byteAtAddress (inAddress) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  return word ;
}

//---------------------------------------------------------------------------*

short PMCodeImage::
sint16LE_AtAddress (const unsigned long inAddress) const {
  short word = byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress) ;
  return word ;
}

//---------------------------------------------------------------------------*

unsigned short PMCodeImage::
uint16BE_AtAddress (const unsigned long inAddress) const {
  unsigned short word = byteAtAddress (inAddress) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  return word ;
}

//---------------------------------------------------------------------------*

unsigned short PMCodeImage::
uint16LE_AtAddress (const unsigned long inAddress) const {
  unsigned short word = byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress) ;
  return word ;
}

//---------------------------------------------------------------------------*

unsigned long PMCodeImage::
uint24BE_AtAddress (const unsigned long inAddress) const {
  unsigned long word = byteAtAddress (inAddress) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 2) ;
  return word ;
}

//---------------------------------------------------------------------------*

unsigned long PMCodeImage::
uint24LE_AtAddress (const unsigned long inAddress) const {
  unsigned long word = byteAtAddress (inAddress + 2) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress) ;
  return word ;
}

//---------------------------------------------------------------------------*

unsigned long PMCodeImage::
uint32BE_AtAddress (const unsigned long inAddress) const {
  unsigned long word = byteAtAddress (inAddress) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 2) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 3) ;
  return word ;
}

//---------------------------------------------------------------------------*

unsigned long PMCodeImage::
uint32LE_AtAddress (const unsigned long inAddress) const {
  unsigned long word = byteAtAddress (inAddress + 3) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 2) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress) ;
  return word ;
}

//---------------------------------------------------------------------------*

long PMCodeImage::
sint32BE_AtAddress (const unsigned long inAddress) const {
  long word = byteAtAddress (inAddress) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 2) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 3) ;
  return word ;
}

//---------------------------------------------------------------------------*

long PMCodeImage::
sint32LE_AtAddress (const unsigned long inAddress) const {
  long word = byteAtAddress (inAddress + 3) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 2) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress + 1) ;
  word <<= 8 ;
  word |= byteAtAddress (inAddress) ;
  return word ;
}

//---------------------------------------------------------------------------*

static unsigned char
lireChiffre (const char * inString,
             const unsigned long inIndex,
             const unsigned long inNumeroLigne,
             bool & ioOk) {
  unsigned char valeur = 0UL ;
  const char c = inString [inIndex] ;
  if ((c >= '0') && (c <= '9')) {
    valeur = (unsigned char) (c - '0') ;
  }else if ((c >= 'A') && (c <= 'F')) {
    valeur = (unsigned char) (c - 'A' + 10) ;
  }else if ((c >= 'a') && (c <= 'f')) {
    valeur = (unsigned char) (c - 'a' + 10) ;
  }else{
    fprintf (stderr, "Erreur : un chiffre hexa est attendu dans la colonne %lu de la ligne %lu :\n",
            inIndex + 1, inNumeroLigne) ;
    fprintf (stderr, "%s", inString) ;
    ioOk = false ;
  }
  return valeur ;
}

//---------------------------------------------------------------------------*

static unsigned char
lireOctet (const char * inString,
           const unsigned long inIndex,
           const unsigned long inNumeroLigne,
           unsigned long & io_somme_controle,
           bool & ioOk) {
  unsigned char valeur = lireChiffre (inString, inIndex, inNumeroLigne, ioOk) ;
  if (ioOk) {
    valeur *= 16 ;
    valeur += lireChiffre (inString, inIndex + 1, inNumeroLigne, ioOk) ;
  }
  io_somme_controle += valeur ;
  return valeur ;
}

//---------------------------------------------------------------------------*

static unsigned long
lireDoubleOctet (const char * inString,
                 const unsigned long inIndex,
                 const unsigned long inNumeroLigne,
                 unsigned long & io_somme_controle,
                 bool & ioOk) {
  unsigned long valeur = lireOctet (inString, inIndex, inNumeroLigne, io_somme_controle, ioOk) ;
  if (ioOk) {
    valeur *= 256 ;
    valeur += lireOctet (inString, inIndex + 2, inNumeroLigne, io_somme_controle, ioOk) ;
  }
  return valeur ;
}

//---------------------------------------------------------------------------*

static unsigned long
lireTripleOctet (const char * inString,
                 const unsigned long inIndex,
                 const unsigned long inNumeroLigne,
                 unsigned long & io_somme_controle,
                 bool & ioOk) {
  unsigned long valeur = lireDoubleOctet (inString, inIndex, inNumeroLigne, io_somme_controle, ioOk) ;
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
  unsigned long ligne = 1 ;
  while (fgets (line, 1000, inFichier)) {
    if (line [0] != 'S') {
      fprintf (stderr, "Erreur : la ligne %lu ne commence pas par 'S' : %s", ligne, line) ;
      ok = false ;
    }
    switch (line [1]) {
    case '0' : // Ignorer la ligne
    case '8' : // Ignorer la ligne
    case '9' : // Ignorer la ligne
      break ;
    case '1' :
      { unsigned long somme_controle = 0UL ;
        const unsigned long lg = lireOctet (line, 2, ligne, somme_controle, ok) ;
        const unsigned long adresseChargement = lireDoubleOctet (line, 4, ligne, somme_controle, ok) ;
        if (ok) {
          for (unsigned long i=0 ; (i<(lg-3)) && ok ; i++) {
            const unsigned char c = lireOctet (line, 8 + i + i, ligne, somme_controle, ok) ;
            const unsigned long adr = adresseChargement + i ;
            enterByteAtAddress (c, adr, ligne) ;
          }
        }
        unsigned long pipo = 0 ;
        unsigned long somme_lue = 0 ;
        if (ok) {
          somme_lue = lireOctet (line,
                                2 + lg + lg,
                                ligne, pipo, ok) ;
        }
        const unsigned long somme_a_verifier = (~somme_controle) & 255 ;
        if (ok && (somme_lue != somme_a_verifier)) {
          fprintf (stderr, "Erreur de somme de controle a la ligne %lu : %s", ligne, line) ;
          ok = false ;
        }
      }
      break ;
    case '2' :
      { unsigned long somme_controle = 0UL ;
        const unsigned long lg = lireOctet (line, 2, ligne, somme_controle, ok) ;
        const unsigned long adresseChargement = lireTripleOctet (line, 4, ligne, somme_controle, ok) ;
        if (ok) {
          for (unsigned long i=0 ; (i<(lg-4)) && ok ; i++) {
            const unsigned char c = lireOctet (line, 10 + i + i, ligne, somme_controle, ok) ;
            const unsigned long adr = adresseChargement + i ;
            enterByteAtAddress (c, adr, ligne) ;
          }
        }
        unsigned long pipo = 0 ;
        unsigned long somme_lue = 0 ;
        if (ok) {
          somme_lue = lireOctet (line,
                                 2 + lg + lg,
                                 ligne, pipo, ok) ;
        }
        const unsigned long somme_a_verifier = (~somme_controle) & 255 ;
        if (ok && (somme_lue != somme_a_verifier)) {
          fprintf (stderr, "Erreur de somme de controle a la ligne %lu : %s", ligne, line) ;
          ok = false ;
        }
      }
      break ;
    default :
      fprintf (stderr, "Erreur : S-record inconnu a la ligne %lu : %s", ligne, line) ;
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
      loop = ! strncmp (line, "$$", 2) == 0 ;
      if (loop) {
        // printf ("[%s]\n", line) ;
        char name [100] = "" ;
        unsigned long address = 0 ;
        sscanf (line, " %s $%lX", name, & address) ;
        // printf ("ADDRESS: '%s', ADDRESS: 0x%X\n", name, address) ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

static bool 
ascii2hex (const char inChar,
           const long inLine,
           unsigned long & ioValue) {
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
          unsigned long & outByte,
          unsigned char & ioSum) {
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
          unsigned long & outWord,
          unsigned char & ioSum) {
  unsigned long byte ;
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

bool PMCodeImage::
readHexRecord (FILE * inFile,
               unsigned long & ioLine,
               unsigned long & outAddressField,
               unsigned long & outRecordType,
               unsigned char * & outDataField,
               unsigned long & outDataFieldLength) {
  outDataField = new unsigned char [100] ;
  outDataFieldLength = 0 ;
  ioLine ++ ;
  unsigned char sum = 0 ;
//--- Read string
  char line [1000] ;
  bool ok = fgets (line, 1000, inFile) ;
  const long lineLength = strlen (line) ;
  long strIndex = 0 ;
//--- Check that first character is ':'
  if (ok) {
    ok = line [strIndex] == ':' ;
    if (! ok) {
      printf ("error at line %ld : first character is not ':', but ASCII 0x%02hx.\n",
              ioLine,
              line [strIndex]) ;
    }
  }
  strIndex ++ ;
//--- Get length
  unsigned long length = 0 ;
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
  for (unsigned char i=0 ; (i<length) && ok ; i++) {
    unsigned long byte = 0 ;
    ok = readByte (line, ioLine, strIndex, byte, sum) ;
    outDataField [outDataFieldLength] = (unsigned char) byte ;
    outDataFieldLength ++ ;
  }
//--- Get checksum byte
  if (ok) {
    unsigned long unused = 0 ;
    ok = readByte (line, ioLine, strIndex, unused, sum) ;
  }
//--- Check checksum is ok
  if (ok && (sum != 0)) {
    printf ("error at line %ld : checksum error\n", ioLine) ;
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
      printf ("error at line %ld : incorrect end of line.\n", ioLine) ;
    }
  }
//--- Return 
  return ok ;
}

//---------------------------------------------------------------------------*

void PMCodeImage::
read_hex_file (FILE * inFile) {
  unsigned long line = 0 ;
  unsigned long addressField = 0 ;
  unsigned long recordType ;
  unsigned char * dataField = NULL ;
  unsigned long dataFieldLength = 0 ;
  unsigned long extendedLinearAddress = 0 ;
  bool loop = true ;
  while (loop) {
    loop = readHexRecord (inFile, line,
                          addressField, recordType,
                          dataField, dataFieldLength) ;
    /*printf ("Line %6lu: address: 0x%04lX, recordType: %02lu, data:", line, addressField, recordType) ;
    for (unsigned long i=0 ; i<dataFieldLength ; i++) {
      printf (" 0x%02hX", dataField [i]) ;
    }
    printf (" (%lu)\n", dataFieldLength) ; */
    switch (recordType) {
    case 0 : // data record
      for (unsigned long i=0 ; i<dataFieldLength ; i++) {
        enterByteAtAddress (dataField [i], extendedLinearAddress + i + addressField, line) ;
      } 
      break ;
    case 1 : // end of file record
      loop = false ;
      break ;
    case 3 : // 'start Segment Address Record' record (ignored)
      if (dataFieldLength != 4) {
        char * s = new char [100] ;
        sprintf (s, "Start Segment Address Record at line %lu must have 4 bytes of data.", line) ;
        throw s ;
      }
      break ;
    case 4 : // Extended linear address record
      if (addressField != 0) {
        char * s = new char [100] ;
        sprintf (s, "Extended Linear Address Record at line %lu has non-zero address field.", line) ;
        throw s ;
      }
      if (dataFieldLength != 2) {
        char * s = new char [100] ;
        sprintf (s, "Extended Linear Address Record at line %lu must have 2 bytes of data.", line) ;
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
        sprintf (s, "Extended linear address record at line %ld has non-zero address field.", line) ;
        throw s ;
      }
      if (dataFieldLength != 4) {
        char * s = new char [100] ;
        sprintf (s, "Extended linear address record at line %ld must have 4 bytes of data.", line) ;
        throw s ;
      }
      break ;
    default :
      char * s = new char [100] ;
      sprintf (s, "Unknown record type (0x%02lx) at line %ld.", recordType, line) ;
      throw s ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------*
