//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CLLocation, NSDate, NSNumber, NSString;

@interface _MKLocalSearchMerchantParameters : NSObject <NSCopying>
{
    NSString *_merchantCode;
    NSString *_rawMerchantCode;
    NSString *_paymentNetwork;
    NSString *_industryCategory;
    NSNumber *_industryCode;
    NSDate *_transactionDate;
    CLLocation *_transactionLocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *transactionLocation; // @synthesize transactionLocation=_transactionLocation;
@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(retain, nonatomic) NSNumber *industryCode; // @synthesize industryCode=_industryCode;
@property(copy, nonatomic) NSString *industryCategory; // @synthesize industryCategory=_industryCategory;
@property(copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic) NSString *rawMerchantCode; // @synthesize rawMerchantCode=_rawMerchantCode;
@property(copy, nonatomic) NSString *merchantCode; // @synthesize merchantCode=_merchantCode;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

