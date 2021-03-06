//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSDateFormatter;

@interface CNVCardDateComponentsFormatter : NSFormatter
{
    NSCalendar *_gregorianCalendar;
    NSDateFormatter *_compactYearMonthDayDateFormatter;
    NSDateFormatter *_compactYearMonthDayDateHourMinuteSecondZFormatter;
    NSDateFormatter *_monthDayDateFormatter;
    NSDateFormatter *_yearMonthDayDateFormatter;
    NSDateFormatter *_yearMonthDayDateHourMinuteSecondZFormatter;
}

+ (id)dateComponentsFromALTBDAYString:(id)arg1;
- (void).cxx_destruct;
- (id)stringForComponentValue:(long long)arg1 format:(id)arg2;
- (id)altBDAYStringFromDateComponents:(id)arg1;
- (id)dateComponentsFromALTBDAYString:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)yearMonthDayStringFromDateComponents:(id)arg1;
- (id)monthDayStringFromDateComponents:(id)arg1;
- (id)dateComponentsFromString:(id)arg1;
- (id)compactYearMonthDayDateHourMinuteSecondZFormatter;
- (id)compactYearMonthDayDateFormatter;
- (id)yearMonthDayDateFormatter;
- (id)yearMonthDayDateHourMinuteSecondZFormatter;
- (id)monthDayDateFormatter;
- (id)gregorianCalendar;
- (id)stringFromDateComponents:(id)arg1;

@end

