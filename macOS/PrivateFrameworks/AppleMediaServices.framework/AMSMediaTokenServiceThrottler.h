//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceThrottler : NSObject
{
    double _baseSleepInterval;
    double _maxSleepInterval;
    unsigned long long _attemptNumber;
    NSDate *_throttleDate;
}

- (void).cxx_destruct;
@property(retain) NSDate *throttleDate; // @synthesize throttleDate=_throttleDate;
@property unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property double maxSleepInterval; // @synthesize maxSleepInterval=_maxSleepInterval;
@property double baseSleepInterval; // @synthesize baseSleepInterval=_baseSleepInterval;
- (double)_calculateThrottleInterval;
- (void)throttle;
- (BOOL)shouldThrottle;
- (void)reset;
- (id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2;

@end

