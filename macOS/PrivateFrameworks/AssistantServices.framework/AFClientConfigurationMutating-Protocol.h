//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFAccessibilityState, AFAudioPlaybackRequest;

@protocol AFClientConfigurationMutating <NSObject>
- (void)setTwoShotAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;
- (void)setTapToSiriAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setIsDeviceInStarkMode:(BOOL)arg1;
- (void)setIsDeviceInCarDNDMode:(BOOL)arg1;
- (void)setIsDeviceInSetupFlow:(BOOL)arg1;
- (void)setDeviceRingerSwitchState:(long long)arg1;
- (void)setAccessibilityState:(AFAccessibilityState *)arg1;
@end

