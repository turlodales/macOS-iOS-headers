//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPReachabilityMonitor;

@protocol FPReachabilityObserver <NSObject>
- (void)reachabilityMonitor:(FPReachabilityMonitor *)arg1 didChangeReachabilityStatusTo:(BOOL)arg2;

@optional
- (void)reachabilityMonitor:(FPReachabilityMonitor *)arg1 didChangeReachabilityFlagsTo:(unsigned int)arg2;
@end

