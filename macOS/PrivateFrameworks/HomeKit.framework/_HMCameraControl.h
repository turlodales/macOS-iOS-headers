//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFMessageReceiver.h"

@class HMFUnfairLock, HMHome, HMService, NSObject<OS_dispatch_queue>, NSString, NSUUID, _HMCameraProfile, _HMContext;

__attribute__((visibility("hidden")))
@interface _HMCameraControl : NSObject <HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    _HMContext *_context;
    _HMCameraProfile *_cameraProfile;
    HMService *_service;
    NSUUID *_profileUniqueIdentifier;
    HMHome *_home;
}

- (void).cxx_destruct;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
@property(readonly, nonatomic) HMService *service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak _HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
- (void)_registerNotificationHandlers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

