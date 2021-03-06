//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricKitServices/MXService.h>

@class MXSourceXPCPayload, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface MXPowerlogService : MXService
{
    NSMutableArray *_powerlogDataPaths;
    MXSourceXPCPayload *_unarchivedPowerlogData;
    NSObject<OS_os_log> *_MXPowerLogServiceLogHandle;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

+ (id)sharedPowerlogService;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain) NSObject<OS_os_log> *MXPowerLogServiceLogHandle; // @synthesize MXPowerLogServiceLogHandle=_MXPowerLogServiceLogHandle;
@property(retain) MXSourceXPCPayload *unarchivedPowerlogData; // @synthesize unarchivedPowerlogData=_unarchivedPowerlogData;
@property(retain) NSMutableArray *powerlogDataPaths; // @synthesize powerlogDataPaths=_powerlogDataPaths;
- (BOOL)metricsAvailableForDate:(id)arg1;
- (id)getMetricsForClient:(id)arg1 dateString:(id)arg2;
- (BOOL)_updateMetrics;
- (BOOL)stopService;
- (BOOL)startService;
- (id)init;

@end

