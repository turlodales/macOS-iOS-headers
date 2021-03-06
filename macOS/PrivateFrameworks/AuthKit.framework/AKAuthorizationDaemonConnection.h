//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAuthorizationClientProtocol;

@interface AKAuthorizationDaemonConnection : NSObject
{
    struct os_unfair_lock_s _unfairLock;
    NSXPCConnection *_connection;
    id <AKAuthorizationClientProtocol> _contextManager;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
- (void)_connectionInvalidationHandler;
- (void)_connectionInterruptionHandler;
- (id)_connection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)arg1 exportedInterface:(id)arg2;
- (id)init;

@end

