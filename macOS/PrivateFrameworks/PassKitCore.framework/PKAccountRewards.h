//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "PKRecordObject.h"

@class NSSet, NSString, PKCurrencyAmount, PKPaymentTransactionRewards;

@interface PKAccountRewards : NSObject <NSSecureCoding, PKRecordObject>
{
    NSString *_identifier;
    PKCurrencyAmount *_currencyAmount;
    NSString *_status;
    long long _statusCode;
    PKPaymentTransactionRewards *_rewards;
    long long _type;
    NSSet *_transactionIdentifiers;
    NSSet *_rewardsAddedIdentifiers;
}

+ (id)recordNamePrefix;
+ (id)recordType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *rewardsAddedIdentifiers; // @synthesize rewardsAddedIdentifiers=_rewardsAddedIdentifiers;
@property(copy, nonatomic) NSSet *transactionIdentifiers; // @synthesize transactionIdentifiers=_transactionIdentifiers;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) PKPaymentTransactionRewards *rewards; // @synthesize rewards=_rewards;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) PKCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToAccountEvent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

