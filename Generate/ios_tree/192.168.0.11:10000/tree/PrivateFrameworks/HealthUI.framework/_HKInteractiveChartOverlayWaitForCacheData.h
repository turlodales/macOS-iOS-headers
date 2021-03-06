/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKInteractiveChartOverlayWaitForCacheData : NSObject {
    HKInteractiveChartOverlayViewController * _overlayController;
    NSMutableArray * _waitForDataSources;
}

@property (nonatomic) HKInteractiveChartOverlayViewController *overlayController;
@property (nonatomic, retain) NSMutableArray *waitForDataSources;

- (void).cxx_destruct;
- (id)_findDataSource:(id)arg1;
- (void)addWaitForDataSource:(id)arg1 graphSeriesContext:(id)arg2 timeScope:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 priorityDelegate:(id)arg6 completion:(id /* block */)arg7;
- (id)initWithOverlayController:(id)arg1;
- (id)overlayController;
- (void)removeWaitForDataSource:(id)arg1;
- (void)setOverlayController:(id)arg1;
- (void)setWaitForDataSources:(id)arg1;
- (id)waitForDataSources;

@end
