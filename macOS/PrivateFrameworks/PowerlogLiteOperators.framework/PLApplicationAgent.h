//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class NSMutableDictionary;

@interface PLApplicationAgent : PLAgent
{
    void *_lsAppNotifications;
    NSMutableDictionary *_bundleIDToVersionMap;
}

+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitionAppInfo;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionAppLifecycle;
+ (id)entryEventForwardDefinitionFrontmostApp;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *bundleIDToVersionMap; // @synthesize bundleIDToVersionMap=_bundleIDToVersionMap;
@property void *lsAppNotifications; // @synthesize lsAppNotifications=_lsAppNotifications;
- (id)getAppInfoForASN:(struct __LSASN *)arg1 ForSessionID:(int)arg2;
- (unsigned long long)getApplicationType:(id)arg1;
- (id)getVersionInfo:(id)arg1;
- (BOOL)appInformationChanged:(id)arg1;
- (void)logRunningAppsInfo;
- (id)getFrontmostAppInfo;
- (void)dealloc;
- (void)logEventNoneAppInfoWithData:(id)arg1;
- (void)logEventForwardAppLifecycleForEvent:(unsigned long long)arg1 WithData:(id)arg2;
- (void)logEventForwardFrontmostAppWithData:(id)arg1;
- (void)log;
- (void)initOperatorDependancies;
- (id)init;

@end

