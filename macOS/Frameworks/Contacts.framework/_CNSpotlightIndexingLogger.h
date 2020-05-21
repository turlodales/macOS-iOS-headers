//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNSpotlightIndexingLogger.h"

@class NSObject<OS_os_log>, NSString;

@interface _CNSpotlightIndexingLogger : NSObject <CNSpotlightIndexingLogger>
{
    NSObject<OS_os_log> *_log;
    NSObject<OS_os_log> *_summaryLog;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *summaryLog; // @synthesize summaryLog=_summaryLog;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)verifiedIndexWithSummmary:(id)arg1;
- (void)didNotFinishIndexingForDeltaSyncWithError:(id)arg1;
- (void)didNotFinishIndexingForFullSyncWithError:(id)arg1;
- (void)finishedBatchIndexWithUpdateIdentifiers:(id)arg1 deleteIdentifiers:(id)arg2;
- (void)finishedIndexingForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)finishedIndexingForFullSyncWithCount:(unsigned long long)arg1;
- (void)failedToCreateUnarchiverForClientStateWithError:(id)arg1;
- (void)failedToUnarchiveClientStateData:(id)arg1;
- (void)failedToDeleteAllSearchableItemsWithSpotlight:(id)arg1 willRetry:(BOOL)arg2;
- (void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(BOOL)arg3;
- (void)failedToJournalSearchableItemsForIndexingWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(BOOL)arg3;
- (void)failedToEndIndexBatchWithSpotlight:(id)arg1 willRetry:(BOOL)arg2;
- (void)failedToBeginIndexBatchWithSpotlight:(id)arg1;
- (void)failedToFetchClientStateFromSpotlight:(id)arg1 willRetry:(BOOL)arg2;
- (id)_stringForSpotlightError:(id)arg1 willRetry:(BOOL)arg2;
- (void)failedToFetchSearchableForContactIdentifiers:(id)arg1 error:(id)arg2;
- (void)failedToClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2 error:(id)arg3;
- (void)failedToFetchContactForChange:(id)arg1;
- (void)failedToCreateSearchableItemForContactIdentifier:(id)arg1;
- (void)willResumeIndexingAfterOffset:(long long)arg1;
- (void)willReindexAsSnapshotAnchorChangedFrom:(id)arg1 to:(id)arg2;
- (void)willReindexAsIndexVersionChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)willResumeReindexingAsNotFinished;
- (void)willReindexAsFailedToFetchClientState;
- (void)willReindexAsChangeHistoryIsTruncated:(id)arg1;
- (void)willReindexAsFailedToFetchChangeHistory:(id)arg1 error:(id)arg2;
- (void)willReindexAsFailedToRegisterForChangeHistory:(id)arg1 error:(id)arg2;
- (void)willClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2;
- (void)willBatchIndexForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)willBatchIndexForFullSyncWithCount:(unsigned long long)arg1 lastOffset:(long long)arg2 doneFullSync:(BOOL)arg3;
- (void)willStartIndexingWithClientState:(id)arg1;
- (void)deferringReindexAsFailedToPrepareForReindexing;
- (void)willReindexItemsWithIdentifiers:(id)arg1;
- (void)noContactChangesToIndex;
- (void)verifyingIndex:(CDUnknownBlockType)arg1;
- (void)reindexingSearchableItemsWithIdentifiers:(CDUnknownBlockType)arg1;
- (void)reindexingAllSearchableItems:(CDUnknownBlockType)arg1;
- (void)indexingContacts:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

