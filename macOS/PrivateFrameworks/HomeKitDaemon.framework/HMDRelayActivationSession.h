//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDFairPlaySAPSessionDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDFairPlaySAPSession, HMFTimer, NSObject, NSOperationQueue, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface HMDRelayActivationSession : HMFObject <HMDFairPlaySAPSessionDelegate, HMFTimerDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _state;
    HMDFairPlaySAPSession *_fairPlaySAPSession;
    HMFTimer *_fairPlaySessionTimer;
    NSURLSession *_urlSession;
    NSOperationQueue *_requestOperationQueue;
}

+ (id)logCategory;
+ (id)sharedSession;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) HMFTimer *fairPlaySessionTimer; // @synthesize fairPlaySessionTimer=_fairPlaySessionTimer;
@property(retain, nonatomic) HMDFairPlaySAPSession *fairPlaySAPSession; // @synthesize fairPlaySAPSession=_fairPlaySAPSession;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)timerDidFire:(id)arg1;
- (void)session:(id)arg1 didReceiveClientExchangeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveServerCertificateRequestWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)session:(id)arg1 didCloseWithError:(id)arg2;
- (void)_handleCertificateResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 fairPlaySession:(id)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)requestCertificateWithCertificateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleChallengeResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 fairPlaySession:(id)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)requestChallengeWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_verifyURLResponse:(id)arg1 responseData:(id)arg2 fairPlaySession:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleFairPlaySetupExchangeResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_requestFairPlaySetupExchangeWithExchangeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleFairPlayCertificateResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_requestFairPlayCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_teardownFairPlaySession;
- (void)_setupFairPlaySession;
- (void)_cancelAllPendingRequestOperations;
- (void)_suspendRequestOperations;
- (void)_resumeRequestOperations;
- (void)_addRequestOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

