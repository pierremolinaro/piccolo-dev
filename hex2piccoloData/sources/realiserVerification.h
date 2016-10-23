//
//  realiserVerification.h
//  flash-pic
//
//  Created by Pierre Molinaro on 20/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#ifndef flash_pic_realiserVerification_h
#define flash_pic_realiserVerification_h

//---------------------------------------------------------------------------*

#include "collections/TC_UniqueArray.h"

//---------------------------------------------------------------------------*

class PMCodeImage ;
class PMSendReceiveCAN ;

//---------------------------------------------------------------------------*

void realiserVerification (const PMCodeImage & inImage,
                           const TC_UniqueArray <bool> & inPICset,
                           PMSendReceiveCAN & inConnection,
                           const PMUInt32 inLastAddress,
                           int & ioReturnCode) ;

//---------------------------------------------------------------------------*

#endif
