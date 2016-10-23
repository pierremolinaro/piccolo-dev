/*
 *  PMCodeImage.h
 */

//---------------------------------------------------------------------------*

#ifndef PM_CODE_IMAGE_CLASS_DEFINED
#define PM_CODE_IMAGE_CLASS_DEFINED

//---------------------------------------------------------------------------*

#include <stdio.h>

//---------------------------------------------------------------------------*

#include "M_machine.h"

//---------------------------------------------------------------------------*

class PMCodeImage {
//--- Constructors
  public : PMCodeImage (const char * inFileName) ;
  public : PMCodeImage (const char * inFileName, const uint8_t inDefaultValue) ;
  
//--- Virtual destructor
  public : virtual ~ PMCodeImage (void) ;
  
//--- No copy
  private : PMCodeImage (PMCodeImage &) ;
  private : void operator = (PMCodeImage &) ;

//--- Public methods
  public : void dumpCodeImage (const char * inLinePrefix) const ;

  public : void defineDefaultValue (const uint8_t inDefaultValue) ;

  public : inline uint32_t firstAddress (void) const { return mFirstAddress ; }

  public : inline uint32_t lastAddress (void) const { return mLastAddress ; }

//--- Byte
  public : bool byteIsDefinedAtAddress (const uint32_t inAddress) const ;

  public : uint8_t byteAtAddress (const uint32_t inAddress) const ;

//--- sint8
  public : int8_t sint8_AtAddress (const uint32_t inAddress) const ;

//--- Big endian (BE)
  public : uint16_t uint16BE_AtAddress (const uint32_t inAddress) const ;

  public : int16_t sint16BE_AtAddress (const uint32_t inAddress) const ;

  public : uint32_t uint24BE_AtAddress (const uint32_t inAddress) const ;

  public : uint32_t uint32BE_AtAddress (const uint32_t inAddress) const ;

  public : int32_t sint32BE_AtAddress (const uint32_t inAddress) const ;

//--- Little endian (LE)
  public : uint16_t uint16LE_AtAddress (const uint32_t inAddress) const ;

  public : int16_t sint16LE_AtAddress (const uint32_t inAddress) const ;

  public : uint32_t uint24LE_AtAddress (const uint32_t inAddress) const ;

  public : uint32_t uint32LE_AtAddress (const uint32_t inAddress) const ;

  public : int32_t sint32LE_AtAddress (const uint32_t inAddress) const ;

//--- Private methods
  private : void enterByteAtAddress (const uint8_t inByte,
                                     const uint32_t inAddress,
                                     const uint32_t inSourceLine) ;

  private : void read_s_records_in_srec_file (FILE * inFichier) ;

  private : void read_symbols_in_symbsrec_file (FILE * inFichier) ;

  private : void read_hex_file (FILE * inFichier) ;

  private : bool readHexRecord (FILE * inFile,
                                uint32_t & ioLine,
                                uint32_t & outAddressField,
                                uint32_t & outRecordType,
                                uint8_t * & outDataField,
                                uint32_t & outDataFieldLength) ;
 
//--- Private attributes
  private : uint8_t * mImage ;
  private : bool * mDefinition ;
  private : uint32_t mAllocatedSize ;
  private : uint32_t mBaseAddress ;
  private : uint32_t mFirstAddress ;
  private : uint32_t mLastAddress ;
  private : uint8_t mDefaultValue ;
  private : bool mDefaultValueDefined ; 
} ;

//---------------------------------------------------------------------------*

#endif
