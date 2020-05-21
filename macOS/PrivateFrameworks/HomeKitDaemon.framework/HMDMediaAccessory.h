//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessory.h>

#import "HMFLogging.h"

@class HMDMediaAccessoryAdvertisement, HMDMediaProfile, NSString;

@interface HMDMediaAccessory : HMDAccessory <HMFLogging>
{
    HMDMediaAccessoryAdvertisement *_advertisement;
    HMDMediaProfile *_mediaProfile;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) HMDMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)handleUpdatedPassword:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (long long)reachableTransports;
- (void)setRemotelyReachable:(BOOL)arg1;
- (void)notifyConnectivityChangedWithReachabilityState:(BOOL)arg1;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (void)setAdvertisement:(id)arg1;
@property(readonly, copy) HMDMediaAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void)handleRoomChanged:(id)arg1;
- (void)handleRoomNameChanged:(id)arg1;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3;
- (id)name;
- (BOOL)providesHashRouteID;
- (void)removeAdvertisement:(id)arg1;
- (void)addAdvertisement:(id)arg1;
- (id)_createMediaProfile;
- (BOOL)_shouldFilterAccessoryProfile:(id)arg1;
- (void)_registerForMessages;
- (id)init;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)assistantObject;
- (id)urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

