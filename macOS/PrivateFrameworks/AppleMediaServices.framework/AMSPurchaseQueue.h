//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSBagConsumer.h"

@class AMSPurchaseProtocolHandler, AMSPurchaseQueueConfiguration, AMSURLSession, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface AMSPurchaseQueue : NSObject <AMSBagConsumer>
{
    AMSURLSession *_session;
    BOOL _isSuspeneded;
    NSOperationQueue *_backgroundQueue;
    AMSPurchaseQueueConfiguration *_config;
    NSMutableArray *_batches;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_enqueue;
    NSLock *_lock;
    AMSPurchaseProtocolHandler *_protocolHandler;
}

+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(retain) AMSURLSession *session; // @synthesize session=_session;
@property(retain) AMSPurchaseProtocolHandler *protocolHandler; // @synthesize protocolHandler=_protocolHandler;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
@property BOOL isSuspeneded; // @synthesize isSuspeneded=_isSuspeneded;
@property(retain) NSObject<OS_dispatch_queue> *enqueue; // @synthesize enqueue=_enqueue;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) NSMutableArray *batches; // @synthesize batches=_batches;
@property(retain) AMSPurchaseQueueConfiguration *config; // @synthesize config=_config;
@property(retain) NSOperationQueue *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
- (id)_processURLRequest:(id)arg1 error:(id *)arg2;
- (void)_processPurchase:(id)arg1;
- (id)_purchaseContextForPurchase:(id)arg1;
- (void)_handlePurchaseCompleted:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)_handleNextPurchase;
- (void)setSuspended:(BOOL)arg1 logUUID:(id)arg2;
- (BOOL)finishPurchaseId:(id)arg1 withError:(id)arg2;
- (id)enquePurchases:(id)arg1;
- (id)contextForPurchaseId:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

