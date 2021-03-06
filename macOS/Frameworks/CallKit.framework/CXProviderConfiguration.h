//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class CXSandboxExtendedURL, NSArray, NSData, NSOrderedSet, NSSet, NSString;

@interface CXProviderConfiguration : NSObject <NSSecureCoding, CXCopying, NSCopying>
{
    BOOL _includesCallsInRecents;
    BOOL _supportsVideo;
    BOOL _supportsAudioOnly;
    BOOL _supportsEmergency;
    BOOL _supportsVoicemail;
    BOOL _supportsCurrentPlatform;
    unsigned int _audioSessionID;
    NSString *_localizedName;
    NSData *_iconTemplateImageData;
    unsigned long long _maximumCallGroups;
    unsigned long long _maximumCallsPerCallGroup;
    NSSet *_supportedHandleTypes;
    NSArray *_emergencyHandles;
    NSArray *_emergencyLabeledHandles;
    NSArray *_handoffIdentifiers;
    NSOrderedSet *_prioritizedSenderIdentities;
    CXSandboxExtendedURL *_ringtoneSoundURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL supportsCurrentPlatform; // @synthesize supportsCurrentPlatform=_supportsCurrentPlatform;
@property(nonatomic) BOOL supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;
@property(nonatomic) BOOL supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property(nonatomic) BOOL supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(copy, nonatomic) CXSandboxExtendedURL *ringtoneSoundURL; // @synthesize ringtoneSoundURL=_ringtoneSoundURL;
@property(copy, nonatomic) NSOrderedSet *prioritizedSenderIdentities; // @synthesize prioritizedSenderIdentities=_prioritizedSenderIdentities;
@property(copy, nonatomic) NSArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property(copy, nonatomic) NSArray *emergencyLabeledHandles; // @synthesize emergencyLabeledHandles=_emergencyLabeledHandles;
@property(copy, nonatomic) NSArray *emergencyHandles; // @synthesize emergencyHandles=_emergencyHandles;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(copy, nonatomic) NSSet *supportedHandleTypes; // @synthesize supportedHandleTypes=_supportedHandleTypes;
@property(nonatomic) BOOL supportsVideo; // @synthesize supportsVideo=_supportsVideo;
@property(nonatomic) BOOL includesCallsInRecents; // @synthesize includesCallsInRecents=_includesCallsInRecents;
@property(nonatomic) unsigned long long maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property(nonatomic) unsigned long long maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property(copy, nonatomic) NSData *iconTemplateImageData; // @synthesize iconTemplateImageData=_iconTemplateImageData;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToConfiguration:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) NSString *ringtoneSound;
@property(copy, nonatomic) NSSet *senderIdentities;
@property(readonly, copy) NSString *description;
- (id)initWithLocalizedName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

