//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "PKCloudStoreCoding.h"

@class NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    PKCurrencyAmount *_destinationCurrencyAmount;
    NSDecimalNumber *_exchangeRate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDecimalNumber *exchangeRate; // @synthesize exchangeRate=_exchangeRate;
@property(copy, nonatomic) PKCurrencyAmount *destinationCurrencyAmount; // @synthesize destinationCurrencyAmount=_destinationCurrencyAmount;
- (BOOL)isEqualToForeignExchangeInformation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)arg1;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (BOOL)isValid;
- (id)jsonString;
- (id)jsonDictionaryRepresentation;

@end

