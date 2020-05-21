//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDecimalNumber, PKCreditAccountBalanceSummary, PKCreditAccountStatement;

@interface PKCreditAccountSummary : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _requiresDebtCollectionNotices;
    BOOL _inGrace;
    BOOL _autoPayEnabled;
    NSDecimalNumber *_creditLimit;
    NSDecimalNumber *_availableCredit;
    NSDecimalNumber *_currentBalance;
    NSDecimalNumber *_rewardsBalance;
    NSDecimalNumber *_remainingStatementBalance;
    NSDecimalNumber *_remainingMinimumPayment;
    NSDecimalNumber *_remainingMinimumPaymentExcludedFromInterestCalculation;
    NSDecimalNumber *_installmentBalance;
    NSDate *_lastPaymentDate;
    long long _cyclesPastDue;
    unsigned long long _balanceStatus;
    PKCreditAccountBalanceSummary *_balanceSummary;
    NSDecimalNumber *_unpostedInterest;
    NSDate *_unpostedInterestTimestamp;
    NSDecimalNumber *_chargeOffPreventionAmount;
    NSDecimalNumber *_pastDueAmount;
    PKCreditAccountStatement *_currentStatement;
    NSDecimalNumber *_adjustedBalance;
    NSDate *_paymentDueDate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *paymentDueDate; // @synthesize paymentDueDate=_paymentDueDate;
@property(copy, nonatomic) NSDecimalNumber *adjustedBalance; // @synthesize adjustedBalance=_adjustedBalance;
@property(retain, nonatomic) PKCreditAccountStatement *currentStatement; // @synthesize currentStatement=_currentStatement;
@property(nonatomic) BOOL autoPayEnabled; // @synthesize autoPayEnabled=_autoPayEnabled;
@property(copy, nonatomic) NSDecimalNumber *pastDueAmount; // @synthesize pastDueAmount=_pastDueAmount;
@property(copy, nonatomic) NSDecimalNumber *chargeOffPreventionAmount; // @synthesize chargeOffPreventionAmount=_chargeOffPreventionAmount;
@property(nonatomic) BOOL inGrace; // @synthesize inGrace=_inGrace;
@property(copy, nonatomic) NSDate *unpostedInterestTimestamp; // @synthesize unpostedInterestTimestamp=_unpostedInterestTimestamp;
@property(copy, nonatomic) NSDecimalNumber *unpostedInterest; // @synthesize unpostedInterest=_unpostedInterest;
@property(nonatomic) BOOL requiresDebtCollectionNotices; // @synthesize requiresDebtCollectionNotices=_requiresDebtCollectionNotices;
@property(retain, nonatomic) PKCreditAccountBalanceSummary *balanceSummary; // @synthesize balanceSummary=_balanceSummary;
@property(nonatomic) unsigned long long balanceStatus; // @synthesize balanceStatus=_balanceStatus;
@property(nonatomic) long long cyclesPastDue; // @synthesize cyclesPastDue=_cyclesPastDue;
@property(copy, nonatomic) NSDate *lastPaymentDate; // @synthesize lastPaymentDate=_lastPaymentDate;
@property(copy, nonatomic) NSDecimalNumber *installmentBalance; // @synthesize installmentBalance=_installmentBalance;
@property(copy, nonatomic) NSDecimalNumber *remainingMinimumPaymentExcludedFromInterestCalculation; // @synthesize remainingMinimumPaymentExcludedFromInterestCalculation=_remainingMinimumPaymentExcludedFromInterestCalculation;
@property(copy, nonatomic) NSDecimalNumber *remainingMinimumPayment; // @synthesize remainingMinimumPayment=_remainingMinimumPayment;
@property(copy, nonatomic) NSDecimalNumber *remainingStatementBalance; // @synthesize remainingStatementBalance=_remainingStatementBalance;
@property(copy, nonatomic) NSDecimalNumber *rewardsBalance; // @synthesize rewardsBalance=_rewardsBalance;
@property(copy, nonatomic) NSDecimalNumber *currentBalance; // @synthesize currentBalance=_currentBalance;
@property(copy, nonatomic) NSDecimalNumber *availableCredit; // @synthesize availableCredit=_availableCredit;
@property(copy, nonatomic) NSDecimalNumber *creditLimit; // @synthesize creditLimit=_creditLimit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ingestExtendedAccountDetails:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

