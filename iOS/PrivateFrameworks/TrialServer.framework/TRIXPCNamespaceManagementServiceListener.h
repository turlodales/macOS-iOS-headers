/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIXPCNamespaceManagementServiceListener : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface * _interface;
    TRIServerContext * _serverContext;
    <TRITaskQueuing> * _taskQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithServerContext:(id)arg1 taskQueue:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
