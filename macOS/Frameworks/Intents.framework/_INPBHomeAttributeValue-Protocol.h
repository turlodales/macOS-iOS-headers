//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBHomeAttributeRange;

@protocol _INPBHomeAttributeValue <NSObject>
@property(nonatomic) BOOL hasValueType;
@property(nonatomic) int valueType;
@property(nonatomic) BOOL hasUnit;
@property(nonatomic) int unit;
@property(readonly, nonatomic) BOOL hasStringValue;
@property(copy, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) BOOL hasRangeValue;
@property(retain, nonatomic) _INPBHomeAttributeRange *rangeValue;
@property(nonatomic) BOOL hasLimitValue;
@property(nonatomic) int limitValue;
@property(nonatomic) BOOL hasIntegerValue;
@property(nonatomic) long long integerValue;
@property(nonatomic) BOOL hasDoubleValue;
@property(nonatomic) double doubleValue;
@property(nonatomic) BOOL hasBooleanValue;
@property(nonatomic) BOOL booleanValue;
- (int)StringAsValueType:(NSString *)arg1;
- (NSString *)valueTypeAsString:(int)arg1;
- (int)StringAsUnit:(NSString *)arg1;
- (NSString *)unitAsString:(int)arg1;
- (int)StringAsLimitValue:(NSString *)arg1;
- (NSString *)limitValueAsString:(int)arg1;
@end

