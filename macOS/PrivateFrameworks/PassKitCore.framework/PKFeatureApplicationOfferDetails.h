//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDecimalNumber, NSString;

@interface PKFeatureApplicationOfferDetails : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_offerTermsIdentifier;
    NSDate *_expiryDate;
    NSDecimalNumber *_creditLimit;
    NSDecimalNumber *_annualFee;
    NSDecimalNumber *_aprForPurchase;
    NSString *_currencyCode;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *aprForPurchase; // @synthesize aprForPurchase=_aprForPurchase;
@property(copy, nonatomic) NSDecimalNumber *annualFee; // @synthesize annualFee=_annualFee;
@property(copy, nonatomic) NSDecimalNumber *creditLimit; // @synthesize creditLimit=_creditLimit;
@property(copy, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(copy, nonatomic) NSString *offerTermsIdentifier; // @synthesize offerTermsIdentifier=_offerTermsIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

