//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDRateLimiting.h"

@class NSArray, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface _CDMultiLevelRateLimiter : NSObject <_CDRateLimiting>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastRecorded;
    long long _numberOfRateLimitPolicies;
    NSArray *_periods;
    NSMutableArray *_periodStart;
    NSArray *_maxCounts;
    NSMutableArray *_balances;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long numOfRateLimitPolicies; // @synthesize numOfRateLimitPolicies=_numberOfRateLimitPolicies;
@property(readonly, retain, nonatomic) NSDate *lastRecorded; // @synthesize lastRecorded=_lastRecorded;
@property(readonly, copy) NSString *description;
- (void)recordTimeAndRefillIfNeededRaw;
- (BOOL)debited;
- (BOOL)credit;
- (id)initWithPeriodToCountMap:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

