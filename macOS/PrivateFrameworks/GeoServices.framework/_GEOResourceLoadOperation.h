//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceLoadOperation.h"
#import "NSURLSessionDataDelegate.h"

@class NSData, NSLock, NSMutableData, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLSession, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface _GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation>
{
    NSURL *_url;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    NSMutableData *_data;
    BOOL _expectsPartialContent;
    NSData *_auditToken;
    NSLock *_lock;
    BOOL _requiresWiFi;
}

@property(nonatomic) BOOL requiresWiFi; // @synthesize requiresWiFi=_requiresWiFi;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)dealloc;
- (id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURLString:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

