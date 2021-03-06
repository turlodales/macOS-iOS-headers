//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol OS_dispatch_queue, OS_os_log;

@interface AssetCacheMetricsReader : NSObject
{
    BOOL _isSetup;
    NSDictionary *_databaseOptions;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectContext *_context;
    NSObject<OS_os_log> *_logHandle;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
@property(retain) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property BOOL isSetup; // @synthesize isSetup=_isSetup;
@property(retain) NSDictionary *databaseOptions; // @synthesize databaseOptions=_databaseOptions;
- (id)_metricForManagedObject:(id)arg1;
- (id)_fetchManagedObjectsSinceDate:(id)arg1 withError:(id *)arg2;
- (id)_readMetricsSinceDate:(id)arg1 withError:(id *)arg2;
- (BOOL)_setupMetricsReaderWithError:(id *)arg1;
- (id)metricsSinceDate:(id)arg1 withError:(id *)arg2;
- (id)init;

@end

