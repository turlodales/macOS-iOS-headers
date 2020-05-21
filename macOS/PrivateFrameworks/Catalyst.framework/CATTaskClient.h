//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CATTransportDelegate.h"

@class CATStateMachine, CATTransport, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_group>, NSString, NSUUID;

@interface CATTaskClient : NSObject <CATTransportDelegate>
{
    CATStateMachine *mFSM;
    CATTransport *mTransport;
    NSMutableSet *mActiveRemoteTaskOperations;
    NSMapTable *mRemoteTaskByUUID;
    NSMutableArray *mEnqueuedMessages;
    NSMutableArray *mEnqueuedTaskUUIDs;
    NSHashTable *mOrphanedTransports;
    CATTaskClient *mStrongSelf;
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
    BOOL mIsStarting;
    NSUUID *_sessionUUID;
    id <CATTaskClientDelegate> _delegate;
    NSDictionary *_userInfo;
    NSDictionary *_serverUserInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *serverUserInfo; // @synthesize serverUserInfo=_serverUserInfo;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <CATTaskClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(readonly, nonatomic) CATTransport *transport; // @synthesize transport=mTransport;
- (void)delegateDidInvalidate;
- (void)delegateWillInvalidate;
- (void)delegateDidDisconnect;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidConnect;
- (void)delegatedidReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)processNotificationMessage:(id)arg1;
- (void)processTaskMessage:(id)arg1;
- (void)processSessionMessage:(id)arg1;
- (void)transportDidInvalidate:(id)arg1;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
- (void)transport:(id)arg1 didSendMessage:(id)arg2;
- (void)transportDidResume:(id)arg1;
- (void)activeOperationDidFinish:(id)arg1;
- (void)remoteTaskOperation:(id)arg1 preparedMessage:(id)arg2;
- (void)delegateDidInvalidateAndFinalize;
- (void)enqueueMessage:(id)arg1;
- (void)sendMessageThroughTransport:(id)arg1;
- (void)resumeSession;
- (void)sendMessage:(id)arg1;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;
- (void)abandonTransportClearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;
- (void)sessionDidInvalidate;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1;
- (void)resumeWithTaskUUIDs:(id)arg1;
- (void)sessionResumedWithTaskUUIDs:(id)arg1;
- (void)abandonTransport;
- (void)resumeTransport:(id)arg1;
- (id)captureTransport;
- (void)resumeCapturedTransportFromTaskClient:(id)arg1;
- (void)taskOperationDidFailWithInvalidTaskClient:(id)arg1;
- (void)trackTaskOperation:(id)arg1;
- (void)enqueueTaskOperation:(id)arg1;
- (void)didPrepareTaskOperation:(id)arg1;
- (void)invalidateWithError:(id)arg1;
- (void)invalidate;
- (void)disconnect;
- (void)connectWithTransportFromTaskClient:(id)arg1;
- (void)connectWithTransport:(id)arg1;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (id)prepareTaskOperationForRequest:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

