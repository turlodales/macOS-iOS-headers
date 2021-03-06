/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSEngagementConnection : NSObject {
    NSXPCConnection * _connection;
    id /* block */  _errorHandler;
    <AMSEngagementServiceProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, retain) <AMSEngagementServiceProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)_newRemoteConnection;
- (void)_removeRemoteConnection;
- (id)connection;
- (void)dealloc;
- (id /* block */)errorHandler;
- (id)init;
- (id)proxy;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;

@end
