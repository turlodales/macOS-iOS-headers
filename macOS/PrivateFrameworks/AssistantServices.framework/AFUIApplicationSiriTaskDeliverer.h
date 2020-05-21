//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFSiriTaskDelivering.h"

@class AFSiriTaskmaster, AFWatchdogTimer, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface AFUIApplicationSiriTaskDeliverer : NSObject <AFSiriTaskDelivering>
{
    NSString *_appBundleIdentifier;
    AFWatchdogTimer *_assertionTimer;
    NSObject<OS_dispatch_group> *_bKSAssertionSetupGroup;
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriTaskmaster *_taskmaster;
}

- (void).cxx_destruct;
@property(nonatomic) __weak AFSiriTaskmaster *taskmaster; // @synthesize taskmaster=_taskmaster;
- (void)_invalidateAssertionTimer;
- (void)_invalidateBackboardServices;
- (void)_handleSuccessfulAppLaunchToBackground:(BOOL)arg1 forRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriTaskDidFinish;
- (void)deliverSiriTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (void)_startAppStateMonitoringForRequest:(id)arg1;
- (void)dealloc;
- (id)initWithAppBundleIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

