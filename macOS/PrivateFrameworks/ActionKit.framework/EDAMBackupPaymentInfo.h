//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBackupPaymentInfo : FATObject
{
    NSString *_premiumCommerceService;
    NSString *_premiumServiceSKU;
    NSString *_currency;
    NSNumber *_unitPrice;
    NSNumber *_paymentMethodId;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *paymentMethodId; // @synthesize paymentMethodId=_paymentMethodId;
@property(retain, nonatomic) NSNumber *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *premiumServiceSKU; // @synthesize premiumServiceSKU=_premiumServiceSKU;
@property(retain, nonatomic) NSString *premiumCommerceService; // @synthesize premiumCommerceService=_premiumCommerceService;

@end

