//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFMessageReceiver.h"

@class HMFUnfairLock, HMMutableArray, NSArray, NSObject<OS_dispatch_queue>, NSString, NSUUID, _HMContext;

@interface HMAccessoryBrowser : NSObject <HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    BOOL _browsing;
    id <HMAccessoryBrowserDelegate> _delegate;
    _HMContext *_context;
    NSUUID *_uuid;
    HMMutableArray *_accessories;
    unsigned long long _generationCounter;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isBrowsing) BOOL browsing; // @synthesize browsing=_browsing;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(retain, nonatomic) HMMutableArray *accessories; // @synthesize accessories=_accessories;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleNewAccessoriesRemoved:(id)arg1;
- (void)_handleNewAccessoriesFound:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_updateNewAccessories:(id)arg1;
- (void)_fetchNewAccessories;
- (void)_fetchNewAccessoriesWithPrivacyCheck;
- (void)_start;
- (void)_stopSearchingForNewAccessories;
- (void)stopSearchingForNewAccessories;
- (void)handleStartWithError:(id)arg1 response:(id)arg2;
- (void)_startSearchingForNewAccessories;
- (void)startSearchingForNewAccessories;
@property(readonly, copy, nonatomic) NSArray *discoveredAccessories;
@property(nonatomic) __weak id <HMAccessoryBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

