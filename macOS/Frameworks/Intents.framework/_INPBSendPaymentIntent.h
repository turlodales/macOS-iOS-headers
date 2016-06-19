//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBContact, _INPBCurrencyAmount, _INPBIntentMetadata, _INPBPaymentMethod, _INPBString;

@interface _INPBSendPaymentIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBCurrencyAmount *_currencyAmount;
    _INPBIntentMetadata *_intentMetadata;
    _INPBString *_note;
    _INPBContact *_payee;
    _INPBPaymentMethod *_paymentMethod;
}

+ (id)options;
@property(retain, nonatomic) _INPBPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(retain, nonatomic) _INPBString *note; // @synthesize note=_note;
@property(retain, nonatomic) _INPBCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property(retain, nonatomic) _INPBContact *payee; // @synthesize payee=_payee;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPaymentMethod;
@property(readonly, nonatomic) BOOL hasNote;
@property(readonly, nonatomic) BOOL hasCurrencyAmount;
@property(readonly, nonatomic) BOOL hasPayee;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

@end

