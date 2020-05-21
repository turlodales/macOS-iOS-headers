//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSDate, NSString;

@interface PLSingleQuery : PBCodable <NSCopying>
{
    int _comparator;
    NSData *_firstValue;
    int _key;
    NSData *_secondValue;
    int _unit;
    int _valueType;
    struct {
        unsigned int comparator:1;
        unsigned int key:1;
        unsigned int unit:1;
        unsigned int valueType:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(nonatomic) int comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSData *secondValue; // @synthesize secondValue=_secondValue;
@property(retain, nonatomic) NSData *firstValue; // @synthesize firstValue=_firstValue;
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
@property(nonatomic) int key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasUnit;
@property(nonatomic) BOOL hasComparator;
@property(readonly, nonatomic) BOOL hasSecondValue;
@property(readonly, nonatomic) BOOL hasFirstValue;
@property(nonatomic) BOOL hasValueType;
@property(nonatomic) BOOL hasKey;
- (id)logDescription;
- (void)setValueAndType:(id)arg1;
- (int)migratedComparator;
@property(retain, nonatomic) NSDate *secondDateValue;
@property(retain, nonatomic) NSDate *dateValue;
@property(retain, nonatomic) NSString *secondStringValue;
@property(retain, nonatomic) NSString *stringValue;
@property(nonatomic) BOOL boolValue;
@property(nonatomic) long long secondIntegerValue;
@property(nonatomic) long long integerValue;
@property(nonatomic) double secondDoubleValue;
@property(nonatomic) double doubleValue;

@end

