//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class NSDate, NSTimeZone;

@interface PKPaymentDateDataItem : PKPaymentDataItem
{
    NSDate *_paymentDate;
    NSTimeZone *_paymentTimeZone;
    long long _paymentFrequency;
}

+ (long long)dataType;
- (void).cxx_destruct;
@property(nonatomic) long long paymentFrequency; // @synthesize paymentFrequency=_paymentFrequency;
@property(retain, nonatomic) NSTimeZone *paymentTimeZone; // @synthesize paymentTimeZone=_paymentTimeZone;
@property(retain, nonatomic) NSDate *paymentDate; // @synthesize paymentDate=_paymentDate;
- (BOOL)isValidWithError:(id *)arg1;
- (id)initWithModel:(id)arg1;

@end

