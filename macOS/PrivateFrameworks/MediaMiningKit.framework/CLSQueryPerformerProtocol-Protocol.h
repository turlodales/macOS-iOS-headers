//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class CLCircularRegion, NSArray, NSNumber, NSObject;
@protocol CLSQueryPerformerProtocol, OS_os_log;

@protocol CLSQueryPerformerProtocol <NSObject>
+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id <CLSQueryPerformerProtocol>)arg1 forRegions:(NSArray *)arg2;
@property(nonatomic) NSObject<OS_os_log> *loggingConnection;
@property(nonatomic) double precision;
@property(nonatomic) CDStruct_95c2efd7 statistics;
@property(readonly, nonatomic) BOOL isCancelled;
- (void)logAggdGeoLookupFailureResult;
- (void)logAggdGeoLookupCounterAndDurationWithLookupDuration:(NSNumber *)arg1;
- (void)cancel;
- (unsigned long long)cacheItems:(NSArray *)arg1;
- (NSArray *)regions;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (BOOL)shouldQueryItemsForRegion:(CLCircularRegion *)arg1 selectedRegions:(NSArray *)arg2;
@end

