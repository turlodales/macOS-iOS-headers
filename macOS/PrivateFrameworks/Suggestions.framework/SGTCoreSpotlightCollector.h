//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Suggestions/SGTBaseCollector.h>

@class SGTCoreSpotlightCollectorReserved;

@interface SGTCoreSpotlightCollector : SGTBaseCollector
{
    SGTCoreSpotlightCollectorReserved *_reserved2;
}

+ (id)dispatchQueueName;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isQuerying;
- (void)stop;
- (void)_setCurrentQuery:(id)arg1;
- (id)_currentQuery;
- (void)schedulingWarmingQueryWithQuery:(id)arg1 searchScopes:(id)arg2;
- (void)searchWithContext:(id)arg1;
- (id)init;

@end

