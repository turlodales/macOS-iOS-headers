//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDCameraProfileSettingsManager;

@protocol HMDCameraProfileSettingsManagerDelegate <NSObject>
- (void)cameraProfileSettingsManager:(HMDCameraProfileSettingsManager *)arg1 canDisableRecordingWithCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)cameraProfileSettingsManager:(HMDCameraProfileSettingsManager *)arg1 canEnableRecordingWithCompletion:(void (^)(BOOL, NSError *))arg2;
@end

