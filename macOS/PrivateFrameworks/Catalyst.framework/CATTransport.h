//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CATOperationQueue, CATStateMachine, NSString;
@protocol CATTransportDelegate;

@interface CATTransport : NSObject
{
    CATStateMachine *mFSM;
    CATOperationQueue *mControlQueue;
    CATOperationQueue *mMessageQueue;
    CATTransport *mStrongSelf;
    NSString *_name;
    id <CATTransportDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CATTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)delegateDidInvalidate;
- (void)enqueueDelegateDidInterruptWithError:(id)arg1;
- (void)enqueueDelegateCouldNotConnectWithError:(id)arg1;
- (void)enqueueDelegateDidReceiveMessage:(id)arg1;
- (void)enqueueDelegateDidConnect;
- (void)delegateDidResume;
- (id)operationToSendMessage:(id)arg1;
- (void)invalidateConnection;
- (void)suspendConnection;
- (void)resumeConnection;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)invalidSendForMessage:(id)arg1;
- (void)enqueueSendForMessage:(id)arg1;
- (void)suspendQueue;
- (void)resumeQueue;
- (void)suspendQueueAndConnection;
- (void)resumeQueueAndConnection;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)sendHelloMessageAndResumeQueue;
- (void)didInvalidate;
- (void)didInterruptWithError:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)dealloc;

@end

