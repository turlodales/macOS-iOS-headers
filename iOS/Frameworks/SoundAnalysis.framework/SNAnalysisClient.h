/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNAnalysisClient : NSObject {
    id /* block */  _connectionToServerGenerator;
    NSMutableArray * _pendingInvalidationHandlers;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnectionToServer;
}

+ (id)defaultClient;
+ (id)newConnectionToMachServiceWithName:(id)arg1 lostConnectionHandler:(id /* block */)arg2 queue:(id)arg3;

- (void).cxx_destruct;
- (id)_connectionToServerWithInvalidationHandler:(id /* block */)arg1 queue:(id)arg2;
- (id)_createRemoteSystemAudioAnalyzerWithInvalidationHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)_handleLostConnection;
- (id)_remoteResourceCoordinatorWithInvalidationHandler:(id /* block */)arg1 queue:(id)arg2;
- (id)createRemoteSystemAudioAnalyzerWithInvalidationHandler:(id /* block */)arg1 queue:(id)arg2;
- (id)init;
- (id)initToConnectToMachServiceWithName:(id)arg1 queue:(id)arg2;
- (id)initWithConnectionGenerator:(id /* block */)arg1 queue:(id)arg2;

@end
