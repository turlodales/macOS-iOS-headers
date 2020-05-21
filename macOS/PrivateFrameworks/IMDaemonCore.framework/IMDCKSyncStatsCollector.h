//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IMDCKSyncStatsCollector : NSObject
{
    NSMutableDictionary *_inMemorySyncStatistics;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *inMemorySyncStatistics; // @synthesize inMemorySyncStatistics=_inMemorySyncStatistics;
- (void)_incrementCountsForColumnSyncedKey:(id)arg1 syncedColumnAmountToIncrease:(unsigned long long)arg2 totalColumnAmountKey:(id)arg3 totalColumnAmountToIncrease:(unsigned long long)arg4;
- (void)incrementSyncedAttachmentCount:(unsigned long long)arg1 incrementTotalAttachmentCount:(unsigned long long)arg2;
- (void)incrementSyncedMessageCount:(unsigned long long)arg1 incrementTotalMessageCount:(unsigned long long)arg2;
- (void)incrementSyncedChatCount:(unsigned long long)arg1 incrementTotalChatCount:(unsigned long long)arg2;
- (id)currentInMemorySyncStatistics;
- (void)refreshWithDBSyncStatistics;
- (void)dealloc;
- (id)init;

@end

