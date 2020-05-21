//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFLoggable.h"
#import "EFSignpostable.h"

@class EDPersistenceDatabase, EDPersistenceDatabaseJournalManager, EDPersistenceHookRegistry, NSObject<OS_dispatch_queue>, NSString;

@interface EDProtectedDatabasePersistence : NSObject <EFLoggable, EFSignpostable>
{
    struct os_unfair_lock_s _initializationLock;
    struct os_unfair_lock_s _reconciliationLock;
    EDPersistenceDatabase *_database;
    BOOL _isInitialized;
    BOOL _isReconciling;
    EDPersistenceDatabaseJournalManager *_journalManager;
    EDPersistenceHookRegistry *_hookRegistry;
    NSObject<OS_dispatch_queue> *_reconciliationQueue;
}

+ (id)journalDatabaseName;
+ (id)protectedDatabaseName;
+ (id)signpostLog;
+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) BOOL isReconciling; // @synthesize isReconciling=_isReconciling;
@property(nonatomic) BOOL isInitialized; // @synthesize isInitialized=_isInitialized;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *reconciliationQueue; // @synthesize reconciliationQueue=_reconciliationQueue;
@property(readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(readonly, nonatomic) EDPersistenceDatabaseJournalManager *journalManager; // @synthesize journalManager=_journalManager;
- (void)addAdditionalCriteriaToCleanupActivity:(id)arg1;
- (void)finishJournalReconciliation:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL protectedDataAvailable;
@property(readonly, nonatomic) BOOL supportsJournaling;
- (id)_allReferencingColumnsForTable:(id)arg1;
- (unsigned long long)_resultForConnection:(id)arg1 success:(BOOL)arg2 error:(id)arg3 errorMessage:(id)arg4;
- (unsigned long long)_executeStatementString:(id)arg1 onConnection:(id)arg2 errorMessage:(id)arg3;
- (unsigned long long)_executeUpdateStatement:(id)arg1 onConnection:(id)arg2 errorMessage:(id)arg3;
- (BOOL)_isJournalMalformedForSchema:(id)arg1 connection:(id)arg2;
- (BOOL)_isRecoverableError:(id)arg1;
- (BOOL)_removeExistingDatabaseIDs:(id)arg1 withColumn:(id)arg2 connection:(id)arg3;
- (void)_deleteDatabaseIDs:(id)arg1 fromTable:(id)arg2;
- (id)_databaseIDsToDeleteForTable:(id)arg1;
- (void)scheduleRecurringActivity;
- (unsigned long long)_deleteRowIDs:(id)arg1 fromJournal:(id)arg2 withConnection:(id)arg3;
- (unsigned long long)_mergeTable:(id)arg1 connection:(id)arg2 journaledRows:(unsigned long long *)arg3 newRows:(unsigned long long *)arg4;
- (unsigned long long)_mergeSchema:(id)arg1 connection:(id)arg2 journaledRows:(unsigned long long *)arg3 newRows:(unsigned long long *)arg4;
- (unsigned long long)_runReconciliationWithSchema:(id)arg1 connection:(id)arg2;
- (unsigned long long)_reconcileJournalsWithSchema:(id)arg1 connection:(id)arg2;
- (void)reconcileJournalsWithSchema:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)_performOnDemandReconciliationForConnection:(id)arg1 withSchema:(id)arg2;
- (long long)_maxRowIDForColumn:(id)arg1 withConnection:(id)arg2;
- (BOOL)_updateSqliteSequenceForDatabase:(id)arg1 schema:(id)arg2 withConnection:(id)arg3 error:(id *)arg4;
- (BOOL)_initializeDatabase:(id)arg1 withConnection:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (void)_detachJournalDatabaseFromConnection:(id)arg1;
- (void)_attachJournalDatabaseToConnection:(id)arg1 withSchema:(id)arg2;
- (void)_detachProtectedDatabaseFromConnection:(id)arg1;
- (BOOL)_attachProtectedDatabaseToConnection:(id)arg1 withSchema:(id)arg2 error:(id *)arg3;
- (void)_ensureProtectedDatabaseOrJournalIsAttachedToConnection:(id)arg1 withSchema:(id)arg2;
- (void)_ensureJournalIsAttachedToConnection:(id)arg1 withSchema:(id)arg2;
- (void)detachProtectedOrJournalDatabaseFromConnectionIfNecessary:(id)arg1;
- (void)attachProtectedOrJournalDatabaseToConnectionIfNecessary:(id)arg1 withSchema:(id)arg2;
- (void)setDatabase:(id)arg1;
- (id)database;
- (id)initWithJournalManager:(id)arg1 hookRegistry:(id)arg2;
- (id)initWithBasePath:(id)arg1 hookRegistry:(id)arg2;
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

