//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUBonjourBrowser, CUReachabilityMonitor, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, SFSession;

@interface SFDeviceOperationWiFiSetup : NSObject
{
    CUBonjourBrowser *_bonjourBrowser;
    NSString *_bonjourTestID;
    NSObject<OS_dispatch_source> *_bonjourTimer;
    BOOL _invalidateCalled;
    BOOL _reachabilityEnabled;
    CUReachabilityMonitor *_reachabilityMonitor;
    unsigned long long _startTicks;
    unsigned long long _startBonjourTestTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    int _bonjourTestState;
    unsigned int _repairFlags;
    unsigned int _setupFlags;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _metricBonjourTestSeconds;
    double _metricTotalSeconds;
    double _metricWiFiSetupSeconds;
    SFSession *_sfSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SFSession *sfSession; // @synthesize sfSession=_sfSession;
@property(nonatomic) unsigned int setupFlags; // @synthesize setupFlags=_setupFlags;
@property(nonatomic) unsigned int repairFlags; // @synthesize repairFlags=_repairFlags;
@property(readonly, nonatomic) double metricWiFiSetupSeconds; // @synthesize metricWiFiSetupSeconds=_metricWiFiSetupSeconds;
@property(readonly, nonatomic) double metricTotalSeconds; // @synthesize metricTotalSeconds=_metricTotalSeconds;
@property(readonly, nonatomic) double metricBonjourTestSeconds; // @synthesize metricBonjourTestSeconds=_metricBonjourTestSeconds;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) int bonjourTestState; // @synthesize bonjourTestState=_bonjourTestState;
- (void)_setupResponse:(id)arg1;
- (void)_complete:(id)arg1;
- (void)_bonjourTestTimeout;
- (void)_bonjourTestFoundDevice:(id)arg1;
- (void)_bonjourTestStart;
- (void)invalidate;
- (void)_activate2;
- (void)_activate;
- (void)activate;
- (id)init;

@end

