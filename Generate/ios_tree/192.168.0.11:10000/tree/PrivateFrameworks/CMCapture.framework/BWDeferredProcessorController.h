/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWDeferredProcessorController : BWStillImageProcessorController {
    BWDeferredProcessorRequest * _currentRequest;
    NSMutableArray * _processorRequests;
    FigStateMachine * _stateMachine;
}

+ (void)initialize;

- (void)_process;
- (void)_serviceNextRequest;
- (void)_updateStateIfNeeded;
- (void)cancelProcessing;
- (void)dealloc;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (id)init;
- (void)inputReadyForProcessing:(id)arg1;
- (unsigned long long)type;

@end
