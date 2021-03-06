/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPTimer : NSObject {
    _Atomic bool  _active;
    bool  _isOneShot;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
}

+ (id)timerWithInterval:(unsigned long long)arg1 unit:(unsigned long long)arg2 oneShot:(bool)arg3 andBlock:(id /* block */)arg4;
+ (id)timerWithIntervalSeconds:(unsigned long long)arg1 isOneShot:(bool)arg2 andBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (void)destroy;
- (id)initWithIntervalNanoseconds:(unsigned long long)arg1 isOneShot:(bool)arg2 andBlock:(id /* block */)arg3;

@end
