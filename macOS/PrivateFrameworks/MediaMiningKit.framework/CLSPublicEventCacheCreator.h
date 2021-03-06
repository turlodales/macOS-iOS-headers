//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSPublicEventCache;

@interface CLSPublicEventCacheCreator : NSObject
{
    BOOL _simulatesTimeout;
    CLSPublicEventCache *_cache;
    unsigned long long _maximumBatchSize;
    double _queryRadius;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL simulatesTimeout; // @synthesize simulatesTimeout=_simulatesTimeout;
@property(readonly, nonatomic) double queryRadius; // @synthesize queryRadius=_queryRadius;
@property(readonly, nonatomic) unsigned long long maximumBatchSize; // @synthesize maximumBatchSize=_maximumBatchSize;
@property(readonly, nonatomic) CLSPublicEventCache *cache; // @synthesize cache=_cache;
- (id)_queryEventsForTimeLocationTuples:(id)arg1 invalidationTokens:(out id *)arg2 progressBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)createCacheForTimeLocationTuples:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)initWithCache:(id)arg1 queryRadius:(double)arg2;

@end

