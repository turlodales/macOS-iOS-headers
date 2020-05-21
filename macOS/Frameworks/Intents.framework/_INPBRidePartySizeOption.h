//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBRidePartySizeOption.h"

@class NSString, _INPBPriceRangeValue, _INPBRangeValue;

@interface _INPBRidePartySizeOption : PBCodable <_INPBRidePartySizeOption, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBRangeValue *_partySizeRange;
    _INPBPriceRangeValue *_priceRange;
    NSString *_sizeDescription;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *sizeDescription; // @synthesize sizeDescription=_sizeDescription;
@property(retain, nonatomic) _INPBPriceRangeValue *priceRange; // @synthesize priceRange=_priceRange;
@property(retain, nonatomic) _INPBRangeValue *partySizeRange; // @synthesize partySizeRange=_partySizeRange;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasSizeDescription;
@property(readonly, nonatomic) BOOL hasPriceRange;
@property(readonly, nonatomic) BOOL hasPartySizeRange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

