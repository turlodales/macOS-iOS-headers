//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSIntervalRecurrencePatternBaseType.h>

@class NSIndexSet;

@interface EWSWeeklyRecurrencePatternType : EWSIntervalRecurrencePatternBaseType
{
    NSIndexSet *_DaysOfWeek;
    long long _FirstDayOfWeek;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) long long FirstDayOfWeek; // @synthesize FirstDayOfWeek=_FirstDayOfWeek;
@property(copy, nonatomic) NSIndexSet *DaysOfWeek; // @synthesize DaysOfWeek=_DaysOfWeek;

@end

