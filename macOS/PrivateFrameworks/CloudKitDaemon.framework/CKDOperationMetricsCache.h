//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKSQLite.h"

@class NSObject<OS_dispatch_queue>;

@interface CKDOperationMetricsCache : CKSQLite
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

+ (id)dbFileName;
+ (id)sharedCache;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
- (void)addOperationCombinedMetrics:(id)arg1 forOperationID:(id)arg2 operationType:(long long)arg3 operationGroupID:(id)arg4 operationGroupName:(id)arg5 operationGroupQuantity:(unsigned long long)arg6 operationQualityOfService:(long long)arg7 appContainerTuple:(id)arg8;
- (void)flushMetricsToPowerLog;
- (id)_initWithCacheDir:(id)arg1;

@end

