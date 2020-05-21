//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NSTextCheckingResult : NSObject <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)transitInformationCheckingResultWithRange:(struct _NSRange)arg1 components:(id)arg2;
+ (id)phoneNumberCheckingResultWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2;
+ (id)regularExpressionCheckingResultWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;
+ (id)correctionCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3;
+ (id)correctionCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)replacementCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)dashCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)quoteCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)linkCheckingResultWithRange:(struct _NSRange)arg1 URL:(id)arg2;
+ (id)addressCheckingResultWithRange:(struct _NSRange)arg1 components:(id)arg2;
+ (id)dateCheckingResultWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
+ (id)dateCheckingResultWithRange:(struct _NSRange)arg1 date:(id)arg2;
+ (id)grammarCheckingResultWithRange:(struct _NSRange)arg1 details:(id)arg2;
+ (id)spellCheckingResultWithRange:(struct _NSRange)arg1;
+ (id)orthographyCheckingResultWithRange:(struct _NSRange)arg1 orthography:(id)arg2;
- (BOOL)timeIsPast;
- (BOOL)timeIsApproximate;
- (BOOL)timeIsSignificant;
- (void *)underlyingResult;
- (id)phoneNumber;
- (id)regularExpression;
- (id)alternativeStrings;
- (id)replacementString;
- (id)URL;
- (id)components;
- (id)addressComponents;
- (id)trailingText;
- (id)leadingText;
- (id)referenceDate;
- (double)duration;
- (id)timeZone;
- (id)date;
- (id)grammarDetails;
- (id)orthography;
- (struct _NSRange)rangeWithName:(id)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRanges;
- (BOOL)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
@property(readonly) struct _NSRange range;
@property(readonly) unsigned long long resultType;
- (struct _NSRange)decodeRangeWithCoder:(id)arg1;
- (void)encodeRangeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

