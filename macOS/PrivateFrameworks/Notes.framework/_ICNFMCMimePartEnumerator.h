//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class ICNFMCMimePart;

@interface _ICNFMCMimePartEnumerator : NSEnumerator
{
    BOOL _onlyAttachments;
    BOOL _isFirstIteration;
    ICNFMCMimePart *_currentPart;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICNFMCMimePart *currentPart; // @synthesize currentPart=_currentPart;
@property(nonatomic) BOOL isFirstIteration; // @synthesize isFirstIteration=_isFirstIteration;
@property(readonly, nonatomic) BOOL onlyAttachments; // @synthesize onlyAttachments=_onlyAttachments;
- (id)nextObject;
- (id)init;
- (id)initWithMimeBody:(id)arg1 onlyAttachments:(BOOL)arg2;

@end

