//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBListRideOptionsIntentResponse.h"

@class NSArray, NSString, _INPBTimestamp;

@interface _INPBListRideOptionsIntentResponse : PBCodable <_INPBListRideOptionsIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int supportsApplePayForPayment:1;
    } _has;
    BOOL _supportsApplePayForPayment;
    BOOL __encodeLegacyGloryData;
    _INPBTimestamp *_expirationDate;
    NSArray *_paymentMethods;
    NSArray *_rideOptions;
}

+ (BOOL)supportsSecureCoding;
+ (Class)rideOptionsType;
+ (Class)paymentMethodsType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) BOOL supportsApplePayForPayment; // @synthesize supportsApplePayForPayment=_supportsApplePayForPayment;
@property(copy, nonatomic) NSArray *rideOptions; // @synthesize rideOptions=_rideOptions;
@property(copy, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(retain, nonatomic) _INPBTimestamp *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasSupportsApplePayForPayment;
- (id)rideOptionsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long rideOptionsCount;
- (void)addRideOptions:(id)arg1;
- (void)clearRideOptions;
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long paymentMethodsCount;
- (void)addPaymentMethods:(id)arg1;
- (void)clearPaymentMethods;
@property(readonly, nonatomic) BOOL hasExpirationDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

