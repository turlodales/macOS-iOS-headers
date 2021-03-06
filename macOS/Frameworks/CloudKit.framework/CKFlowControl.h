//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError;

@interface CKFlowControl : NSObject
{
    unsigned long long _budgetCap;
    double _regenerationPerSecond;
    unsigned long long _totalSamples;
    double _totalCost;
    double _budget;
    double _maximumThrottleTime;
    NSError *_lastReportableError;
    NSDate *_lastRegeneration;
}

+ (id)flowControlWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;
- (void).cxx_destruct;
@property(retain) NSDate *lastRegeneration; // @synthesize lastRegeneration=_lastRegeneration;
@property(retain, nonatomic) NSError *lastReportableError; // @synthesize lastReportableError=_lastReportableError;
@property(nonatomic) double maximumThrottleTime; // @synthesize maximumThrottleTime=_maximumThrottleTime;
@property double budget; // @synthesize budget=_budget;
- (BOOL)attemptBudgetedExpenditureWithCost:(double)arg1;
- (void)expendWithCost:(double)arg1 reportableError:(id)arg2;
- (BOOL)isLimited;
- (double)secondsUntilBudgetLimitationRemoved;
- (double)_secondsUntilBudgetLimitationRemovedNoRegen;
@property double regenerationPerSecond; // @synthesize regenerationPerSecond=_regenerationPerSecond;
@property unsigned long long budgetCap; // @synthesize budgetCap=_budgetCap;
- (void)regenerate;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;

@end

