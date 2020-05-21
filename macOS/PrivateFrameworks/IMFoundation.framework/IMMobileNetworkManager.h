//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSNumber, NSRecursiveLock;

@interface IMMobileNetworkManager : NSObject
{
    BOOL _registered;
    BOOL _shouldBringUpDataContext;
    BOOL _isDataPossible;
    BOOL _isDataContextActive;
    BOOL _isDataIndicatorNone;
    BOOL _isDataContextUsable;
    NSRecursiveLock *_lock;
    NSMutableSet *_cellAutoAssociationTokens;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL isDataContextUsable; // @synthesize isDataContextUsable=_isDataContextUsable;
@property(nonatomic) BOOL isDataIndicatorNone; // @synthesize isDataIndicatorNone=_isDataIndicatorNone;
@property(nonatomic) BOOL isDataContextActive; // @synthesize isDataContextActive=_isDataContextActive;
@property(nonatomic) BOOL isDataPossible; // @synthesize isDataPossible=_isDataPossible;
@property(nonatomic) BOOL shouldBringUpDataContext; // @synthesize shouldBringUpDataContext=_shouldBringUpDataContext;
@property(nonatomic) BOOL registered; // @synthesize registered=_registered;
@property(retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens; // @synthesize cellularAutoAssociationTokens=_cellAutoAssociationTokens;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)setDataConnectionActive:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isDataConnectionActive;
@property(readonly, nonatomic) BOOL isDataSwitchEnabled;
@property(readonly, nonatomic) BOOL hasLTEDataConnection;
@property(readonly, nonatomic) BOOL has2GDataConnection;
@property(readonly, nonatomic) BOOL dataConnectionExists;
- (BOOL)_legacy_inValidSIMState;
@property(readonly, nonatomic) BOOL inValidSIMState;
- (void)showSIMUnlock;
- (id)_telephonyDataSIMStatus;
@property(readonly, nonatomic) BOOL isSIMLocked;
@property(readonly, nonatomic) BOOL isSIMRemoved;
@property(readonly, nonatomic) BOOL requiresSIMInserted;
- (void)_makeDataConnectionAvailable:(BOOL)arg1;
- (BOOL)_isDataConnectionAvailable;
- (void)removeCellularAutoAssociationClientToken:(id)arg1;
- (void)addCellularAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) BOOL autoAssociateCellular;
- (void)showNetworkOptions;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) BOOL autoAssociateWiFi;
@property(readonly, nonatomic) BOOL isWiFiCaptive;
@property(readonly, nonatomic) BOOL isWiFiEnabled;
@property(readonly, nonatomic) BOOL isWiFiAssociated;
@property(readonly, nonatomic) BOOL isWiFiUsable;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRate;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRSSI;
@property(readonly, retain, nonatomic) NSNumber *wiFiSignalStrength;
@property(readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;
@property(readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property(readonly, nonatomic) BOOL isHostingWiFiHotSpot;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
@property(readonly, nonatomic) BOOL disableFastDormancy;
- (void)_lockedAdjustCellularAutoAssociation;
- (void)_adjustCellularAutoAssociation;
@property(readonly, nonatomic) BOOL isAirplaneModeEnabled;
- (void)dealloc;
- (id)init;

@end

