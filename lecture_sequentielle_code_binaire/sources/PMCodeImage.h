/*
 *  PMCodeImage.h
 */

//---------------------------------------------------------------------------*

#ifndef PM_CODE_IMAGE_CLASS_DEFINED
#define PM_CODE_IMAGE_CLASS_DEFINED

//---------------------------------------------------------------------------*

#include <stdio.h>

//---------------------------------------------------------------------------*

typedef enum {
  kBigEndian, kLittleEndian16, kLittleEndian32
} enumEndianKind ;

//---------------------------------------------------------------------------*

class PMCodeImage {
//--- Default constructor
  public : PMCodeImage (const char * inFileName) ;
  
//--- Virtual destructor
  public : virtual ~ PMCodeImage (void) ;
  
//--- No copy
  private : PMCodeImage (PMCodeImage &) ;
  private : void operator = (PMCodeImage &) ;

//--- Handling endianness
  private : enumEndianKind mEndianKind ; // Default : Big endian
  public : void setEndianKind (const enumEndianKind inEndianKind) ;
  public : enumEndianKind endianKind (void) const ;

//--- Public methods
  public : void dumpCodeImage (void) const ;

  public : inline unsigned long firstAddress (void) const { return mFirstAddress ; }

  public : inline unsigned long lastAddress (void) const { return mLastAddress ; }

//--- Byte
  public : bool byteIsDefinedAtAddress (const unsigned long inAddress) const ;

  public : unsigned char byteAtAddress (const unsigned long inAddress) const ;

//--- sint8
  public : signed char sint8_AtAddress (const unsigned long inAddress) const ;

//--- Big endian (BE)
  public : unsigned short uint16BE_AtAddress (const unsigned long inAddress) const ;

  public : short sint16BE_AtAddress (const unsigned long inAddress) const ;

  public : unsigned long uint24BE_AtAddress (const unsigned long inAddress) const ;

  public : unsigned long uint32BE_AtAddress (const unsigned long inAddress) const ;

  public : long sint32BE_AtAddress (const unsigned long inAddress) const ;

//--- Little endian (LE)
  public : unsigned short uint16LE_AtAddress (const unsigned long inAddress) const ;

  public : short sint16LE_AtAddress (const unsigned long inAddress) const ;

  public : unsigned long uint24LE_AtAddress (const unsigned long inAddress) const ;

  public : unsigned long uint32LE_AtAddress (const unsigned long inAddress) const ;

  public : long sint32LE_AtAddress (const unsigned long inAddress) const ;

//--- Private methods
  private : void enterByteAtAddress (const unsigned inByte,
                                     const unsigned long inAddress,
                                     const unsigned long inSourceLine) ;

  private : void read_s_records_in_srec_file (FILE * inFichier) ;

  private : void read_symbols_in_symbsrec_file (FILE * inFichier) ;

  private : void read_hex_file (FILE * inFichier) ;

  private : bool
  readHexRecord (FILE * inFile,
                 unsigned long & ioLine,
                 unsigned long & outAddressField,
                 unsigned long & outRecordType,
                 unsigned char * & outDataField,
                 unsigned long & outDataFieldLength) ;
 
//--- Private attributes
  private : unsigned char * mImage ;
  private : bool * mDefinition ;
  private : unsigned long mAllocatedSize ;
  private : unsigned long mBaseAddress ;
  private : unsigned long mFirstAddress ;
  private : unsigned long mLastAddress ;  
} ;

//---------------------------------------------------------------------------*

#endif
