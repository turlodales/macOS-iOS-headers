//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentPreference.h>

@class PKCurrencyAmount, PKPaymentPass;

@interface PKPaymentPreferenceUsePeerPaymentBalanceSwitch : PKPaymentPreference
{
    BOOL _on;
    BOOL _enabled;
    PKPaymentPass *_peerPaymentPass;
    PKCurrencyAmount *_peerPaymentBalance;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;
@property(retain, nonatomic) PKCurrencyAmount *peerPaymentBalance; // @synthesize peerPaymentBalance=_peerPaymentBalance;
@property(retain, nonatomic) PKPaymentPass *peerPaymentPass; // @synthesize peerPaymentPass=_peerPaymentPass;

@end

