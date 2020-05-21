//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLForegroundMonitorDelegate.h"

@class NSString, PLForegroundMonitor;

@interface PLCameraAppWatcher : NSObject <PLForegroundMonitorDelegate>
{
    BOOL _isCameraRunning;
    PLForegroundMonitor *_foregroundMonitor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PLForegroundMonitor *foregroundMonitor; // @synthesize foregroundMonitor=_foregroundMonitor;
@property(readonly, nonatomic) BOOL isCameraRunning; // @synthesize isCameraRunning=_isCameraRunning;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

