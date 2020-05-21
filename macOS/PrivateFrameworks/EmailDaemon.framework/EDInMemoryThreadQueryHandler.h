//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EmailDaemon/EDMessageRepositoryQueryHandler.h>

#import "EDMessageQueryHelperDelegate.h"
#import "EFContentProtectionObserver.h"
#import "EFLoggable.h"
#import "EMCollectionItemIDStateCapturerDelegate.h"

@class EDMessageQueryHelper, EDThreadReloadSummaryHelper, EDUpdateThrottler, EDVIPManager, EFProcessTransaction, EMCollectionItemIDStateCapturer, EMMailboxScope, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString;

@interface EDInMemoryThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageQueryHelperDelegate, EFLoggable, EFContentProtectionObserver, EMCollectionItemIDStateCapturerDelegate>
{
    NSMutableOrderedSet *_conversationIDs;
    NSMutableDictionary *_threadsByConversationID;
    NSMutableDictionary *_changesWhilePaused;
    NSMutableDictionary *_oldestThreadsByMailboxObjectIDs;
    EFProcessTransaction *_processTransaction;
    struct os_unfair_lock_s _threadsLock;
    BOOL _didCancel;
    BOOL _isInitialized;
    BOOL _isPaused;
    BOOL _hasChangesWhilePaused;
    EDVIPManager *_vipManager;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    EDMessageQueryHelper *_messageQueryHelper;
    NSArray *_messageSortDescriptors;
    CDUnknownBlockType _comparator;
    EDUpdateThrottler *_updateThrottler;
    EDThreadReloadSummaryHelper *_reloadSummaryHelper;
    id <EFScheduler> _scheduler;
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;
    NSObject<OS_dispatch_queue> *_resultQueue;
    EMMailboxScope *_mailboxScope;
    EMCollectionItemIDStateCapturer *_stateCapturer;
}

+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer; // @synthesize stateCapturer=_stateCapturer;
@property(readonly, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
@property(nonatomic) BOOL hasChangesWhilePaused; // @synthesize hasChangesWhilePaused=_hasChangesWhilePaused;
@property(nonatomic) BOOL isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) BOOL isInitialized; // @synthesize isInitialized=_isInitialized;
@property(nonatomic) BOOL didCancel; // @synthesize didCancel=_didCancel;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue; // @synthesize resultQueue=_resultQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // @synthesize contentProtectionQueue=_contentProtectionQueue;
@property(readonly, nonatomic) id <EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) EDThreadReloadSummaryHelper *reloadSummaryHelper; // @synthesize reloadSummaryHelper=_reloadSummaryHelper;
@property(readonly, nonatomic) EDUpdateThrottler *updateThrottler; // @synthesize updateThrottler=_updateThrottler;
@property(readonly, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(readonly, copy, nonatomic) NSArray *messageSortDescriptors; // @synthesize messageSortDescriptors=_messageSortDescriptors;
@property(retain, nonatomic) EDMessageQueryHelper *messageQueryHelper; // @synthesize messageQueryHelper=_messageQueryHelper;
@property(readonly, nonatomic) id <EDRemoteSearchProvider> remoteSearchProvider; // @synthesize remoteSearchProvider=_remoteSearchProvider;
@property(readonly, nonatomic) EDVIPManager *vipManager; // @synthesize vipManager=_vipManager;
- (id)itemIDsForStateCaptureWithErrorString:(id *)arg1;
- (id)labelForStateCapture;
- (BOOL)_messageListItemChangeAffectsSorting:(id)arg1;
- (id)_inMemoryThreadSortDescriptorsForThreadSortDescriptors:(id)arg1;
- (id)_messageQueryFromThreadsQuery:(id)arg1;
- (void)_notifyObserverOfOldestThreadsByMailboxObjectIDs;
- (BOOL)_updateOldestThreadsForMailboxes:(id)arg1;
- (BOOL)_threadsWereDeleted;
- (BOOL)_didMergeInThreads:(id)arg1;
- (BOOL)_updateCurrentOldestThreadWithThreadIfApplicable:(id)arg1 forMailbox:(id)arg2;
- (void)_initializeOldestThreadsByMailbox;
- (void)queryHelperNeedsRestart:(id)arg1;
- (void)queryHelperDidFinishRemoteSearch:(id)arg1;
- (void)_vipsDidChange:(id)arg1;
- (void)_blockedSendersDidChange:(id)arg1;
- (BOOL)_removeThreadsForInMemoryThreads:(id)arg1 forMove:(BOOL)arg2;
- (BOOL)_reportDeletes:(id)arg1;
- (BOOL)_reportChanges:(id)arg1;
- (BOOL)_mergeInThreads:(id)arg1 forMove:(BOOL)arg2;
- (id)_messagesByConversationIDForMessages:(id)arg1;
- (void)_messagesWereChanged:(id)arg1 forKeyPaths:(id)arg2 deleted:(BOOL)arg3;
- (void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;
- (void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;
- (void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;
- (void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2;
- (void)_messagesWereAdded:(id)arg1;
- (void)queryHelper:(id)arg1 didAddMessages:(id)arg2;
- (void)queryHelperDidFindAllMessages:(id)arg1;
- (void)queryHelper:(id)arg1 didFindMessages:(id)arg2;
- (id)messagesForThread:(id)arg1;
- (id)threadForObjectID:(id)arg1 error:(id *)arg2;
- (void)_contentProtectionChangedToUnlocked;
- (void)_contentProtectionChangedToLocked;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (BOOL)_queryHelperIsCurrent:(id)arg1;
- (void)_createHelperAndReconcileJournal:(BOOL)arg1;
- (void)_restartHelper;
- (void)_refreshObserver;
- (void)_didSendUpdates;
- (void)_prepareToSendUpdates;
- (void)dealloc;
@property(readonly, nonatomic) id <EMMessageListItemQueryResultsObserver> resultsObserverIfNotPaused;
- (void)cancel;
- (void)start;
- (void)tearDown;
- (void)test_tearDown;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 vipManager:(id)arg4 remoteSearchProvider:(id)arg5 observer:(id)arg6 observationIdentifier:(id)arg7 observationResumer:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

