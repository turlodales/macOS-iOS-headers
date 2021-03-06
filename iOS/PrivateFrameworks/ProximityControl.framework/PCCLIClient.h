/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
 */

@interface PCCLIClient : NSObject <PCActivatable, PCBannerServerXPCInterface, PCDiagnosticServerXPCInterface> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_xpcEnsureStarted;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dismissBannerWithCompletion:(id /* block */)arg1;
- (id)dispatchQueue;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)presentBannerWithCompletion:(id /* block */)arg1;
- (void)setBannerScaleProgress:(float)arg1 completion:(id /* block */)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)stateWithCompletion:(id /* block */)arg1;
- (void)tapBannerWithCompletion:(id /* block */)arg1;

@end
