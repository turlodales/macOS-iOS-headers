//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ACRateLimiter : NSObject
{
    BOOL _isVacuumInProgress;
    unsigned long long _maximum;
    double _timeInterval;
    NSObject<OS_dispatch_queue> *_instanceQueue;
    NSObject<OS_dispatch_queue> *_vacuumQueue;
    NSMutableDictionary *_keyToSimpleRateLimiter;
    double _vacuumTimeInterval;
    NSDate *_nextVacuumDate;
}

- (void).cxx_destruct;
@property(retain) NSDate *nextVacuumDate; // @synthesize nextVacuumDate=_nextVacuumDate;
@property BOOL isVacuumInProgress; // @synthesize isVacuumInProgress=_isVacuumInProgress;
@property(readonly) double vacuumTimeInterval; // @synthesize vacuumTimeInterval=_vacuumTimeInterval;
@property(retain) NSMutableDictionary *keyToSimpleRateLimiter; // @synthesize keyToSimpleRateLimiter=_keyToSimpleRateLimiter;
@property(readonly) NSObject<OS_dispatch_queue> *vacuumQueue; // @synthesize vacuumQueue=_vacuumQueue;
@property(readonly) NSObject<OS_dispatch_queue> *instanceQueue; // @synthesize instanceQueue=_instanceQueue;
@property(readonly) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly) unsigned long long maximum; // @synthesize maximum=_maximum;
- (BOOL)_vacuumQueue_vacuumKey:(id)arg1;
- (void)_vacuumQueue_vacuum;
- (void)vacuumIfNeeded;
- (id)simpleRateLimiterForKey:(id)arg1;
- (BOOL)reservePerformActionForKey:(id)arg1;
- (id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2;

@end

