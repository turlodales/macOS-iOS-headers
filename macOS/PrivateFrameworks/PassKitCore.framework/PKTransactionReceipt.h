//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDecimalNumber, NSString, NSURL, PKCurrencyAmount;

@interface PKTransactionReceipt : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_uniqueID;
    NSString *_receiptProviderIdentifier;
    NSString *_receiptIdentifier;
    NSDate *_lastUpdatedDate;
    NSURL *_supportURL;
    long long _state;
    NSDecimalNumber *_subtotalAmount;
    NSDecimalNumber *_totalAmount;
    NSString *_currencyCode;
    NSArray *_headerFields;
    NSArray *_lineItems;
    NSArray *_summaryItems;
    NSData *_pdfReceiptData;
    NSData *_htmlReceiptData;
    NSURL *_fileURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSData *htmlReceiptData; // @synthesize htmlReceiptData=_htmlReceiptData;
@property(readonly, nonatomic) NSData *pdfReceiptData; // @synthesize pdfReceiptData=_pdfReceiptData;
@property(readonly, nonatomic) NSArray *summaryItems; // @synthesize summaryItems=_summaryItems;
@property(readonly, nonatomic) NSArray *lineItems; // @synthesize lineItems=_lineItems;
@property(readonly, nonatomic) NSArray *headerFields; // @synthesize headerFields=_headerFields;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDecimalNumber *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) NSDecimalNumber *subtotalAmount; // @synthesize subtotalAmount=_subtotalAmount;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSURL *supportURL; // @synthesize supportURL=_supportURL;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(copy, nonatomic) NSString *receiptIdentifier; // @synthesize receiptIdentifier=_receiptIdentifier;
@property(copy, nonatomic) NSString *receiptProviderIdentifier; // @synthesize receiptProviderIdentifier=_receiptProviderIdentifier;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, nonatomic) PKCurrencyAmount *totalCurrencyAmount;
@property(readonly, nonatomic) PKCurrencyAmount *subtotalCurrencyAmount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToTransactionReceipt:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)updateWithBundle:(id)arg1;
- (id)initWithFileURL:(id)arg1;

@end

