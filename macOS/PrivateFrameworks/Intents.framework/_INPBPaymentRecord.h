//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPaymentRecord.h"

@class NSString, _INPBContact, _INPBCurrencyAmount, _INPBPaymentMethodValue, _INPBString;

@interface _INPBPaymentRecord : PBCodable <_INPBPaymentRecord, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int status:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _status;
    _INPBCurrencyAmount *_currencyAmount;
    _INPBCurrencyAmount *_feeAmount;
    _INPBString *_note;
    _INPBContact *_payee;
    _INPBContact *_payer;
    _INPBPaymentMethodValue *_paymentMethod;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) _INPBPaymentMethodValue *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(retain, nonatomic) _INPBContact *payer; // @synthesize payer=_payer;
@property(retain, nonatomic) _INPBContact *payee; // @synthesize payee=_payee;
@property(retain, nonatomic) _INPBString *note; // @synthesize note=_note;
@property(retain, nonatomic) _INPBCurrencyAmount *feeAmount; // @synthesize feeAmount=_feeAmount;
@property(retain, nonatomic) _INPBCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(readonly, nonatomic) BOOL hasPaymentMethod;
@property(readonly, nonatomic) BOOL hasPayer;
@property(readonly, nonatomic) BOOL hasPayee;
@property(readonly, nonatomic) BOOL hasNote;
@property(readonly, nonatomic) BOOL hasFeeAmount;
@property(readonly, nonatomic) BOOL hasCurrencyAmount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

