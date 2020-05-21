//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathFractionExpression : SCRCMathExpression
{
    SCRCMathExpression *_numerator;
    SCRCMathExpression *_denominator;
    SCRCMathExpression *_operator;
    double _lineThickness;
}

- (void).cxx_destruct;
@property(nonatomic) double lineThickness; // @synthesize lineThickness=_lineThickness;
@property(retain, nonatomic) SCRCMathExpression *operator; // @synthesize operator=_operator;
@property(retain, nonatomic) SCRCMathExpression *denominator; // @synthesize denominator=_denominator;
@property(retain, nonatomic) SCRCMathExpression *numerator; // @synthesize numerator=_numerator;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (id)_dollarCodeDescriptionAsBinomialCoefficient:(BOOL)arg1 orMixedNumberFraction:(BOOL)arg2 withNumberOfOuterRadicals:(unsigned long long)arg3 treePosition:(id)arg4;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)_speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 asBinomialCoefficient:(BOOL)arg4;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(long long)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2;
- (id)_speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 asBinomialCoefficient:(BOOL)arg3;
- (BOOL)isSimpleNumericalFraction;
- (unsigned long long)fractionLevel;
- (BOOL)isUnlinedFraction;
- (id)subExpressions;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

