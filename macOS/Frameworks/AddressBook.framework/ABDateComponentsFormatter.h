//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSArray, NSLocale, NSString;

@interface ABDateComponentsFormatter : NSFormatter
{
    NSLocale *_locale;
    NSArray *_lazyFormatterFutures;
    NSString *_dateFormatPlaceholderString;
}

+ (id)chineseLongStyleRelatedGregorianYearMonthDayFormatter;
+ (id)chineseCyclicYearMonthDayFormatter;
+ (id)chineseRelatedGregorianYearMonthDayHanidayFormatter;
+ (id)chineseMonthDayHanidayFormatter;
+ (id)chineseMonthDayFormatter;
+ (id)chineseRelatedGregorianYearMonthDayFormatter;
+ (id)shortDayMonthYearlessDateFormatterWithLocale:(id)arg1;
+ (id)shortDayMonthYearDateFormatterWithLocale:(id)arg1;
+ (id)longDayMonthYearlessDateFormatterWithLocale:(id)arg1;
+ (id)longDayMonthYearDateFormatterWithLocale:(id)arg1;
+ (id)formatterFuturesWithLocale:(id)arg1;
+ (BOOL)shouldUseIslamicSpecificFormattersForLocale:(id)arg1;
+ (BOOL)shouldUseChinaSpecificFormattersForLocale:(id)arg1;
+ (id)dateFormatterWithYearFormat:(id)arg1 hasLongFormat:(BOOL)arg2 locale:(id)arg3;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)normalizedComponentsFromDate:(id)arg1 calendar:(id)arg2;
- (unsigned long long)componentsToExtract;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)dateComponentsFromString:(id)arg1;
- (id)stringFromDateComponents:(id)arg1;
- (id)displayFormatterForComponents:(id)arg1;
- (void)regenerateFormatterFutures;
- (id)arabicIslamicPlaceholderString;
- (id)arabicGregorianPlaceholderString;
- (BOOL)shouldUseArabicIslamicPlaceholderStringForLanguage:(id)arg1;
- (BOOL)shouldUseArabicGregorianPlaceholderStringForLanguage:(id)arg1;
- (id)chinesePlaceholderStringWithDay:(id)arg1 month:(id)arg2 year:(id)arg3;
- (BOOL)shouldUseChinesePlaceholderString;
- (id)placeholderStringWithLocalizedDay:(id)arg1 month:(id)arg2 year:(id)arg3;
- (id)dateFormatPlaceholderStringForLanguage:(id)arg1;
- (id)dateFormatPlaceholderString;
- (id)dmyFormatString;
- (id)placeholderSubstitutionStringWithDay:(unsigned long long)arg1 month:(unsigned long long)arg2 year:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

@end

