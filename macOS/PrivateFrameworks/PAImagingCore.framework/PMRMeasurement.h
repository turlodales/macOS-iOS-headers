//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface PMRMeasurement : NSObject
{
    NSString *_valueAsString;
    NSString *_observationTimestampAsString;
    NSString *_key;
    NSNumber *_value;
    NSString *_comment;
    double _observationTimestamp;
    NSString *_units;
}

+ (id)withKey:(id)arg1 fixedPointNanosecondValue:(unsigned long long)arg2;
+ (id)withKey:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *units; // @synthesize units=_units;
@property(nonatomic) double observationTimestamp; // @synthesize observationTimestamp=_observationTimestamp;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (BOOL)isEqualToMeasurement:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setFixedPointNanosecondValue:(unsigned long long)arg1;
- (double)doubleValue;
- (void)setDoubleValue:(double)arg1;
- (void)setValueAsString:(id)arg1;
- (id)observationTimestampAsString;
- (id)valueAsString;
- (id)init;

@end

