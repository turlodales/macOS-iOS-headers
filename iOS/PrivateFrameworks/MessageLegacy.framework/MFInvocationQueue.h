/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator> {
    NSMutableArray * _items;
    NSConditionLock * _lock;
    unsigned long long  _maxThreads;
    unsigned long long  _numThreads;
    int  _threadPriorityTrigger;
    double  _threadRecycleTimeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long invocationCount;
@property (nonatomic) unsigned long long maxThreadCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long threadCount;
@property (nonatomic) int threadPriorityTrigger;
@property (nonatomic) double threadRecycleTimeout;

+ (void)flushAllInvocationQueues;
+ (id)sharedInvocationQueue;

- (void).cxx_destruct;
- (void)_drainQueue:(id)arg1;
- (void)addInvocation:(id)arg1;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (void)didCancel:(id)arg1;
- (id)init;
- (id)initWithMaxThreadCount:(unsigned long long)arg1;
- (unsigned long long)invocationCount;
- (unsigned long long)maxThreadCount;
- (void)removeAllItems;
- (void)setMaxThreadCount:(unsigned long long)arg1;
- (void)setThreadPriorityTrigger:(int)arg1;
- (void)setThreadRecycleTimeout:(double)arg1;
- (unsigned long long)threadCount;
- (int)threadPriorityTrigger;
- (double)threadRecycleTimeout;

@end
