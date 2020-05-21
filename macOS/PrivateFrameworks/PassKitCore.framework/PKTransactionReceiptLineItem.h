//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDecimalNumber, NSString, NSURL, PKCurrencyAmount, PKImage;

@interface PKTransactionReceiptLineItem : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_secondarySubtitle;
    PKImage *_image;
    unsigned long long _quantity;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    NSURL *_iconImageURL;
    unsigned long long _adamIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long adamIdentifier; // @synthesize adamIdentifier=_adamIdentifier;
@property(retain, nonatomic) NSURL *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(nonatomic) unsigned long long quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) PKImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *secondarySubtitle; // @synthesize secondarySubtitle=_secondarySubtitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) PKCurrencyAmount *currencyAmount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToTransactionReceiptLineItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

