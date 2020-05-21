//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABRecord.h"

@interface ABRecord (AddressBookUI)
+ (void)writeRecords:(id)arg1 toPasteboard:(id)arg2;
+ (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDateInLocalTimeZone:(id)arg2;
+ (id)makeCalendarWithOffsetFromGMT:(long long)arg1;
+ (id)calendarWithOffsetFromGMT:(long long)arg1;
+ (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDate:(id)arg2 inTimeZoneSecondsFromGMT:(long long)arg3;
+ (id)localDateOccurringAtNoonOnSameCalendarDayAsDate:(id)arg1 inTimeZoneSecondsFromGMT:(long long)arg2;
+ (id)localDateOccurringAtNoonOnSameCalendarDayAsDateInGMT:(id)arg1;
+ (id)localDateOccurringOnSameCalendarDayAsDateInGMT:(id)arg1;
+ (id)gmtCalendar;
+ (id)localCalendar;
+ (id)gmtDateOccurringAtNoonOnSameCalendarDayAsDateInLocalTime:(id)arg1;
+ (id)dateByNormalizingToGMT:(id)arg1;
- (void)setAllProperties:(id)arg1;
- (id)allProperties;
- (id)createAlternateName;
- (id)createFirstLastSorting:(BOOL)arg1 part1:(BOOL)arg2;
- (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDateInLocalTimeZone:(id)arg2;
- (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDate:(id)arg2 inTimeZoneSecondsFromGMT:(long long)arg3;
- (id)localDateOccurringAtNoonOnSameCalendarDayAsDate:(id)arg1 inTimeZoneSecondsFromGMT:(long long)arg2;
- (id)localDateOccurringAtNoonOnSameCalendarDayAsDateInGMT:(id)arg1;
- (id)localDateOccurringOnSameCalendarDayAsDateInGMT:(id)arg1;
- (id)gmtDateOccurringAtNoonOnSameCalendarDayAsDateInLocalTime:(id)arg1;
- (id)dateByNormalizingToGMT:(id)arg1;
@end

