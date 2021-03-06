/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARRemoteService : NSObject <ARNamedService> {
    NSXPCConnection * _connection;
    <ARDaemonServiceBaseProtocol> * _service;
    <ARDaemonServiceBaseProtocol> * _syncService;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ARDaemonServiceBaseProtocol> *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ARDaemonServiceBaseProtocol> *syncService;

- (void).cxx_destruct;
- (int)clientProcessIdentifier;
- (id)clientProcessName;
- (id)connection;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3;
- (id)initWithMachServiceName:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3 endpoint:(id)arg4;
- (void)interruptionHandler;
- (void)invalidate;
- (void)invalidationHandler;
- (void)reconnect;
- (id)service;
- (void)setConnection:(id)arg1;
- (void)setService:(id)arg1;
- (void)setService:(id)arg1 syncService:(id)arg2;
- (void)setSyncService:(id)arg1;
- (id)syncService;

@end
