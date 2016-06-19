//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDecimalNumber, NSString;

@interface INCurrencyAmount : NSObject <NSCopying, NSSecureCoding>
{
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, copy) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2;

@end

