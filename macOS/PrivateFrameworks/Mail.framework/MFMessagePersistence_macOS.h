//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EDMessagePersistence.h"

#import "EFLoggable.h"

@class MFMessageTransformer, NSString;

@interface MFMessagePersistence_macOS : EDMessagePersistence <EFLoggable>
{
    MFMessageTransformer *_libraryMessageTransformer;
    id <EFScheduler> _contentLoadScheduler;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) id <EFScheduler> contentLoadScheduler; // @synthesize contentLoadScheduler=_contentLoadScheduler;
@property(retain, nonatomic) MFMessageTransformer *libraryMessageTransformer; // @synthesize libraryMessageTransformer=_libraryMessageTransformer;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (unsigned int)_optionsForQuery:(id)arg1;
- (unsigned int)_loadOptions;
- (id)_criterionForMailbox:(id)arg1;
- (id)_flagKeyForKeyPath:(id)arg1;
- (BOOL)_isCriterionTypeFlagKeyPath:(id)arg1;
- (id)_messageCriterionForComparisonPredicate:(id)arg1;
- (id)_messageCriterionForCompoundPredicate:(id)arg1;
- (id)_messageCriterionFromPredicate:(id)arg1;
- (id)_criterionForQuery:(id)arg1;
- (id)_libraryMessageForMessageObjectID:(id)arg1;
- (id)requestSummaryForMessageObjectID:(id)arg1;
- (id)requestContentForMessageObjectID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)cachedDatabaseIDsDictionaryForMessageIDHashes:(id)arg1;
- (id)persistedMessageForOutgoingMessage:(id)arg1 isDraft:(BOOL)arg2;
- (id)persistedMessagesForDatabaseIDs:(id)arg1 requireProtectedData:(BOOL)arg2 temporarilyUnavailableDatabaseIDs:(id *)arg3;
- (id)messagesForPersistedMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)queryWithExpandedMailboxesFromQuery:(id)arg1;
- (void)_iterateMessagesMatchingQuery:(id)arg1 cancelationToken:(id)arg2 consumer:(id)arg3;
- (void)iteratePersistedMessagesMatchingQuery:(id)arg1 cancelationToken:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)iterateMessagesMatchingQuery:(id)arg1 batchSize:(long long)arg2 firstBatchSize:(long long)arg3 limit:(long long)arg4 cancelationToken:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)initWithMailboxPersistence:(id)arg1 database:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

