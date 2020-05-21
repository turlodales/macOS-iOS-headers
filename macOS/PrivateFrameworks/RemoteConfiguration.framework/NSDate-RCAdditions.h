//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (RCAdditions)
+ (id)_fr_sharedYearAndMonthDateFormatter;
+ (id)rc_laterDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)rc_earlierDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)rc_dateWithMillisecondTimeIntervalSince1970:(unsigned long long)arg1;
+ (id)rc_dateFromStringWithHTTPHeaderFormat:(id)arg1;
+ (id)rc_dateFromStringWithISO8601Format:(id)arg1;
+ (id)rc_dateFromString:(id)arg1 possibleFormats:(id)arg2;
- (id)rc_stringWithYearAndMonthFormat;
- (id)rc_stringWithISO8601Format;
- (BOOL)rc_isSameDayAs:(id)arg1;
@property(readonly, nonatomic) BOOL rc_isWeekend;
- (BOOL)isToday;
- (long long)rc_GregorianCalendarDaysSinceDate:(id)arg1;
- (id)rc_dateOfEarliestGregorianCalendarDay;
- (unsigned long long)rc_millisecondTimeIntervalSinceDate:(id)arg1;
- (unsigned long long)rc_millisecondTimeIntervalSince1970;
- (id)rc_dateBySubtractingTimeInterval:(double)arg1;
- (BOOL)rc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;
- (BOOL)rc_isLaterThan:(id)arg1 withPrecision:(long long)arg2;
- (BOOL)rc_isLaterThanOrEqualTo:(id)arg1;
- (BOOL)rc_isLaterThan:(id)arg1;
- (BOOL)rc_isEarlierThan:(id)arg1 withPrecision:(long long)arg2;
- (BOOL)rc_isEarlierThanOrEqualTo:(id)arg1;
- (BOOL)rc_isEarlierThan:(id)arg1;
@property(readonly) double rc_timeIntervalUntilNow;
@end

