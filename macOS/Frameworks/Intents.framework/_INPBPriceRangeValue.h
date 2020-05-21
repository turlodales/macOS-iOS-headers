//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPriceRangeValue.h"

@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBPriceRangeValue : PBCodable <_INPBPriceRangeValue, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSString *_currencyCode;
    _INPBDecimalNumberValue *_maximumPrice;
    _INPBDecimalNumberValue *_minimumPrice;
    _INPBValueMetadata *_valueMetadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) _INPBDecimalNumberValue *minimumPrice; // @synthesize minimumPrice=_minimumPrice;
@property(retain, nonatomic) _INPBDecimalNumberValue *maximumPrice; // @synthesize maximumPrice=_maximumPrice;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(readonly, nonatomic) BOOL hasMinimumPrice;
@property(readonly, nonatomic) BOOL hasMaximumPrice;
@property(readonly, nonatomic) BOOL hasCurrencyCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

