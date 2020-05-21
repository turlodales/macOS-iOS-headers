//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString, NSURL;

@interface UNNotificationSound : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>
{
    long long _alertType;
    NSString *_alertTopic;
    NSString *_audioCategory;
    NSNumber *_audioVolume;
    double _maximumDuration;
    BOOL _critical;
    BOOL _shouldIgnoreRingerSwitch;
    BOOL _shouldRepeat;
    NSString *_toneFileName;
    NSURL *_toneFileURL;
    NSString *_toneIdentifier;
    unsigned long long _toneMediaLibraryItemIdentifier;
    NSString *_vibrationIdentifier;
    NSURL *_vibrationPatternFileURL;
}

+ (BOOL)supportsSecureCoding;
+ (id)_soundWithAlertType:(long long)arg1 audioVolume:(id)arg2 critical:(BOOL)arg3 toneFileName:(id)arg4;
+ (id)soundWithAlertType:(long long)arg1;
+ (id)soundNamed:(id)arg1;
+ (id)criticalSoundNamed:(id)arg1 withAudioVolume:(float)arg2;
+ (id)criticalSoundNamed:(id)arg1;
+ (id)defaultCriticalSoundWithAudioVolume:(float)arg1;
+ (id)defaultCriticalSound;
+ (id)defaultSystemSound;
+ (id)defaultSound;
- (void).cxx_destruct;
@property(readonly, getter=isCritical) BOOL critical; // @synthesize critical=_critical;
@property(readonly, copy) NSURL *vibrationPatternFileURL; // @synthesize vibrationPatternFileURL=_vibrationPatternFileURL;
@property(readonly, copy) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(readonly) long long alertType; // @synthesize alertType=_alertType;
@property(readonly, copy) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(readonly, copy) NSURL *toneFileURL; // @synthesize toneFileURL=_toneFileURL;
@property(readonly, copy) NSString *toneFileName; // @synthesize toneFileName=_toneFileName;
@property(readonly) BOOL shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(readonly) BOOL shouldIgnoreRingerSwitch; // @synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch;
@property(readonly) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property(readonly) unsigned long long toneMediaLibraryItemIdentifier; // @synthesize toneMediaLibraryItemIdentifier=_toneMediaLibraryItemIdentifier;
@property(readonly, copy) NSNumber *audioVolume; // @synthesize audioVolume=_audioVolume;
@property(readonly, copy) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(readonly, copy) NSString *alertTopic; // @synthesize alertTopic=_alertTopic;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 audioCategory:(id)arg3 audioVolume:(id)arg4 critical:(BOOL)arg5 maximumDuration:(double)arg6 shouldIgnoreRingerSwitch:(BOOL)arg7 shouldRepeat:(BOOL)arg8 toneFileName:(id)arg9 toneFileURL:(id)arg10 toneIdentifier:(id)arg11 toneMediaLibraryItemIdentifier:(unsigned long long)arg12 vibrationIdentifier:(id)arg13 vibrationPatternFileURL:(id)arg14;

@end

