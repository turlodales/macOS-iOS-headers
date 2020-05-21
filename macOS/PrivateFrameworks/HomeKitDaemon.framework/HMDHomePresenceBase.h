//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDHomeMessageReceiver.h"
#import "HMFLogging.h"

@class HMDHome, HMDNotificationRegistration, HMFMessageDispatcher, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDHomePresenceBase : HMFObject <HMFLogging, HMDHomeMessageReceiver>
{
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_logString;
    NSUUID *_uuid;
    HMFMessageDispatcher *_msgDispatcher;
    HMDNotificationRegistration *_notificationRegistration;
}

+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)residentChanged;
- (void)timerFired:(id)arg1;
- (void)handleHomeDataLoadedNotification:(id)arg1;
- (void)_registerForMessages;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;
- (void)_initialize:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

