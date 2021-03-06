//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSCountedSet, _DKKnowledgeStorage;

@protocol _DKKnowledgeStorageEventNotificationDelegate

@optional
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didDeleteSyncedEvents:(NSArray *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didInsertSyncedEvents:(NSArray *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didTombstoneEventsWithStreamNameCounts:(NSCountedSet *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didDeleteEventsWithStreamNameCounts:(NSCountedSet *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didInsertLocalEventsWithStreamNameCounts:(NSCountedSet *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didInsertEventsWithStreamNameCounts:(NSCountedSet *)arg2;
@end

