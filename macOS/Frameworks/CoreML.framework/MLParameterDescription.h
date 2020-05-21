//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class MLNumericConstraint, MLParameterKey;

@interface MLParameterDescription : NSObject <NSSecureCoding>
{
    MLParameterKey *_key;
    id _defaultValue;
    MLNumericConstraint *_numericConstraint;
}

+ (BOOL)supportsSecureCoding;
+ (id)parameterDescriptionForKey:(id)arg1 defaultValue:(id)arg2 numericConstraint:(id)arg3;
+ (id)parameterDescriptionForKey:(id)arg1 boolParameterSpec:(const struct BoolParameter *)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 stringParameterSpec:(const struct StringParameter *)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 doubleParameterSpec:(const struct DoubleParameter *)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 int64ParameterSpec:(const struct Int64Parameter *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MLNumericConstraint *numericConstraint; // @synthesize numericConstraint=_numericConstraint;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) MLParameterKey *key; // @synthesize key=_key;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

