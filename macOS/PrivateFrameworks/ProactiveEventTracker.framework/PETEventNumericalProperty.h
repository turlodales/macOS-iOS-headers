//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveEventTracker/PETEventProperty.h>

@interface PETEventNumericalProperty : PETEventProperty
{
    struct _NSRange _validRange;
    BOOL _clampValues;
}

- (id)longestValueString;
- (unsigned long long)cardinality;
- (unsigned long long)_unsignedIntegerValueForNumericValue:(id)arg1;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (struct _NSRange)validRange;
- (id)description;
- (id)initWithName:(id)arg1 range:(struct _NSRange)arg2 clampValues:(BOOL)arg3;

@end

