//
//  OC_GGS_ErrorOrWarningDescriptor.m
//  galgas
//
//  Created by Pierre Molinaro on 16/12/09.
//  Copyright 2009 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_ErrorOrWarningDescriptor.h"

//---------------------------------------------------------------------------*

@implementation OC_GGS_ErrorOrWarningDescriptor

//---------------------------------------------------------------------------*

- (id) initWithRange: (NSRange) inRange
       index: (NSUInteger) inIndex
       documentPath : (NSString *) inDocumentPath
       locationInSourceString: (NSUInteger) inLocationInSourceText {
  self = [super init] ;
  if (self) {
    mCompileMessageTextRange = inRange ;
    mIndex = inIndex ;
    mDocumentPath = [inDocumentPath retain] ;
    mLocation = inLocationInSourceText ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) dealloc {
  [mDocumentPath release] ;
  [super dealloc] ;
}

//---------------------------------------------------------------------------*

- (NSRange) rangeInCompileMessageText {
  return mCompileMessageTextRange ;
}

//---------------------------------------------------------------------------*

- (NSUInteger) index {
  return mIndex ;
}

//---------------------------------------------------------------------------*

- (NSString *) documentPath {
  return mDocumentPath ;
}

//---------------------------------------------------------------------------*

- (NSUInteger) locationInSourceString {
  return mLocation ;
}

//---------------------------------------------------------------------------*

- (void) editedFilePath:(NSString *) inDocPath
         editedRange: (NSRange) inEditedRange
         changeInLength: (NSInteger) inChangeInLength {
  if ([inDocPath isEqualToString:mDocumentPath] && (mLocation >= inEditedRange.location)) {
    if (mLocation < (inEditedRange.location + inEditedRange.length)) {
      mLocation = inEditedRange.location ;
    }else{
      mLocation += inChangeInLength ;
    }
  }
}

//---------------------------------------------------------------------------*

@end