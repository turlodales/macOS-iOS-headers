//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings
{
}

+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1;
+ (id)defaultAudioOutputSettings;
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1;
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id *)arg3;
+ (id)registeredOutputSettingsClasses;
- (BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
@property(readonly, nonatomic) NSDictionary *audioSettingsDictionary;
- (id)compatibleMediaTypes;
- (id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end

