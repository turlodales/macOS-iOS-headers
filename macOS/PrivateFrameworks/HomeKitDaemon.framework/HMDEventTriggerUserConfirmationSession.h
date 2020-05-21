//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDEventTriggerSession.h>

#import "HMDHomeMessageReceiver.h"
#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "HMFTimerDelegate.h"

@class HMDEventTriggerDevice, HMDEventTriggerExecutionSession, HMDTriggerConfirmationTimer, HomeKitEventTriggerUserConfirmationReceiverSessionEvent, NSMutableArray, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDEventTriggerUserConfirmationSession : HMDEventTriggerSession <HMFDumpState, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver>
{
    HMDEventTriggerExecutionSession *_executionSession;
    HMDEventTriggerDevice *_requestingDevice;
    HMDTriggerConfirmationTimer *_userResponseTimer;
    HomeKitEventTriggerUserConfirmationReceiverSessionEvent *_metricEvent;
    NSMutableArray *_metricSendEvents;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *metricSendEvents; // @synthesize metricSendEvents=_metricSendEvents;
@property(retain, nonatomic) HomeKitEventTriggerUserConfirmationReceiverSessionEvent *metricEvent; // @synthesize metricEvent=_metricEvent;
@property(retain, nonatomic) HMDTriggerConfirmationTimer *userResponseTimer; // @synthesize userResponseTimer=_userResponseTimer;
@property(readonly, nonatomic) HMDEventTriggerDevice *requestingDevice; // @synthesize requestingDevice=_requestingDevice;
@property(nonatomic) __weak HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
- (void)_sessionComplete;
- (void)_handleUserPermissionRemoveDialogRequest:(id)arg1;
- (void)_removeUserDialog:(id)arg1;
- (void)_handleUserPermissionRemoteResponse:(id)arg1;
- (void)_userResponse:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userDidConfirmExecute:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)timerDidFire:(id)arg1;
- (void)_createBulletinNotification;
- (void)createBulletinNotification;
- (void)_askForUserPermissionFromDevice:(id)arg1 executionSessionID:(id)arg2;
- (void)askForUserPermission:(id)arg1;
- (void)_registerForMessages;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 requestingDevice:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

