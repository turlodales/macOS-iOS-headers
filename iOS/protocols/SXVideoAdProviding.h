/* Generated by RuntimeBrowser.
 */

@protocol SXVideoAdProviding <SXVideoProviding, SXVideoAdEventTracker>

@required

- (bool)hasAction;
- (void)presentAction;
- (unsigned long long)skipThreshold;

@optional

- (UIView *)metricsView;
- (UIButton *)privacyMarker;

@end
