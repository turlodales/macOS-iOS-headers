//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCReachabilityDelegate.h"
#import "BRCZone.h"

@class BRCAccountSession, BRCCreateZoneAndSubscribeOperation, BRCDeadlineSource, BRCItemID, BRCPQLConnection, BRCServerZone, BRCSyncBudgetThrottle, BRCSyncDownOperation, BRCSyncOperationThrottle, BRCSyncUpOperation, BRCThrottleBase, BRCZoneRowID, BRMangledID, CKOperationGroup, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString, brc_task_tracker;

__attribute__((visibility("hidden")))
@interface BRCClientZone : NSObject <BRCReachabilityDelegate, BRCZone>
{
    BRCAccountSession *_session;
    BRCServerZone *_serverZone;
    id <BRCClientZoneDelegate> _delegate;
    BRCZoneRowID *_dbRowID;
    NSString *_zoneName;
    NSString *_ownerName;
    BRMangledID *_mangledID;
    BRCPQLConnection *_db;
    unsigned int _state;
    BOOL _activated;
    BOOL _isInitialCreation;
    BRCThrottleBase *_readerThrottle;
    BRCCreateZoneAndSubscribeOperation *_createZoneOperation;
    NSObject<OS_dispatch_queue> *_createZoneQueue;
    NSMutableArray *_zoneCreationCompletionBlocks;
    long long _syncUpRetryAfter;
    // Error parsing type: AI, name: _syncState
    BRCSyncUpOperation *_syncUpOperation;
    NSError *_lastSyncUpError;
    BRCSyncDownOperation *_syncDownOperation;
    id _syncDeadlineSourceResumer;
    NSError *_lastSyncDownError;
    BRCSyncOperationThrottle *_syncUpThrottle;
    BRCSyncBudgetThrottle *_syncUpBudget;
    BRCSyncOperationThrottle *_syncDownThrottle;
    BRCDeadlineSource *_syncDeadlineSource;
    NSMutableIndexSet *_appliedTombstoneRanks;
    long long _lastInsertedRank;
    NSDate *_lastSyncDownDate;
    NSDate *_lastAttemptedSyncDownDate;
    NSObject<OS_dispatch_source> *_resetTimer;
    NSMutableDictionary *_syncDownBlockToPerformForBookmarkData;
    BOOL _shouldShowiCloudDriveAppInstallationNotification;
    NSMutableSet *_itemIDsBlockedFromSyncForCZMProcessing;
    NSMutableDictionary *_itemsBlockedByAssociationForCZMProcessing;
    NSMutableArray *_blocksWaitingOnCrossZoneMoveProcessing;
    NSMutableDictionary *_onDiskBlockToPerformForItemID;
    NSMutableDictionary *_downloadedBlockToPerformForItemID;
    NSMutableDictionary *_syncDownBlockToPerformForItemID;
    NSMutableDictionary *_parentsOfCZMFaults;
    NSMutableArray *_nextSyncDownBarriers;
    NSMutableArray *_currentSyncDownBarriers;
    id <NSObject> _hasWorkDidUpdateObserver;
    NSMutableArray *_nextIdleHandlers;
    CKOperationGroup *_syncDownGroup;
    NSMutableArray *_syncDownDependencies;
    NSMutableArray *_allItemsDidUploadTrackers;
    float _syncUpBatchSizeMultiplier;
    brc_task_tracker *_taskTracker;
    BOOL _needsSave;
    BOOL _t_syncDownBlocked;
    BOOL _t_syncUpBlocked;
    unsigned long long _requestID;
    NSArray *_syncThrottles;
    NSString *_osNameRequiredToSync;
    NSMutableDictionary *_t_osNamesByItemIDBlockedForSyncUp;
    NSString *_t_syncBlockedUntilOSName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL _t_syncUpBlocked; // @synthesize _t_syncUpBlocked;
@property(readonly, nonatomic) BOOL _t_syncDownBlocked; // @synthesize _t_syncDownBlocked;
@property(readonly, nonatomic) NSDictionary *parentsOfCZMFaults; // @synthesize parentsOfCZMFaults=_parentsOfCZMFaults;
@property(readonly, nonatomic) NSSet *itemIDsBlockedFromSyncForCZMProcessing; // @synthesize itemIDsBlockedFromSyncForCZMProcessing=_itemIDsBlockedFromSyncForCZMProcessing;
@property(retain, nonatomic) NSDate *lastAttemptedSyncDownDate; // @synthesize lastAttemptedSyncDownDate=_lastAttemptedSyncDownDate;
@property(readonly, nonatomic) brc_task_tracker *taskTracker; // @synthesize taskTracker=_taskTracker;
@property(readonly, nonatomic) NSString *osNameRequiredToSync; // @synthesize osNameRequiredToSync=_osNameRequiredToSync;
@property(retain, nonatomic) BRCServerZone *serverZone; // @synthesize serverZone=_serverZone;
@property(readonly, nonatomic) BRCDeadlineSource *syncDeadlineSource; // @synthesize syncDeadlineSource=_syncDeadlineSource;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) long long lastInsertedRank; // @synthesize lastInsertedRank=_lastInsertedRank;
@property(readonly, nonatomic) unsigned long long currentRequestID; // @synthesize currentRequestID=_requestID;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) BRCZoneRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) id <BRCClientZoneDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL activated; // @synthesize activated=_activated;
- (void)waitForCrossZoneMoveProcessingWithCompletion:(CDUnknownBlockType)arg1;
- (void)itemCrossZoneMoved:(id)arg1 toParentID:(id)arg2;
- (void)itemMovedIntoShareInThisZone:(id)arg1 associatedItemID:(id)arg2;
- (void)_startDownloadingItemIfNecessary:(id)arg1;
- (void)_removeItemAndProcess:(id)arg1;
- (void)_finishedProcessingItemThatMovedToThisZone:(id)arg1;
- (void)_removeItemFromCZMProcessingIfNotAssociated:(id)arg1;
- (id)_refreshItemFromDB:(id)arg1;
- (BOOL)shouldSyncMangledID:(id)arg1;
- (void)setupOperationForTestsIfNeeded:(id)arg1 recordsToSave:(id)arg2;
- (void)_t_flushIdleBlocksIfNeeded;
- (BOOL)_t_isIdle;
- (void)_t_resumeSyncUp;
- (void)_t_pauseSyncUp;
- (void)_t_resumeSyncDown;
- (void)_t_pauseSyncDown;
@property(readonly, nonatomic) NSString *_t_syncBlockedUntilOSName; // @synthesize _t_syncBlockedUntilOSName;
@property(readonly, nonatomic) NSMutableDictionary *_t_osNamesByItemIDBlockedForSyncUp; // @synthesize _t_osNamesByItemIDBlockedForSyncUp;
- (void)_t_markBlockedUntilOSName:(id)arg1;
- (void)_t_removeAllSyncUpBlocking;
- (void)_t_removeItemIDSyncUpBlocking:(id)arg1;
- (void)_t_addItemID:(id)arg1 blockedForSyncUpUntilOSName:(id)arg2;
- (BOOL)dumpActivityToContext:(id)arg1 includeExpensiveActivity:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_dumpItemsToContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(id *)arg3;
- (void)_dumpRecursivePropertiesOfItemByRowID:(unsigned long long)arg1 context:(id)arg2 depth:(int)arg3;
- (void)_appendToString:(id)arg1 descriptionOfFieldNamed:(id)arg2 inResultSet:(id)arg3 pos:(int *)arg4 containsSize:(BOOL)arg5 context:(id)arg6;
- (long long)throttleHashWithItemID:(id)arg1;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (id)syncUpAnalyticsError;
- (id)syncDownAnalyticsError;
- (BOOL)removeSyncDownForItemIDBlock:(id)arg1;
- (BOOL)removeItemIsDownloadedBlock:(id)arg1;
- (BOOL)removeItemOnDiskBlock:(id)arg1;
@property(readonly, nonatomic) BOOL hasHighPriorityWatchers;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForItemID:(id)arg2;
- (void)_cancelSyncDownFromDBCorruption;
- (void)_prepareForForegroundSyncDown;
- (void)performBlock:(CDUnknownBlockType)arg1 whenItemWithIDIsDownloaded:(id)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 whenItemWithIDIsOnDisk:(id)arg2;
- (CDUnknownBlockType)popDownloadedBlockForItemID:(id)arg1;
- (CDUnknownBlockType)popOnDiskBlockForItemID:(id)arg1;
- (void)_removeDownloadedBlockToPerformForItemID:(id)arg1;
- (void)_removeOnDiskBlockToPerformForItemID:(id)arg1;
- (void)_removeAllShareAcceptanceBlocks;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)itemTypeByItemID:(id)arg1 db:(id)arg2;
- (BOOL)existsByItemID:(id)arg1 db:(id)arg2;
- (BOOL)existsByItemID:(id)arg1;
- (id)directoryOrRootItemIDByFileID:(unsigned long long)arg1 db:(id)arg2;
- (id)directoryOrRootItemIDByFileID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)documentItemByItemID:(id)arg1 db:(id)arg2;
- (id)documentItemByItemID:(id)arg1;
- (id)itemByItemID:(id)arg1 db:(id)arg2;
- (id)itemByItemID:(id)arg1;
- (id)serverItemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)serverItemByRowID:(unsigned long long)arg1;
- (id)serverItemByItemID:(id)arg1 db:(id)arg2;
- (id)serverItemByItemID:(id)arg1;
- (long long)serverRankByItemID:(id)arg1 db:(id)arg2;
- (id)serverItemByRank:(long long)arg1;
- (long long)serverRankByItemID:(id)arg1;
- (id)itemsParentedToThisZoneButLivingInAnOtherZone;
- (id)allItems;
- (BOOL)_resetItemsTable;
- (BOOL)dumpTablesToContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(id *)arg3;
- (BOOL)dumpStatusToContext:(id)arg1 error:(id *)arg2;
- (BOOL)hasCompletedInitialSyncDownOnce;
- (void)flushAppliedTombstones;
- (void)didApplyTombstoneForRank:(long long)arg1;
- (void)didGCTombstoneRanks:(id)arg1;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (void)handleRootRecordDeletion;
- (void)recomputeAllItemsDidUploadState;
- (void)_allItemsDidUploadWithError:(id)arg1;
- (BOOL)_hasAllItemsDidUploadHandlers;
- (BOOL)_crossZoneMoveDocumentsToZone:(id)arg1;
- (void)didSyncDownRequestID:(unsigned long long)arg1 maxApplyRank:(long long)arg2 caughtUpWithServer:(BOOL)arg3 syncDownDate:(id)arg4;
- (void)_fixupMissingCrossMovedItems;
- (void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2 status:(long long)arg3;
- (void)_t_notifyClient:(id)arg1 whenIdle:(CDUnknownBlockType)arg2;
- (void)notifyClient:(id)arg1 afterNextSyncDown:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *syncThrottles; // @synthesize syncThrottles=_syncThrottles;
- (void)_syncUpOfRecords:(id)arg1 createdAppLibraryNames:(id)arg2 didFinishWithError:(id)arg3;
- (void)learnCKInfosFromSavedRecords:(id)arg1 isOutOfBandModifyRecords:(BOOL)arg2;
- (unsigned long long)nextSyncUpRequestID;
- (void)_markRequestIDAcked;
- (void)_markLatestSyncRequestFailed;
- (void)clearSyncUpError;
- (void)resetSyncBudgetAndThrottle;
- (void)scheduleSyncDownForOOBModifyRecordsAck;
- (void)scheduleSyncDownFirst;
- (void)scheduleSyncDown;
- (void)scheduleSyncDownWithGroup:(id)arg1;
- (void)scheduleSyncUp;
- (void)_startSync;
- (id)syncDownImmediately;
- (void)removeSyncDownDependency:(id)arg1;
- (void)addSyncDownDependency:(id)arg1;
- (void)_createCloudKitZoneWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createCloudKitZoneWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearSyncStateBits:(unsigned int)arg1;
- (void)setSyncStateBits:(unsigned int)arg1;
@property(readonly) unsigned int syncState;
- (void)didClearOutOfQuota;
- (id)_faultsEnumeratorFromRow:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;
- (void)_enumerateFaultsWithBlock:(CDUnknownBlockType)arg1 rowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;
- (void)enumerateFaultsAsyncWithBlock:(CDUnknownBlockType)arg1 batchSize:(unsigned long long)arg2;
- (id)documentsNotIdleEnumeratorWithDB:(id)arg1;
- (id)itemsWithInFlightDiffsEnumerator;
- (id)itemsEnumeratorWithDB:(id)arg1;
- (BOOL)existsByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (BOOL)existsByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)faultByParentID:(id)arg1 andPhysicalName:(id)arg2 db:(id)arg3;
- (id)faultByParentID:(id)arg1 andPhysicalName:(id)arg2;
- (id)faultByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (id)faultByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)reservedItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (id)reservedItemByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)itemByParentID:(id)arg1 andPhysicalName:(id)arg2;
- (id)itemByParentID:(id)arg1 andPhysicalName:(id)arg2 db:(id)arg3;
- (id)itemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (id)itemByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)itemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemByFileID:(unsigned long long)arg1;
- (id)itemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)itemByDocumentID:(unsigned int)arg1;
- (id)xattrForSignature:(id)arg1 db:(id)arg2;
- (id)xattrForSignature:(id)arg1;
- (id)descriptionWithContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToClientZone:(id)arg1;
- (BOOL)hasInitialFaultsEverLive;
- (BOOL)hasInitialFaultsLive;
- (BOOL)isSyncBlockedBecauseOSNeedsUpgrade;
- (BOOL)isSyncBlockedBecauseAppNotInstalled;
- (BOOL)isSyncBlockedOrBrokenStructure;
- (BOOL)isSyncBlocked;
- (void)clearStateBits:(unsigned int)arg1;
- (BOOL)setStateBits:(unsigned int)arg1;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_forDBUpgrade_setStateBits:(unsigned int)arg1 clearStateBits:(unsigned int)arg2;
@property(readonly, nonatomic) BOOL isForeground;
- (void)disconnectNSMDQListenerAsync;
@property(readonly, nonatomic) BOOL isCloudDocsZone;
- (void)unregisterAllItemsDidUploadTracker:(id)arg1;
- (void)registerAllItemsDidUploadTracker:(id)arg1;
- (id)sizeOfItemsNeedingSyncUpOrUploadAndReturnError:(id *)arg1;
- (id)itemCountPendingUploadOrSyncUpAndReturnError:(id *)arg1;
- (BOOL)handleZoneLevelErrorIfNeeded:(id)arg1;
- (void)scheduleResetServerAndClientTruthsForReason:(const char *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleResetServerAndClientTruthsForReason:(const char *)arg1;
- (void)close;
- (void)resume;
- (void)associateWithServerZone:(id)arg1 offline:(BOOL)arg2;
- (void)associateWithServerZone:(id)arg1;
- (void)updateWithPlist:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *plist;
- (void)dealloc;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(BOOL)arg6;
- (id)init;
- (void)_increaseSyncUpBatchSizeAfterSuccess;
- (void)_decreaseSyncUpBatchSizeAfterError;
@property(readonly, nonatomic) unsigned int syncUpBatchSize;
@property(readonly, nonatomic) BOOL isSharedZone;
@property(readonly, nonatomic) BOOL isPrivateZone;
@property(readonly, nonatomic) BRMangledID *mangledID; // @synthesize mangledID=_mangledID;
@property(readonly, nonatomic) BRCItemID *rootItemID;
- (id)asSharedClientZone;
- (id)asPrivateClientZone;
- (id)ownerName;
- (void)_finishedReset:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_recreateAppLibraryForDocsOrDesktopID:(id)arg1;
- (void)_mkdirAppLibraryIfNeeded:(id)arg1;
- (id)_cancelAllOperationsForReset;
- (void)_performAfterResetServerAndClientTruthsAndUnlinkDataAndPurgeTheZone:(CDUnknownBlockType)arg1;
- (void)_performAfterResetServerAndClientTruthsAndUnlinkData:(CDUnknownBlockType)arg1;
- (void)_performAfterResetServerAndClientSharedTruthsAndUnlinkData:(CDUnknownBlockType)arg1;
- (void)_performAfterResetServerAndClientPrivateTruthsAndUnlinkData:(CDUnknownBlockType)arg1;
- (void)_performResetAndWantsUnlink:(BOOL)arg1 clientTruthBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)supportsKeepingClientItemsDuringReset;
- (void)_removeTargetedAliasesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_reset:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleReset:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleReset:(unsigned long long)arg1;
- (void)cancelReset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

