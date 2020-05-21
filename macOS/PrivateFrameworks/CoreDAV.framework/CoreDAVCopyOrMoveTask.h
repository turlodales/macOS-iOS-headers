//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask
{
    int _overwrite;
    NSURL *_destinationURL;
    NSURL *_priorOrderedURL;
    BOOL _shouldSendOrder;
}

+ (id)stringFromOverwriteValue:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(nonatomic) int overwrite; // @synthesize overwrite=_overwrite;
- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)additionalHeaderValues;
- (id)requestBody;
- (id)description;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

