//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class AVOutputContextInternal, NSString;

@interface AVOutputContext : NSObject <NSSecureCoding>
{
    AVOutputContextInternal *_outputContext;
}

+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (struct OpaqueFigEndpointPicker *)copySystemVideoPicker;
+ (BOOL)supportsSecureCoding;
+ (id)sharedSystemScreenContext;
+ (id)sharedSystemAudioContext;
+ (id)outputContext;
- (BOOL)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2;
- (id)outputDevice;
- (id)associatedAudioDeviceID;
@property(readonly, nonatomic) NSString *deviceName;
- (void)setApplicationProcessID:(int)arg1;
- (int)applicationProcessID;
- (id)contextUUID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_removeFigEndpointPickerNotifications;
- (void)_addFigEndpointPickerNotifications;
- (void)_handlePickerServerConnectionDiedNotification;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (id)_weakReference;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (id)initWithContextUUID:(id)arg1;
- (id)init;

@end

