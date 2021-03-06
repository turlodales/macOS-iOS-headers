//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVEndpoint.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class MRAVDistantOutputDevice, MRDistantExternalDevice, NSArray, NSObject, NSString, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding>
{
    BOOL _canModifyGroupMembership;
    long long _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
    NSObject<OS_dispatch_queue> *_externalDeviceQueue;
    NSArray *_distantOutputDevices;
    NSArray *_distantPersonalOutputDevices;
    MRAVDistantOutputDevice *_distantGroupLeader;
    MRDistantExternalDevice *_distantExternalDevice;
    NSXPCListenerEndpoint *_externalDeviceListenerEndpoint;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint; // @synthesize externalDeviceListenerEndpoint=_externalDeviceListenerEndpoint;
@property(retain, nonatomic) MRDistantExternalDevice *distantExternalDevice; // @synthesize distantExternalDevice=_distantExternalDevice;
@property(retain, nonatomic) MRAVDistantOutputDevice *distantGroupLeader; // @synthesize distantGroupLeader=_distantGroupLeader;
@property(copy, nonatomic) NSArray *distantPersonalOutputDevices; // @synthesize distantPersonalOutputDevices=_distantPersonalOutputDevices;
@property(copy, nonatomic) NSArray *distantOutputDevices; // @synthesize distantOutputDevices=_distantOutputDevices;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceQueue; // @synthesize externalDeviceQueue=_externalDeviceQueue;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (void)setLocalizedName:(id)arg1;
- (id)localizedName;
- (long long)connectionType;
- (BOOL)canModifyGroupMembership;
- (BOOL)isProxyGroupPlayer;
- (id)designatedGroupLeader;
- (id)externalDevice;
- (id)personalOutputDevices;
- (id)outputDevices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1;

@end

