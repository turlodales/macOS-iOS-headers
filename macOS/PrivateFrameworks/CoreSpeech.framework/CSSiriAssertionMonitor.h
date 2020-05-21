//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

#import "CSXPCConnectionDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface CSSiriAssertionMonitor : CSEventMonitor <CSXPCConnectionDelegate>
{
    unsigned char _assertionState;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;
- (BOOL)isEnabled;
- (void)_notifyObserver:(BOOL)arg1;
- (void)disableAssertionReceived;
- (void)enableAssertionReceived;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

