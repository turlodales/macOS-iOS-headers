//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "RBStateCapturing.h"

@class NSArray;

@protocol RBProcessMonitorObserving <NSObject, RBStateCapturing>
- (void)processMonitor:(id <RBProcessMonitoring>)arg1 didChangeProcessStates:(NSArray *)arg2;
@end

