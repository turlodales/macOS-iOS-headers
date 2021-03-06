//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ABCDDateUtils : NSObject
{
}

+ (id)componentsFromDate:(id)arg1;
+ (id)gregorianCalendar;
+ (_Bool)isDateComponentsEmpty:(id)arg1;
+ (id)dateAtNoonGMTFromGregorianDateComponents:(id)arg1;
+ (id)dateComponentsFromGMTDate:(id)arg1;
+ (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDateInLocalTimeZone:(id)arg2;
+ (id)makeCalendarWithOffsetFromGMT:(long long)arg1;
+ (id)calendarWithOffsetFromGMT:(long long)arg1;
+ (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDate:(id)arg2 inTimeZoneSecondsFromGMT:(long long)arg3;
+ (id)localDateOccurringAtNoonOnSameCalendarDayAsDate:(id)arg1 inTimeZoneSecondsFromGMT:(long long)arg2;
+ (id)localDateOccurringAtNoonOnSameCalendarDayAsDateInGMT:(id)arg1;
+ (id)localDateOccurringOnSameCalendarDayAsDateInGMT:(id)arg1;
+ (id)localCalendar;
+ (id)gmtDateOccurringAtNoonOnSameCalendarDayAsDateInLocalTime:(id)arg1;
+ (id)dateByNormalizingToGMT:(id)arg1;
- (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDate:(id)arg2 inTimeZoneSecondsFromGMT:(long long)arg3;

@end

