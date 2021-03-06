//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionDelegate-Protocol.h>
#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSOperationQueue, NSString;

@interface __CFNSTestSessionInvalidationDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    NSOperationQueue *_q;
    CDUnknownBlockType _taskCompleted;
    CDUnknownBlockType _sessionCompleted;
}

@property CDUnknownBlockType sessionCompleted; // @synthesize sessionCompleted=_sessionCompleted;
@property CDUnknownBlockType taskCompleted; // @synthesize taskCompleted=_taskCompleted;
@property(retain) NSOperationQueue *q; // @synthesize q=_q;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

