//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/HMCameraControl.h>

@class HMCharacteristic, _HMCameraSettingsControl;

@interface HMCameraSettingsControl : HMCameraControl
{
    _HMCameraSettingsControl *_settingsControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _HMCameraSettingsControl *settingsControl; // @synthesize settingsControl=_settingsControl;
@property(readonly, nonatomic) HMCharacteristic *imageMirroring;
@property(readonly, nonatomic) HMCharacteristic *imageRotation;
@property(readonly, nonatomic) HMCharacteristic *digitalZoom;
@property(readonly, nonatomic) HMCharacteristic *opticalZoom;
@property(readonly, nonatomic) HMCharacteristic *targetVerticalTilt;
@property(readonly, nonatomic) HMCharacteristic *currentVerticalTilt;
@property(readonly, nonatomic) HMCharacteristic *targetHorizontalTilt;
@property(readonly, nonatomic) HMCharacteristic *currentHorizontalTilt;
@property(readonly, nonatomic) HMCharacteristic *nightVision;
- (id)initWithSettingsControl:(id)arg1;

@end

