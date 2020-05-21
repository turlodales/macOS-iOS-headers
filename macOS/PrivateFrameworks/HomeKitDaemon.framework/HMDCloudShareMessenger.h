//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "HMFMessageReceiver.h"

@class HMFMessageDispatcher, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDCloudShareMessenger : HMFObject <HMFLogging, HMFMessageReceiver>
{
    NSUUID *_messageTargetUUID;
    id <HMDCloudShareMessengerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_messageDispatcher;
    CDUnknownBlockType _shareInvitationRetryHandler;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType shareInvitationRetryHandler; // @synthesize shareInvitationRetryHandler=_shareInvitationRetryHandler;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCloudShareMessengerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (void)handleRequestInviteMessage:(id)arg1;
- (void)handleInviteMessage:(id)arg1;
- (void)_sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 retryCount:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestShareInvitationDataFromUser:(id)arg1;
- (void)sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unconfigure;
- (void)configureWithHome:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3;
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

