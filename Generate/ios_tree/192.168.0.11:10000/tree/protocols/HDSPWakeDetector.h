/* Generated by RuntimeBrowser.
 */

@protocol HDSPWakeDetector <NSObject>

@required

- (unsigned long long)detectionWindowMinutes;
- (bool)isDetecting;
- (void)setWakeDetectorDelegate:(id <HDSPWakeDetectorDelegate>)arg1;
- (void)startDetecting;
- (void)stopDetecting;
- (<HDSPWakeDetectorDelegate> *)wakeDetectorDelegate;

@end
