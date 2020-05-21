//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCloudHistoryServiceProtocol.h"
#import "WBSCloudKitThrottlerDataStore.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WBSCloudHistoryConfiguration, WBSCloudHistoryPushAgentProxy, WBSCloudKitThrottler, WBSOneShotTimer;

@interface WBSCloudHistory : NSObject <WBSCloudHistoryServiceProtocol, WBSCloudKitThrottlerDataStore>
{
    NSObject<OS_dispatch_queue> *_cloudHistoryQueue;
    id <WBSHistoryServiceDatabaseProtocol> _database;
    NSData *_pushThrottlerData;
    NSData *_fetchThrottlerData;
    NSData *_syncCircleSizeRetrievalThrottlerData;
    NSData *_longLivedSaveOperationData;
    unsigned long long _syncCircleSize;
    BOOL _cloudHistoryEnabled;
    BOOL _saveChangesWhenHistoryLoads;
    BOOL _fetchChangesWhenHistoryLoads;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _saveOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _fetchOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _replayLongLivedSaveOperationSuddenTerminationDisabler;
    BOOL _replayLongLivedSaveOperationHasBeenPerformed;
    WBSCloudHistoryConfiguration *_configuration;
    id <WBSCloudHistoryDataStore> _store;
    WBSCloudKitThrottler *_saveChangesThrottler;
    WBSCloudKitThrottler *_fetchChangesThrottler;
    WBSCloudKitThrottler *_syncCircleSizeRetrievalThrottler;
    WBSOneShotTimer *_serverBackoffTimer;
    BOOL _saveChangesWhenBackoffTimerFires;
    BOOL _fetchChangesWhenBackoffTimerFires;
    WBSCloudHistoryPushAgentProxy *_pushAgent;
    WBSOneShotTimer *_pushNotificationFetchTimer;
    unsigned long long _numberOfDevicesInSyncCircle;
    NSMutableDictionary *_syncCircleSizeRetrievalCompletionHandlersByOperation;
    CDUnknownBlockType _fetchCompletionHandler;
    CDUnknownBlockType _saveCompletionHandler;
    id <WBSCloudKitContainerManateeObserving> _containerManateeObserver;
    NSMutableArray *_storeDeterminationCompletionBlocks;
    long long _currentManateeState;
    BOOL _manateeStateNeedsUpdate;
    BOOL _isWaitingForPCSIdentityUpdate;
    BOOL _determiningStoreType;
    BOOL _removedHistoryItemsArePendingSave;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long numberOfDevicesInSyncCircle; // @synthesize numberOfDevicesInSyncCircle=_numberOfDevicesInSyncCircle;
@property(nonatomic) BOOL removedHistoryItemsArePendingSave; // @synthesize removedHistoryItemsArePendingSave=_removedHistoryItemsArePendingSave;
- (void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetForAccountChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resetForAccountChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetForAccountChange;
- (void)_resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircle;
- (void)_updateThrottlerPolicies;
- (void)_updateDeviceCountInResponseToPushNotification;
- (id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
- (id)_currentFetchChangesThrottlerPolicyString;
- (id)_currentSaveChangesThrottlerPolicyString;
- (void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2;
- (id)recordOfPastOperationsForThrottler:(id)arg1;
- (void)_cloudHistoryConfigurationChanged:(id)arg1;
- (void)_serverBackoffTimerFired:(id)arg1;
- (void)_backOffWithInterval:(double)arg1;
- (double)_backoffTimeIntervalFromError:(id)arg1;
- (long long)_resultFromError:(id)arg1;
- (long long)_estimatedPriorityForPotentialSaveAttempt;
- (long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(BOOL)arg3;
- (void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(CDUnknownBlockType)arg1;
- (void)_registerForHistoryWasLoadedNotificationIfNecessary;
- (void)_fetchChangesWhenHistoryLoads;
- (void)_saveChangesWhenHistoryLoads;
- (void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchChangesInResponseToPushNotification:(id)arg1;
- (void)_processPendingPushNotifications;
- (void)_pushNotificationReceived:(id)arg1;
- (void)_setPushNotificationAreInitialized:(BOOL)arg1;
- (void)_pushNotificationsAreInitializedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_initializePushNotificationSupport;
- (void)_removePersistedLongLivedSaveOperationDictionary;
- (void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)arg1 databaseGeneration:(long long)arg2;
- (void)_persistedLongLivedSaveOperationID:(id *)arg1 databaseGeneration:(long long *)arg2;
- (void)_updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_replayPersistedLongLivedSaveOperationIfNecessary;
- (void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
- (void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 withPriority:(long long)arg2;
- (void)_deleteAllCloudHistoryAndSaveAgain;
- (void)_transitionCloudHistoryStoreToManateeState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleManateeErrorIfNeeded:(id)arg1;
- (id)_manateeErrorCode:(id)arg1;
- (void)_pcsIdentitiesChangedNotification:(id)arg1;
- (void)_setServerChangeToken:(id)arg1;
- (void)_getServerChangeTokenDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_callAndResetFetchCompletionHandlerWithError:(id)arg1;
- (void)_registerFetchCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAndMergeChangesBypassingThrottler:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAndMergeChangesBypassingThrottler;
- (void)fetchAndMergeChanges;
- (id)dateOfNextPermittedSaveChangesAttempt;
- (void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(BOOL)arg1;
- (void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(BOOL)arg3 longLivedOperationPersistenceCompletion:(CDUnknownBlockType)arg4 withCallback:(CDUnknownBlockType)arg5;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_callAndResetSaveCompletionHandlerWithError:(id)arg1;
- (void)_registerSaveCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveChangesBypassingThrottler:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveChangesToCloudHistoryStoreBypassingThrottler;
- (void)saveChangesToCloudHistoryStore;
- (BOOL)_hasCloudHistoryEntitlement;
@property(nonatomic, getter=isCloudHistoryEnabled) BOOL cloudHistoryEnabled;
- (void)dealloc;
- (void)_determineCloudHistoryStoreWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithDatabase:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

