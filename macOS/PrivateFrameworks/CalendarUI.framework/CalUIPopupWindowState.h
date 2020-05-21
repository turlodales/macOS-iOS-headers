//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CalUIPopupWindowState : NSObject
{
    BOOL _allowsMultipleMonthlyDayButtons;
    BOOL _allowsYearlyIntervalChange;
    BOOL _allowsMultipleYearlyMonthButtons;
    BOOL _yearlyByDaySwitch;
    unsigned short _weeklyDayButtons;
    int _monthlyRuleType;
    int _monthlyOrdinalValue;
    int _monthlyOrdinalDayValue;
    int _yearlyOrdinalValue;
    int _yearlyOrdinalDayValue;
    long long _frequencySelectorValue;
    long long _dailyIntervalValue;
    long long _weeklyIntervalValue;
    long long _monthlyIntervalValue;
    NSMutableArray *_monthlyDayButtons;
    long long _yearlyIntervalValue;
    NSMutableArray *_yearlyMonthButtons;
}

- (void).cxx_destruct;
@property int yearlyOrdinalDayValue; // @synthesize yearlyOrdinalDayValue=_yearlyOrdinalDayValue;
@property int yearlyOrdinalValue; // @synthesize yearlyOrdinalValue=_yearlyOrdinalValue;
@property BOOL yearlyByDaySwitch; // @synthesize yearlyByDaySwitch=_yearlyByDaySwitch;
@property BOOL allowsMultipleYearlyMonthButtons; // @synthesize allowsMultipleYearlyMonthButtons=_allowsMultipleYearlyMonthButtons;
@property(retain) NSMutableArray *yearlyMonthButtons; // @synthesize yearlyMonthButtons=_yearlyMonthButtons;
@property BOOL allowsYearlyIntervalChange; // @synthesize allowsYearlyIntervalChange=_allowsYearlyIntervalChange;
@property long long yearlyIntervalValue; // @synthesize yearlyIntervalValue=_yearlyIntervalValue;
@property int monthlyOrdinalDayValue; // @synthesize monthlyOrdinalDayValue=_monthlyOrdinalDayValue;
@property int monthlyOrdinalValue; // @synthesize monthlyOrdinalValue=_monthlyOrdinalValue;
@property int monthlyRuleType; // @synthesize monthlyRuleType=_monthlyRuleType;
@property BOOL allowsMultipleMonthlyDayButtons; // @synthesize allowsMultipleMonthlyDayButtons=_allowsMultipleMonthlyDayButtons;
@property(retain) NSMutableArray *monthlyDayButtons; // @synthesize monthlyDayButtons=_monthlyDayButtons;
@property long long monthlyIntervalValue; // @synthesize monthlyIntervalValue=_monthlyIntervalValue;
@property unsigned short weeklyDayButtons; // @synthesize weeklyDayButtons=_weeklyDayButtons;
@property long long weeklyIntervalValue; // @synthesize weeklyIntervalValue=_weeklyIntervalValue;
@property long long dailyIntervalValue; // @synthesize dailyIntervalValue=_dailyIntervalValue;
@property long long frequencySelectorValue; // @synthesize frequencySelectorValue=_frequencySelectorValue;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)reset;
- (id)init;

@end

