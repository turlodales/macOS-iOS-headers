//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSMetricsDataSource.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource>
{
    NSMutableArray *_sortedEvents;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *sortedEvents; // @synthesize sortedEvents=_sortedEvents;
- (void)willStartBatchingWithLogKey:(id)arg1 error:(id *)arg2;
- (void)skipEvents:(id)arg1 error:(id *)arg2;
- (void)removeEvents:(id)arg1 error:(id *)arg2;
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)didFinishBatching;
- (void)cancel;
- (id)initWithEvents:(id)arg1;

@end

