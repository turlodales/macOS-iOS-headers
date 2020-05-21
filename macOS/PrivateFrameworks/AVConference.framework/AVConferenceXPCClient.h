//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface AVConferenceXPCClient : NSObject
{
    NSObject<OS_xpc_object> *connection;
    NSMutableDictionary *registeredBlocks;
    NSObject<OS_dispatch_queue> *replyQueue;
    NSObject<OS_dispatch_queue> *connectionQueue;
    BOOL connectionPersists;
}

+ (id)AVConferenceXPCClientSingleton;
@property(readonly) BOOL connectionPersists; // @synthesize connectionPersists;
@property(readonly) NSMutableDictionary *registeredBlocks; // @synthesize registeredBlocks;
@property(readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection;
- (void)deregisterFromService:(char *)arg1;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3 eventLogLevel:(int)arg4;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2;
- (id)sendMessageSync:(char *)arg1;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;
- (void)sendMessageAsync:(char *)arg1;
- (id)createConnectionToServer;
- (void)closeConnectionToServer;
- (id)copyConnection;
- (id)newTimeoutDictionary;
- (id)newServerDiedDictionary;
- (id)newNSDictionaryFromNSError:(id)arg1;
- (id)newNSErrorFromNSDictionary:(id)arg1;
- (id)newXPCDictionaryFromNSDictionary:(id)arg1;
- (id)newNSDictionaryFromXPCDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end

