/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextInputSessionActionAnalytics : NSObject {
    NSMutableSet * _accumulators;
    <UITextInputSessionActionAnalyticsDelegateSource> * _delegateSource;
    unsigned long long  _maxDepth;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableOrderedSet * _recentActions;
}

@property (nonatomic) <UITextInputSessionActionAnalyticsDelegateSource> *delegateSource;

+ (void)addEndingObserver:(id)arg1;
+ (id)allowedValuesForTextInputSource;
+ (void)q_notifyEndingObserversWithSessionAnalytics:(id)arg1;
+ (void)removeEndingObserver:(id)arg1;
+ (id)stringValueForSource:(long long)arg1;

- (void).cxx_destruct;
- (id)_instanceOfActionClass:(Class)arg1;
- (void)addAccumulator:(id)arg1;
- (id)allAccumulatorNames;
- (id)delegateSource;
- (void)didBegin;
- (void)didChangeToSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 relativeRangeBefore:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)didDeleteBackward:(unsigned long long)arg1 relativeRangeBefore:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)didInsertText:(id)arg1 relativeRangeBefore:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)didOther;
- (void)didRedo;
- (void)didUndo;
- (void)enumerateAnalytics:(id /* block */)arg1;
- (id)init;
- (void)q_addAccumulator:(id)arg1;
- (void)q_addActionAndUpdate:(id)arg1;
- (void)q_flushRecentActions;
- (void)q_setupDefaultAnalytics;
- (void)q_updateAnalyticsFromAccumulators;
- (void)setDelegateSource:(id)arg1;
- (void)writeAnalytics;

@end
