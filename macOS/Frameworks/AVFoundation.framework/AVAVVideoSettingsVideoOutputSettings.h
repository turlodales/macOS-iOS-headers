//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVVideoOutputSettings.h>

#import <AVFoundation/AVReencodedVideoSettingsForFig-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig>
{
    NSDictionary *_adaptedVideoCompressionProperties;
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

+ (BOOL)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id *)arg4;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
@property(readonly, nonatomic) NSDictionary *videoCompressionProperties;
@property(readonly, nonatomic) NSDictionary *videoEncoderSpecification;
@property(readonly, nonatomic) unsigned int videoCodecType;
- (id)cleanApertureDictionary;
- (id)pixelAspectRatioDictionary;
- (int)height;
- (int)width;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (BOOL)willYieldCompressedSamples;
- (void)dealloc;
- (id)initWithTrustedAVVideoSettingsDictionary:(id)arg1;
- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end

