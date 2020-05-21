//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDate, NSDecimalNumber, NSString, PKCurrencyAmount, PKFelicaPassProperties;

@interface PKTransitPassProperties : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _blacklisted;
    NSDate *_expirationDate;
    NSString *_appletFormat;
    PKCurrencyAmount *_balance;
    NSArray *_enrouteTransitTypes;
}

+ (BOOL)supportsSecureCoding;
+ (Class)equalityClass;
+ (id)passPropertiesForPass:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *enrouteTransitTypes; // @synthesize enrouteTransitTypes=_enrouteTransitTypes;
@property(copy, nonatomic) PKCurrencyAmount *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSString *appletFormat; // @synthesize appletFormat=_appletFormat;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic, getter=isBlacklisted) BOOL blacklisted; // @synthesize blacklisted=_blacklisted;
@property(readonly, nonatomic) BOOL isEnRoute;
@property(readonly, nonatomic, getter=isInStation) BOOL inStation;
@property(readonly, nonatomic) NSDecimalNumber *decimalTransitBalance;
@property(readonly, nonatomic) NSString *displayableTransitBalance;
@property(readonly, nonatomic) NSString *currencyCode;
@property(readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;
@property(readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2;
@property(readonly, nonatomic) PKFelicaPassProperties *felicaProperties;

@end

