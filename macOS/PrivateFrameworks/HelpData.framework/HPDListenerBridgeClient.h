//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HPDListenerBridgeProtocol.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface HPDListenerBridgeClient : NSObject <HPDListenerBridgeProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)endpointWithReply:(CDUnknownBlockType)arg1;
- (void)unregisterEndpoint;
- (void)registerEndpoint:(id)arg1;
- (void)_handleConnectionError:(id)arg1;
- (id)init;

@end

