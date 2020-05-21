//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSUserDefaults, PPKVOObserver, _PASLock;

@interface PPSettings : NSObject
{
    NSUserDefaults *_portraitDefaults;
    NSUserDefaults *_canLearnFromAppDefaults;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
    PPKVOObserver *_canLearnFromAppKVOObserver;
    PPKVOObserver *_weightKVOObserver;
    PPKVOObserver *_abGroupKVObserver;
    PPKVOObserver *_queryPlanLoggingKVOObserver;
}

+ (void)clearTestSettings;
+ (void)disableBundleIdentifier:(id)arg1;
+ (id)cloudSyncDisabledFirstPartyBundleIds;
+ (id)sharedInstance;
+ (void)initialize;
+ (BOOL)isVoiceAssistantEnabled;
- (void).cxx_destruct;
- (BOOL)isAuthorizedToLogLocation;
- (void)_clearTestSettings;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)arg1;
- (int)registerQueryPlanLoggingChangeHandler:(CDUnknownBlockType)arg1;
- (void)_updateQueryPlanLogging;
- (BOOL)queryPlanLoggingEnabled;
- (void)setQueryPlanLoggingEnabled:(BOOL)arg1;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1;
- (void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2;
- (double)assetMetadataRefreshIntervalSeconds;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)arg1;
- (id)abGroupOverride;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)arg1;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)arg1;
- (id)entitiesMappingPreviousTrieSha256;
- (id)entitiesBackfilledTimestamp;
- (double)weightMultiplier;
- (id)userDefaults;
- (void)_refreshCloudKitDisabledBundleIds;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (void)_disableBundleIdentifier:(id)arg1;
- (void)triggerDelayedCloudSyncRewrite;
- (void)_triggerDelayedBundleIdPurge;
-     // Error parsing type: v32@0:8^Ai16@?24, name: _triggerDelayedOperationWithCoalescingToken:operation:
- (void)_purgeRecordsForDisabledBundleIdsAsync;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (void)registerDisabledBundleIdPurgeHandler;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (id)_cloudKitDisabledBundleIds;
- (id)_donationDisabledBundleIds;
- (void)_refreshDisabledBundleIds;
- (void)_invokeChangeHandlersAsync;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)arg1;
- (int)registerDisabledBundleIdentifierChangeHandler:(CDUnknownBlockType)arg1;
- (BOOL)showLocationsFoundInApps;
- (void)setEntitiesMappingTrieSha256:(id)arg1;
- (void)setEntitiesBackfilledTimestamp:(id)arg1;
- (void)_updateAppConnectionsSettings;
@property(nonatomic, getter=isAppConnectionsLocationsEnabled) BOOL appConnectionsLocationsEnabled;
- (id)init;

@end

