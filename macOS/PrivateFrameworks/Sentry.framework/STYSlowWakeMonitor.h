//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "STYWakeDetectorDelegate.h"

@class STYWakeDetector, STYWakeDiagnosticManager;

@interface STYSlowWakeMonitor : NSObject <STYWakeDetectorDelegate>
{
    STYWakeDetector *_wakeMonitor;
    STYWakeDiagnosticManager *_wakeDiagnosticManager;
    BOOL _lowerThresholdForWakeDiagnostics;
}

+ (void)monitorDetectedWake:(id)arg1;
+ (void)_startMonitoring;
+ (void)continuePastReportsToSentry;
+ (void)monitorUntilNextWake;
+ (void)monitorForever;
- (void).cxx_destruct;
- (BOOL)isWakeSlow:(id)arg1;
- (void)recordSignpostsForWake:(id)arg1;
- (void)_stopMonitoring;
- (void)detectedWake:(id)arg1;
- (void)missedBeginningOfWake;
- (id)init;

@end

