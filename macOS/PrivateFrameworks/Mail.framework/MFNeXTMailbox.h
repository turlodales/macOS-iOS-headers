//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFMboxDocument.h>

@class NSURL;

@interface MFNeXTMailbox : MFMboxDocument
{
    NSURL *_tableOfContentsFile;
}

+ (BOOL)isValidItem:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *tableOfContentsFile; // @synthesize tableOfContentsFile=_tableOfContentsFile;
- (id)_headerDigestForHeaders:(id)arg1 key:(id)arg2;
- (BOOL)exportMessagesToURL:(id)arg1 error:(id *)arg2;
- (id)messagesForImporter;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;

@end

