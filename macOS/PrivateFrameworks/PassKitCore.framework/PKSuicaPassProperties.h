//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKTransitPassProperties.h>

@class NSDecimalNumber, NSString;

@interface PKSuicaPassProperties : PKTransitPassProperties
{
    BOOL _balanceAllowedForCommute;
    BOOL _lowBalanceGateNotificationEnabled;
    BOOL _greenCarTicketUsed;
}

+ (Class)equalityClass;
+ (id)passPropertiesForPass:(id)arg1;
@property(readonly, nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed; // @synthesize greenCarTicketUsed=_greenCarTicketUsed;
@property(readonly, nonatomic, getter=isLowBalanceGateNotificationEnabled) BOOL lowBalanceGateNotificationEnabled; // @synthesize lowBalanceGateNotificationEnabled=_lowBalanceGateNotificationEnabled;
@property(readonly, nonatomic, getter=isBalanceAllowedForCommute) BOOL balanceAllowedForCommute; // @synthesize balanceAllowedForCommute=_balanceAllowedForCommute;
@property(readonly, nonatomic, getter=isInStation) BOOL inStation; // @dynamic inStation;
@property(readonly, nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation; // @dynamic inShinkansenStation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isBlacklisted) BOOL blacklisted; // @dynamic blacklisted;
@property(readonly, copy, nonatomic) NSDecimalNumber *transitBalance; // @dynamic transitBalance;
@property(readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode; // @dynamic transitBalanceCurrencyCode;

@end

