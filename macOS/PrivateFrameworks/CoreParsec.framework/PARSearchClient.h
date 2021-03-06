//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/PARClientXPC-Protocol.h>

@class NSMutableArray, NSString, NSXPCConnection, PARImageLoader;
@protocol OS_dispatch_queue, PARDaemonXPC;

@interface PARSearchClient : NSObject <PARClientXPC>
{
    id <PARDaemonXPC> _remoteObject;
    NSMutableArray *_sessions;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic _Bool _configured;
    NSXPCConnection *_connection;
    PARImageLoader *_imageLoader;
}

+ (id)sharedClient;
- (void).cxx_destruct;
@property(readonly) PARImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)updateParameters:(double)arg1 safariLast1day:(double)arg2 safariLast1week:(double)arg3 safariLast1month:(double)arg4 safariAll:(double)arg5 safariMostRecent:(double)arg6 minThresholdToSend:(double)arg7;
- (void)clearCompletionsFromDate:(id)arg1 toDate:(id)arg2;
- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (void)getImageMap:(CDUnknownBlockType)arg1;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listSessions:(CDUnknownBlockType)arg1;
- (void)reportFeedback:(id)arg1 feedback:(id)arg2 queryId:(unsigned long long)arg3;
- (unsigned long long)request:(id)arg1 request:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)forceFetchBag:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)bag:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)configure:(id)arg1;
- (void)addSession:(id)arg1;
- (void)dealloc;
- (void)_invalidateConnection;
- (id)initWithConnection:(id)arg1;
- (id)init;
- (void)sessionDidChange:(id)arg1;
- (void)didDeleteResource:(id)arg1;
- (void)didDownloadResource:(id)arg1;
- (void)bagDidLoad:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

