/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationList : NSObject {
    NSMutableDictionary * _conversationsDictionary;
    bool  _holdingWasKnownSenderUpdates;
    bool  _loadedConversations;
    bool  _loadedPinnedConversations;
    bool  _loadingConversations;
    CKConversation * _pendingConversation;
    NSArray * _pinnedConversations;
    bool  _remergingConversations;
    NSMutableArray * _trackedConversations;
}

@property (nonatomic, retain) NSMutableDictionary *conversationsDictionary;
@property (nonatomic) bool holdingWasKnownSenderUpdates;
@property (nonatomic, readonly) bool loadedConversations;
@property (nonatomic) bool loadedPinnedConversations;
@property (nonatomic, readonly) bool loadingConversations;
@property (nonatomic, retain) CKConversation *pendingConversation;
@property (nonatomic, retain) NSArray *pinnedConversations;
@property (nonatomic) bool remergingConversations;

+ (void)_handleRegistryDidLoadNotification:(id)arg1;
+ (id)conversationListAlertSuppressionContextForFilterMode:(unsigned long long)arg1;
+ (void)initialize;
+ (id)numberForFilterMode:(unsigned long long)arg1;
+ (id)sharedConversationList;
+ (id)stringForFilterMode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_abChanged:(id)arg1;
- (void)_abPartialChanged:(id)arg1;
- (id)_alreadyTrackedConversationForChat:(id)arg1;
- (void)_beginTrackingAllExistingChatsIfNeeded;
- (void)_beginTrackingConversationWithChat:(id)arg1 completion:(id /* block */)arg2;
- (id)_beginTrackingConversationWithChatIndirect:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatPropertiesChanged:(id)arg1;
- (id)_conversationForChat:(id)arg1;
- (id)_copyEntitiesForAddressStrings:(id)arg1;
- (id)_dnd_deprecated_globalIdentifierForChat:(id)arg1;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)_handleChatsDidRemergeNotification:(id)arg1;
- (void)_handleChatsWillRemergeNotification:(id)arg1;
- (void)_handleEngroupFinishedUpdating:(id)arg1;
- (void)_handleGroupNameChanged:(id)arg1;
- (void)_handleGroupPhotoChanged:(id)arg1;
- (void)_handleMemoryWarning:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_invalidateABCaches:(id)arg1;
- (void)_invalidatePartialABCaches:(id)arg1;
- (bool)_isUnreadChat:(id)arg1 ignoringMessages:(id)arg2;
- (bool)_messageSpamFilteringEnabled;
- (bool)_messageUnknownFilteringEnabled;
- (void)_postConversationListChangedNotification;
- (void)_postConversationListUpdateVisibleConversationsNotificationForUID:(id)arg1;
- (void)_setConversations:(id)arg1 forFilterMode:(unsigned long long)arg2;
- (bool)_shouldBailBeginTrackingForCurrentProcess;
- (bool)_shouldFilterForParticipants:(id)arg1;
- (id)_testingTrackedConversations;
- (void)beginTrackingConversation:(id)arg1 forChat:(id)arg2;
- (void)beginWasKnownSenderHold;
- (id)conversationForExistingChat:(id)arg1;
- (id)conversationForExistingChatWithDeviceIndependentID:(id)arg1;
- (id)conversationForExistingChatWithGUID:(id)arg1;
- (id)conversationForExistingChatWithGroupID:(id)arg1;
- (id)conversationForExistingChatWithIMChatGroupID:(id)arg1;
- (id)conversationForExistingChatWithIMChatPersonCentricID:(id)arg1;
- (id)conversationForExistingChatWithPinningIdentifier:(id)arg1;
- (id)conversationForHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(bool)arg3 create:(bool)arg4;
- (id)conversationForHandles:(id)arg1 displayName:(id)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 joinedChatsOnly:(bool)arg5 create:(bool)arg6;
- (id)conversations;
- (id)conversationsDictionary;
- (id)conversationsForFilterMode:(unsigned long long)arg1;
- (void)deleteConversation:(id)arg1;
- (void)deleteConversations:(id)arg1;
- (id)description;
- (unsigned long long)filterModeForConversation:(id)arg1;
- (id)firstUnreadFilteredConversationIgnoringMessages:(id)arg1;
- (bool)hasActiveConversations;
- (bool)holdingWasKnownSenderUpdates;
- (id)init;
- (bool)isHoldingWasKnownSenderUpdates;
- (bool)loadedConversations;
- (bool)loadedPinnedConversations;
- (bool)loadingConversations;
- (void)logConversationsTopCount:(long long)arg1 bottomCount:(long long)arg2;
- (void)migrateDNDInfoIfNeeded;
- (id)pendingConversation;
- (id)pendingConversationCreatingIfNecessary;
- (void)performDNDMigrationIfNecessary;
- (id)pinnedConversations;
- (id)pinningIdentifierMap;
- (void)postFinishedInitalPinLoadIfNecessary;
- (void)releaseWasKnownSenderHold;
- (bool)remergingConversations;
- (void)removeConversation:(id)arg1;
- (void)resetCaches;
- (void)resort;
- (void)setConversationsDictionary:(id)arg1;
- (void)setHoldingWasKnownSenderUpdates:(bool)arg1;
- (void)setLoadedPinnedConversations:(bool)arg1;
- (void)setNeedsReload;
- (void)setPendingConversation:(id)arg1;
- (void)setPinnedConversations:(id)arg1;
- (void)setRemergingConversations:(bool)arg1;
- (void)stopTrackingConversation:(id)arg1;
- (id)topMostConversation;
- (void)unpendConversation;
- (long long)unreadCountForFilterMode:(unsigned long long)arg1;
- (long long)unreadFilteredConversationCountIgnoringMessages:(id)arg1;
- (id)unreadLastMessages;
- (void)updateConversationFilteredFlagsAndReportSpam;
- (void)updateConversationListsAndSortIfEnabled;
- (void)updateConversationsForNewPinnedConversations:(id)arg1;
- (void)updateConversationsWasKnownSender;
- (void)updatePinnedConversationsFromDataSource;

@end
