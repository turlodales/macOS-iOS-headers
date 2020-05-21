//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NWUsageMonitor;

__attribute__((visibility("hidden")))
@interface PayloadUploadAgent : NSObject
{
    NSObject<OS_dispatch_queue> *_uploadQueue;
    NSMutableDictionary *_pendingUploadMap;
    id _foregroundStateObserver;
    NWUsageMonitor *_usageMonitor;
}

+ (id)sharedInstance;
+ (BOOL)uploadPayload:(id)arg1;
+ (void)reportFailureMetricForPayload:(id)arg1;
- (void).cxx_destruct;
- (void)processPendingUploadRequestFor:(id)arg1;
- (void)scheduleUserPermissionRequestFor:(id)arg1;
- (void)scheduleUploadFor:(id)arg1;
- (void)uploadPayloadsToRadarWithCaseID:(id)arg1 radarID:(id)arg2 token:(id)arg3 urgency:(long long)arg4 apnsIdentifier:(unsigned long long)arg5;
- (id)init;

@end

