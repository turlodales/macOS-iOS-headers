//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HAPBTLECentralManagerDelegate.h"
#import "HMFTimerDelegate.h"

@class CUBLEAdvertiser, HAPBTLECentralManager, HMDAccessoryQueues, HMDHAPAccessory, HMFTimer, HMFUnfairLock, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface HMDBTLEAdvertiser : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate>
{
    NSObject<OS_dispatch_queue> *workQueue;
    CUBLEAdvertiser *leAdvertiser;
    HMFTimer *advertisementTimer;
    HMDHAPAccessory *accessory;
    HAPBTLECentralManager *centralManager;
    HMDAccessoryQueues *powerOnQueues;
    HMFUnfairLock *_lock;
}

+ (id)initializeAdvertiser;
+ (id)sharedAdvertiser;
- (void).cxx_destruct;
@property(retain, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) HMDAccessoryQueues *powerOnQueues; // @synthesize powerOnQueues;
@property(retain, nonatomic) HAPBTLECentralManager *centralManager; // @synthesize centralManager;
@property(retain, nonatomic) HMDHAPAccessory *accessory; // @synthesize accessory;
@property(retain, nonatomic) HMFTimer *advertisementTimer; // @synthesize advertisementTimer;
@property(retain, nonatomic) CUBLEAdvertiser *leAdvertiser; // @synthesize leAdvertiser;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue;
@property(readonly, getter=isReady) BOOL isReady;
- (BOOL)isAdvertisingForAccessory:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)_advertisementTimeout;
- (void)powerOn:(id)arg1;
- (void)_startAdvertising;
- (void)cancelOn:(id)arg1;
- (void)_cancelOn:(id)arg1;
- (void)_completePendingPowerOnRequest:(id)arg1;
- (void)stopAdvertisement:(id)arg1;
- (void)_stopAdvertisement:(id)arg1;
- (void)_clearAdvertiser;
- (void)didUpdateBTLEState:(long long)arg1;
- (void)_flushQueues;
- (void)_flushQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

