//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSObject<OS_dispatch_queue>, SPBeaconManager, WPDPendingCompletions;

@interface WPDSearchPartyAgent : NSObject
{
    BOOL _isTestMode;
    BOOL _disableScans;
    BOOL _spBeaconState;
    unsigned char _spBeaconStatus;
    BOOL _testBeaconState;
    unsigned char _testBeaconStatus;
    NSData *_beaconKey;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_spBeaconReserved;
    NSData *_testBeaconReserved;
    SPBeaconManager *_beaconManager;
    CDUnknownBlockType _beaconChange;
    NSArray *_spBeaconKeys;
    NSDate *_spBeaconKeysUpdated;
    CDUnknownBlockType _beaconStateChangedBlock;
    CDUnknownBlockType _beaconKeysChangedBlock;
    CDUnknownBlockType _beaconStatusChangedBlock;
    CDUnknownBlockType _nearbyTokensChangedBlock;
    CDUnknownBlockType _tokensChange;
    NSArray *_spNearbyTokens;
    NSDate *_spNearbyTokensUpdated;
    NSArray *_testNearbyTokens;
    NSArray *_testBeaconKeys;
    NSDate *_testNearbyTokensUpdated;
    NSDate *_testBeaconKeysUpdated;
    WPDPendingCompletions *_pendingKeyCompletions;
    WPDPendingCompletions *_pendingTokenCompletions;
}

+ (id)spBeaconKeyFromTestKey:(id)arg1;
- (void).cxx_destruct;
@property(retain) WPDPendingCompletions *pendingTokenCompletions; // @synthesize pendingTokenCompletions=_pendingTokenCompletions;
@property(retain) WPDPendingCompletions *pendingKeyCompletions; // @synthesize pendingKeyCompletions=_pendingKeyCompletions;
@property(retain) NSDate *testBeaconKeysUpdated; // @synthesize testBeaconKeysUpdated=_testBeaconKeysUpdated;
@property(retain) NSDate *testNearbyTokensUpdated; // @synthesize testNearbyTokensUpdated=_testNearbyTokensUpdated;
@property(retain) NSArray *testBeaconKeys; // @synthesize testBeaconKeys=_testBeaconKeys;
@property(retain) NSArray *testNearbyTokens; // @synthesize testNearbyTokens=_testNearbyTokens;
@property(retain) NSDate *spNearbyTokensUpdated; // @synthesize spNearbyTokensUpdated=_spNearbyTokensUpdated;
@property(retain) NSArray *spNearbyTokens; // @synthesize spNearbyTokens=_spNearbyTokens;
@property(copy) CDUnknownBlockType tokensChange; // @synthesize tokensChange=_tokensChange;
@property(copy) CDUnknownBlockType nearbyTokensChangedBlock; // @synthesize nearbyTokensChangedBlock=_nearbyTokensChangedBlock;
@property(copy) CDUnknownBlockType beaconStatusChangedBlock; // @synthesize beaconStatusChangedBlock=_beaconStatusChangedBlock;
@property(copy) CDUnknownBlockType beaconKeysChangedBlock; // @synthesize beaconKeysChangedBlock=_beaconKeysChangedBlock;
@property(copy) CDUnknownBlockType beaconStateChangedBlock; // @synthesize beaconStateChangedBlock=_beaconStateChangedBlock;
@property(retain) NSDate *spBeaconKeysUpdated; // @synthesize spBeaconKeysUpdated=_spBeaconKeysUpdated;
@property(retain) NSArray *spBeaconKeys; // @synthesize spBeaconKeys=_spBeaconKeys;
@property(copy) CDUnknownBlockType beaconChange; // @synthesize beaconChange=_beaconChange;
@property(retain) SPBeaconManager *beaconManager; // @synthesize beaconManager=_beaconManager;
@property(retain) NSData *testBeaconReserved; // @synthesize testBeaconReserved=_testBeaconReserved;
@property unsigned char testBeaconStatus; // @synthesize testBeaconStatus=_testBeaconStatus;
@property BOOL testBeaconState; // @synthesize testBeaconState=_testBeaconState;
@property(readonly) NSData *spBeaconReserved; // @synthesize spBeaconReserved=_spBeaconReserved;
@property unsigned char spBeaconStatus; // @synthesize spBeaconStatus=_spBeaconStatus;
@property BOOL spBeaconState; // @synthesize spBeaconState=_spBeaconState;
@property BOOL disableScans; // @synthesize disableScans=_disableScans;
@property(readonly) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSData *beaconKey; // @synthesize beaconKey=_beaconKey;
@property BOOL isTestMode; // @synthesize isTestMode=_isTestMode;
- (void)updateTestBeaconState:(id)arg1;
- (void)updateTestBeaconExtended:(id)arg1;
- (void)updateTestBeaconStatus:(id)arg1;
- (void)updateTestBeaconKeys:(id)arg1;
- (void)updateTestNearOwnerTokens:(id)arg1;
- (void)stopTest;
- (void)startTest;
- (void)rollTokensWithRequestID:(unsigned long long)arg1;
- (void)rollTokens_async;
- (void)rollTokens_async_completion:(CDUnknownBlockType)arg1;
- (void)rollKeysWithRequestID:(unsigned long long)arg1;
- (void)rollKeys_async;
- (void)rollKeys_async_completion:(CDUnknownBlockType)arg1;
- (void)completedTokenRequestID:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)completedKeyRequestID:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)initSPObjects;
- (id)generateStateDump;
- (void)dealloc;
@property(readonly) NSDate *beaconKeysUpdated;
@property(readonly) NSArray *beaconKeys;
@property(readonly) NSDate *nearbyTokensUpdated;
@property(readonly) NSArray *nearbyTokens;
@property(readonly) NSData *beaconReserved;
@property(readonly) unsigned char beaconStatus;
@property(readonly) BOOL beaconState;
- (id)initWithQueue:(id)arg1 beaconChange:(CDUnknownBlockType)arg2 tokensChange:(CDUnknownBlockType)arg3;

@end

