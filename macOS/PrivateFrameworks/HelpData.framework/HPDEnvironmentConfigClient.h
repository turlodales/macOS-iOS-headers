//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HelpData/HPDEnvironmentConfigProtocol-Protocol.h>

@class HPDListenerBridgeClient, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface HPDEnvironmentConfigClient : NSObject <HPDEnvironmentConfigProtocol>
{
    NSXPCConnection *_xpcConnection;
    HPDListenerBridgeClient *_listenerBridgeClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) HPDListenerBridgeClient *listenerBridgeClient; // @synthesize listenerBridgeClient=_listenerBridgeClient;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)currentEnvironmentWithReply:(CDUnknownBlockType)arg1;
- (void)_connectAndExecuteBlock:(CDUnknownBlockType)arg1;
- (void)_connectToEndPoint:(id)arg1;
- (id)init;

@end

