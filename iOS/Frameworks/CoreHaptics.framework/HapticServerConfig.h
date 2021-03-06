/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

@interface HapticServerConfig : NSObject {
    float  _hapticContinuousTimeLimit;
    bool  _supportsAdvancedPatternPlayers;
    bool  _supportsAudioPlayback;
    bool  _usingInternalHaptics;
}

@property (readonly) float hapticContinuousTimeLimit;
@property (readonly) bool supportsAdvancedPatternPlayers;
@property (readonly) bool supportsAudioPlayback;
@property (readonly) bool usingInternalHaptics;

- (float)hapticContinuousTimeLimit;
- (id)initWithHapticPlayer:(id)arg1 error:(id*)arg2;
- (bool)supportsAdvancedPatternPlayers;
- (bool)supportsAudioPlayback;
- (bool)usingInternalHaptics;

@end
