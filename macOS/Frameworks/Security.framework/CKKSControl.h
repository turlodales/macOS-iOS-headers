//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_xpc_object;

@interface CKKSControl : NSObject
{
    BOOL _synchronous;
    NSObject<OS_xpc_object> *_endpoint;
    NSXPCConnection *_connection;
}

+ (id)CKKSControlObject:(BOOL)arg1 error:(id *)arg2;
+ (id)controlObject:(id *)arg1;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) NSObject<OS_xpc_object> *endpoint; // @synthesize endpoint=_endpoint;
@property BOOL synchronous; // @synthesize synchronous=_synchronous;
- (void)rpcKnownBadState:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcTLKMissing:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcGetCKDeviceIDWithReply:(CDUnknownBlockType)arg1;
- (void)rpcPerformanceCounters:(CDUnknownBlockType)arg1;
- (void)rpcCKMetric:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)rpcPushOutgoingChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcFetchAndProcessClassAChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcFetchAndProcessChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcResync:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcResetCloudKit:(id)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcFastStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)objectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1;

@end

