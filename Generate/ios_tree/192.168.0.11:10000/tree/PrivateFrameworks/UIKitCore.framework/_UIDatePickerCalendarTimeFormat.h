/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDatePickerCalendarTimeFormat : NSObject {
    long long  _clock;
    long long  _clockLayout;
    bool  _forceDoubleDigitHours;
    bool  _hasLeadingLiteral;
    bool  _hasTrailingLiteral;
    NSString * _hourFormat;
    NSNumberFormatter * _hourFormatter;
    NSNumberFormatter * _minuteFormatter;
    NSNumberFormatter * _strictHourFormatter;
    NSString * _timeFormat;
    bool  _wantsDoubleDigitHours;
}

@property (nonatomic, readonly) long long clock;
@property (nonatomic, readonly) long long clockLayout;
@property (nonatomic, readonly) bool forceDoubleDigitHours;
@property (nonatomic, readonly) bool hasLeadingLiteral;
@property (nonatomic, readonly) bool hasTrailingLiteral;
@property (nonatomic, readonly) NSString *hourFormat;
@property (nonatomic, readonly) NSNumberFormatter *hourFormatter;
@property (nonatomic, readonly) NSNumberFormatter *minuteFormatter;
@property (nonatomic, readonly) NSNumberFormatter *strictHourFormatter;
@property (nonatomic, readonly) NSString *timeFormat;
@property (nonatomic, readonly) bool wantsDoubleDigitHours;

- (void).cxx_destruct;
- (long long)clock;
- (long long)clockLayout;
- (bool)forceDoubleDigitHours;
- (bool)hasLeadingLiteral;
- (bool)hasTrailingLiteral;
- (id)hourFormat;
- (id)hourFormatter;
- (id)initWithCalendar:(id)arg1 locale:(id)arg2 forceDoubleDigitHoursWhenFormatting:(bool)arg3;
- (id)localizedTimeStringWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2;
- (id)localizedTimeStringWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 hourRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 minuteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)minuteFormatter;
- (id)strictHourFormatter;
- (id)timeFormat;
- (bool)wantsDoubleDigitHours;

@end
