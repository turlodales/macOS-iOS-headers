//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSilo;
@protocol CLTimerScheduler;

@interface CLTimer : NSObject
{
    double _delaySetAtTime;
    double _nextFireDelay;
    CLSilo *_silo;
    id <CLTimerScheduler> _scheduler;
    CDUnknownBlockType _handler;
    double _fireInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double fireInterval; // @synthesize fireInterval=_fireInterval;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)shouldFire;
- (void)invalidate;
- (double)nextFireDelayRaw;
@property(nonatomic) double nextFireDelay; // @synthesize nextFireDelay=_nextFireDelay;
- (void)setNextFireDelay:(double)arg1 interval:(double)arg2;
- (id)initInSilo:(id)arg1 withScheduler:(id)arg2;
- (void)updateScheduler;
- (void)setNextFireTime:(double)arg1 interval:(double)arg2;
@property(nonatomic) double nextFireTime; // @dynamic nextFireTime;

@end

