//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKnowledgeStorageEventNotificationDelegate-Protocol.h>

@protocol OS_dispatch_queue;

@interface _DKKnowledgeStorageLogging : NSObject <_DKKnowledgeStorageEventNotificationDelegate>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
- (void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
- (void)_sendDistributedNotificationName:(id)arg1 streamNameCounts:(id)arg2;
- (void)_sendDistributedNotificationName:(id)arg1;
- (void)_sendDistributedNotificationName:(id)arg1 object:(id)arg2 throttledActivityName:(id)arg3;
- (void)_updateCounter:(id)arg1 streamNameCounts:(id)arg2;
- (id)streamNamesNotificationWhitelist;
- (id)portraitStreamNames;
- (id)init;

@end

