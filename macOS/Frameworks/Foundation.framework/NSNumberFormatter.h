//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import "NSObservable.h"
#import "NSObserver.h"

@class NSAttributedString, NSDecimalNumberHandler, NSDictionary, NSLocale, NSMutableDictionary, NSNumber, NSRecursiveLock, NSString;

@interface NSNumberFormatter : NSFormatter <NSObservable, NSObserver>
{
    NSMutableDictionary *_attributes;
    struct __CFNumberFormatter *_formatter;
    unsigned long long _counter;
    unsigned long long _behavior;
    NSRecursiveLock *_lock;
    unsigned long long _stateBitMask;
    long long _cacheGeneration;
    void *_reserved[8];
}

+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2;
+ (void)initialize;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;
+ (unsigned long long)defaultFormatterBehavior;
+ (void)_setDefaultRedColor:(id)arg1;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (BOOL)_usesCharacterDirection;
@property(getter=isPartialStringValidationEnabled) BOOL partialStringValidationEnabled;
@property unsigned long long maximumSignificantDigits;
@property unsigned long long minimumSignificantDigits;
@property BOOL usesSignificantDigits;
@property(getter=isLenient) BOOL lenient;
@property(copy) NSString *currencyGroupingSeparator;
@property(copy) NSNumber *maximum;
@property(copy) NSNumber *minimum;
@property unsigned long long maximumFractionDigits;
@property unsigned long long minimumFractionDigits;
@property unsigned long long maximumIntegerDigits;
@property unsigned long long minimumIntegerDigits;
@property(copy) NSNumber *roundingIncrement;
@property unsigned long long roundingMode;
@property unsigned long long paddingPosition;
@property(copy) NSString *paddingCharacter;
@property(copy) NSNumber *multiplier;
@property unsigned long long formatWidth;
@property unsigned long long secondaryGroupingSize;
@property unsigned long long groupingSize;
@property(copy) NSString *exponentSymbol;
@property(copy) NSString *plusSign;
@property(copy) NSString *minusSign;
@property(copy) NSString *perMillSymbol;
@property(copy) NSString *percentSymbol;
- (BOOL)_hasSetInternationalCurrencySymbol;
@property(copy) NSString *internationalCurrencySymbol;
@property(copy) NSString *currencySymbol;
- (BOOL)_hasSetCurrencySymbol;
- (BOOL)_hasSetCurrencyCode;
@property(copy) NSString *currencyCode;
@property(copy) NSString *negativeSuffix;
@property(copy) NSString *negativePrefix;
@property(copy) NSString *positiveSuffix;
@property(copy) NSString *positivePrefix;
@property(copy) NSDictionary *textAttributesForNegativeInfinity;
@property(copy) NSString *negativeInfinitySymbol;
@property(copy) NSDictionary *textAttributesForPositiveInfinity;
@property(copy) NSString *positiveInfinitySymbol;
@property(copy) NSDictionary *textAttributesForNotANumber;
@property(copy) NSString *notANumberSymbol;
@property(copy) NSDictionary *textAttributesForNil;
@property(copy) NSString *nilSymbol;
@property(copy) NSDictionary *textAttributesForZero;
@property(copy) NSString *zeroSymbol;
@property(copy) NSString *groupingSeparator;
@property BOOL usesGroupingSeparator;
@property(copy) NSString *currencyDecimalSeparator;
@property BOOL alwaysShowsDecimalSeparator;
@property(copy) NSString *decimalSeparator;
@property BOOL allowsFloats;
@property(copy) NSDictionary *textAttributesForPositiveValues;
@property(copy) NSString *positiveFormat;
@property(copy) NSDictionary *textAttributesForNegativeValues;
@property(copy) NSString *negativeFormat;
@property unsigned long long formatterBehavior;
@property BOOL generatesDecimalNumbers;
@property(copy) NSLocale *locale;
@property unsigned long long numberStyle;
@property long long formattingContext;
- (id)numberFromString:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (long long)_cacheGenerationCount;
- (BOOL)_tracksCacheGenerationCount;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)_reset;
- (id)init;
- (void *)__Keynote_NOOP;
- (void)_regenerateFormatter;
- (void)_clearFormatter;
- (void)_invalidateCache;
- (BOOL)checkLocaleChange;
- (void)resetCheckLocaleChange;
- (void)resetCheckModify;
- (BOOL)checkModify;
- (void)clearPropertyBit;
- (void)setPropertyBit;
- (void *)getFormatter;
@property(copy) NSDecimalNumberHandler *roundingBehavior;
@property(copy) NSAttributedString *attributedStringForNotANumber;
@property(copy) NSAttributedString *attributedStringForNil;
@property(copy) NSAttributedString *attributedStringForZero;
@property(copy) NSString *format;
@property BOOL localizesFormat;
@property(copy) NSString *thousandSeparator;
@property BOOL hasThousandSeparators;
- (void)setLocalizationFromDefaults;
- (void)_removeInternalRedFromTextAttributesOfNegativeValues;
- (BOOL)_containsColorForTextAttributesOfNegativeValues;
- (void)_addInternalRedToTextAttributesOfNegativeValues;
- (BOOL)__oldnf_getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)__oldnf_stringForObjectValue:(id)arg1;
- (BOOL)__oldnf_decimalIsNotANumber:(id)arg1;
- (id)__oldnf_numberStringForValueObject:(id)arg1 withBuffer:(CDStruct_177dfe65 *)arg2 andNegativeFlag:(BOOL)arg3;
- (void)__oldnf_surroundValueInString:(unsigned short *)arg1 withLength:(long long *)arg2 andBuffer:(CDStruct_177dfe65 *)arg3;
- (void)__oldnf_setLocalizationFromDefaults;
- (void)__oldnf_removeInternalRedFromTextAttributesOfNegativeValues;
- (BOOL)__oldnf_containsColorForTextAttributesOfNegativeValues;
- (void)__oldnf_addInternalRedToTextAttributesOfNegativeValues;
- (id)__oldnf_addThousandSeparatorsToFormat:(id)arg1 withBuffer:(CDStruct_177dfe65 *)arg2;
- (void)__oldnf_addThousandSeparators:(id)arg1 withBuffer:(CDStruct_177dfe65 *)arg2;
- (void)receiveObservedValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

