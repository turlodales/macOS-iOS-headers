//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, PKExpressTransactionState, PKFelicaAppletHistory, PKPaymentApplication, PKPaymentPass, PKPaymentTransaction, PKTransitAppletHistory;

@interface PKContactlessInterfaceTransactionContext : NSObject
{
    BOOL _success;
    BOOL _incompatible;
    NSDate *_date;
    PKPaymentPass *_paymentPass;
    PKPaymentApplication *_paymentApplication;
    PKPaymentTransaction *_transaction;
    NSArray *_valueAddedServicePasses;
    NSArray *_valueAddedServiceTransactions;
    PKTransitAppletHistory *_transitHistory;
    PKExpressTransactionState *_expressState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKExpressTransactionState *expressState; // @synthesize expressState=_expressState;
@property(retain, nonatomic) PKTransitAppletHistory *transitHistory; // @synthesize transitHistory=_transitHistory;
@property(retain, nonatomic) NSArray *valueAddedServiceTransactions; // @synthesize valueAddedServiceTransactions=_valueAddedServiceTransactions;
@property(retain, nonatomic) NSArray *valueAddedServicePasses; // @synthesize valueAddedServicePasses=_valueAddedServicePasses;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic, getter=isIncompatible) BOOL incompatible; // @synthesize incompatible=_incompatible;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(readonly, nonatomic) PKFelicaAppletHistory *felicaHistory;

@end

