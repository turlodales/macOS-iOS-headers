//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_KSCloudKitManagerDelegate.h"
#import "_KSTextReplacementSyncProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, _KSCloudKitManager, _KSTextReplacementCoreDataStore;

@interface _KSTextReplacementCKStore : NSObject <_KSCloudKitManagerDelegate, _KSTextReplacementSyncProtocol>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    BOOL _ckMigrationStatusOnCloud;
    _KSCloudKitManager *_cloudKitManager;
    _KSTextReplacementCoreDataStore *_coreDataStore;
    unsigned long long _numPullRequests;
}

+ (BOOL)isMigrationCompleted;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long numPullRequests; // @synthesize numPullRequests=_numPullRequests;
@property(nonatomic) BOOL ckMigrationStatusOnCloud; // @synthesize ckMigrationStatusOnCloud=_ckMigrationStatusOnCloud;
@property(retain, nonatomic) _KSTextReplacementCoreDataStore *coreDataStore; // @synthesize coreDataStore=_coreDataStore;
@property(retain, nonatomic) _KSCloudKitManager *cloudKitManager; // @synthesize cloudKitManager=_cloudKitManager;
- (void)userDidDeleteRecordZone:(id)arg1;
- (id)localEntriesFromCloudEntries:(id)arg1;
- (id)cloudRecordIDsForLocalEntries:(id)arg1;
- (id)cloudEntriesFromLocalEntries:(id)arg1;
- (id)queryDeletedEntries;
- (id)queryUpdatedLocalEntries;
- (unsigned long long)countLocalEntriesToBeSynced;
- (void)recordSyncStatus;
- (void)pullRemoteDataWithPriority:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)totalPullRequestsUntilNow;
- (void)pushLocalChangesWithPriority:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_requestSync:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateSyncCount:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)decayedSyncCountForTime:(id)arg1;
- (unsigned long long)getSyncCountThrottleThreshold;
- (unsigned long long)getSyncCountThresholdHalfLifeHours;
- (unsigned long long)getSyncCount;
- (void)requestSyncIfPendingLocalChanges;
- (BOOL)isAccountAvailable;
- (void)queryMigrationStatusOnCloudWithCallback:(CDUnknownBlockType)arg1;
- (void)pushMigrationStatusToCloud:(BOOL)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (void)removeAllEntriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)pushAllLocalData;
- (void)accountDidChange:(id)arg1;
- (void)importSampleShortcutsIfNecessary;
- (void)queryCloudIfFirstPullOrAccountChanged;
- (id)userIdentity;
- (void)dealloc;
- (id)initWithDirectoryPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

