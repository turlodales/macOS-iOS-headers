//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProxyConnectionDelegate.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSProxyConnection, NSString, SocksHandshake;

@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    int _outPort;
    NSString *_outHost;
    SocksHandshake *_socksHandshake;
    NSProxyConnection *_inbound;
    NSProxyConnection *_outbound;
    NSDictionary *_configuration;
}

+ (void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3;
+ (id)proxyServers;
- (void).cxx_destruct;
@property(retain) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain) NSProxyConnection *outbound; // @synthesize outbound=_outbound;
@property(retain) NSProxyConnection *inbound; // @synthesize inbound=_inbound;
- (void)outboundConnectionCompleteWithError:(int)arg1;
- (void)outboundConnectionReceivedData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)cleanup;
- (void)connected:(int)arg1;
- (void)readOutbound;
- (void)readInbound;
- (void)handshakeRead;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

