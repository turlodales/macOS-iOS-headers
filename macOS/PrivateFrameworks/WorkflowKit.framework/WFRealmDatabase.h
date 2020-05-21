//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFDatabaseBackingStore.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL, RLMRealm, RLMRealmConfiguration;

@interface WFRealmDatabase : NSObject <WFDatabaseBackingStore>
{
    BOOL _mainThreadOnly;
    RLMRealm *_inMemoryRealm;
    RLMRealmConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (void)cleanOrphanedObjectsFromRealm:(id)arg1;
+ (id)visibleWorkflowsInRealm:(id)arg1;
+ (BOOL)wf_createDataVaultAndMigrateToItIfNeeded;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(readonly, nonatomic) BOOL mainThreadOnly; // @synthesize mainThreadOnly=_mainThreadOnly;
@property(readonly, copy, nonatomic) RLMRealmConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) RLMRealm *inMemoryRealm; // @synthesize inMemoryRealm=_inMemoryRealm;
- (long long)suggestedSortOrderingInRealm:(id)arg1;
- (void)setWorkflowOrdering:(id)arg1;
- (id)syncToken;
- (void)setSyncToken:(id)arg1;
- (id)referencesForWorkflowName:(id)arg1;
- (id)deletedWorkflows;
- (void)clearTombstonesAndSyncState;
- (void)deleteAllAccessResourceStateDataForReference:(id)arg1;
- (id)accessResourceStatesForReference:(id)arg1;
- (void)setPerWorkflowStateData:(id)arg1 forAccessResourceWithIdentifier:(id)arg2 forReference:(id)arg3;
- (id)currentPerWorkflowStateDataForAccessResourceWithIdentifier:(id)arg1 forReference:(id)arg2;
- (BOOL)isReference:(id)arg1 allowedToRunOnDomain:(id)arg2;
- (void)setTrustedToRunScripts:(BOOL)arg1 forReference:(id)arg2 onDomain:(id)arg3;
- (void)setOutcome:(long long)arg1 forRunEvent:(id)arg2;
- (id)logRunOfWorkflow:(id)arg1 withSource:(id)arg2 triggerID:(id)arg3;
- (void)setConflictingReference:(id)arg1 forReference:(id)arg2;
- (id)conflictingReferenceForReference:(id)arg1;
- (id)latestRunEvent;
- (id)sortedRunEventsForTriggerID:(id)arg1;
- (id)sortedRunEventsWithSource:(id)arg1;
- (id)allConfiguredTriggers;
- (id)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(id)arg1;
- (id)sortedVisibleWorkflowsByName;
- (id)sortedVisibleWorkflowsWithType:(id)arg1;
- (id)sortedVisibleWorkflows;
- (id)sortedWorkflowsIncludingTombstonesAndConflicts;
- (BOOL)startObservingChangesForResult:(id)arg1;
- (id)descriptorsForResult:(id)arg1 error:(id *)arg2;
- (id)collectionForResult:(id)arg1 inRealm:(id)arg2;
- (BOOL)deleteReference:(id)arg1 tombstone:(BOOL)arg2 error:(id *)arg3;
- (void)refresh;
- (void)moveReferenceFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)duplicateReference:(id)arg1 newName:(id)arg2 error:(id *)arg3;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)createTriggerWithRecord:(id)arg1 workflow:(id)arg2 error:(id *)arg3;
- (id)createWorkflowWithOptions:(id)arg1 error:(id *)arg2;
- (id)workflowReferenceWithName:(id)arg1;
- (void)accessStorageForDescriptor:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 withError:(id *)arg3;
- (id)objectForDescriptor:(id)arg1 inRealm:(id)arg2;
- (id)realmWithError:(id *)arg1;
- (id)performRealmTransactionWithBlock:(CDUnknownBlockType)arg1 withError:(id *)arg2;
- (id)performRealmOperationWithBlock:(CDUnknownBlockType)arg1 withError:(id *)arg2;
- (id)performRealmOperationWithBlock:(CDUnknownBlockType)arg1;
- (id)performOperation:(CDUnknownBlockType)arg1 withError:(id *)arg2;
- (id)performOperation:(CDUnknownBlockType)arg1;
- (void)performAsynchronousOperation:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURL *fileURL;
- (id)initWithConfiguration:(id)arg1 mainThreadOnly:(BOOL)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (BOOL)migrateToCoreData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

