//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPDocumentAndData : NSObject
{
    struct CGPDFDocument *_document;
    struct __CFData *_sourceData;
}

@property(retain) struct __CFData *sourceData; // @synthesize sourceData=_sourceData;
@property(retain) struct CGPDFDocument *document; // @synthesize document=_document;
- (void)dealloc;

@end

