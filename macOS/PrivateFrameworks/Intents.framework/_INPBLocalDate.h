//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBLocalDate.h"

@class NSString;

@interface _INPBLocalDate : PBCodable <_INPBLocalDate, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int dayOfMonth:1;
        unsigned int dayOfWeek:1;
        unsigned int month:1;
        unsigned int year:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _dayOfWeek;
    long long _dayOfMonth;
    long long _month;
    long long _year;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property(nonatomic) long long dayOfMonth; // @synthesize dayOfMonth=_dayOfMonth;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasYear;
@property(nonatomic) BOOL hasMonth;
- (int)StringAsDayOfWeek:(id)arg1;
- (id)dayOfWeekAsString:(int)arg1;
@property(nonatomic) BOOL hasDayOfWeek;
@property(nonatomic) BOOL hasDayOfMonth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

