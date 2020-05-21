//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_tcp_connection>, NSString, OS_remote_service;

@interface BridgeXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *internal_queue;
    NSObject<OS_tcp_connection> *conn;
    unsigned long long BridgeXPCConnectionState;
    unsigned long long state;
    unsigned long long BridgeXPCConnectionType;
    unsigned long long conn_type;
    NSString *conn_host;
    unsigned int conn_port;
    _Bool eos_notifications_registered;
    int conn_eos_service;
    OS_remote_service *conn_remote_service;
    void *conn_multiverse_device;
    NSMutableArray *msg_queue;
    NSObject<OS_dispatch_queue> *targetQueue;
    CDUnknownBlockType eventHandler;
}

+ (void)connectedPair:(id *)arg1:(id *)arg2;
+ (id)HELOMessage;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue;
- (void)dealloc;
- (void)cancel;
- (void)writeBarrier:(CDUnknownBlockType)arg1;
- (void)sendBarrier:(CDUnknownBlockType)arg1;
- (void)writeHeader:(id)arg1 message:(id)arg2;
- (void)writeHELO;
- (void)sendMessage:(id)arg1;
- (void)write:(id)arg1;
- (void)clearQueue;
- (void)flushQueue;
- (void)enqueueMessage:(id)arg1;
- (void)send:(id)arg1;
- (void)processIncomingMessage:(id)arg1;
- (void)readMessage;
- (void)connect;
- (void)initEOSDeviceNotifications;
- (void)disconnected;
- (void)connected;
- (void)activate;
- (void)setupQueues;
- (id)initWithUnacceptedConnection:(id)arg1;
- (id)initWithFd:(int)arg1;
- (id)initWithHost:(id)arg1 portNumber:(unsigned int)arg2;
- (id)initWithMultiverseDevice:(void *)arg1 portNumber:(unsigned int)arg2;
- (id)initWithEOSPortNumber:(unsigned int)arg1;
- (id)initForRemoteService:(id)arg1;
- (id)initWithEOSService:(unsigned int)arg1;
- (id)init;

@end

