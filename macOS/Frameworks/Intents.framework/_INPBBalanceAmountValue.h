//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBBalanceAmountValue.h"

@class NSString, _INPBCurrencyAmountValue, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBBalanceAmountValue : PBCodable <_INPBBalanceAmountValue, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    BOOL __encodeLegacyGloryData;
    int _type;
    _INPBCurrencyAmountValue *_currencyAmount;
    _INPBDecimalNumberValue *_customAmount;
    _INPBValueMetadata *_valueMetadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBDecimalNumberValue *customAmount; // @synthesize customAmount=_customAmount;
@property(retain, nonatomic) _INPBCurrencyAmountValue *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValueMetadata;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(readonly, nonatomic) BOOL hasCustomAmount;
@property(readonly, nonatomic) BOOL hasCurrencyAmount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

