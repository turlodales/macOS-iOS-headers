//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface PKBankAccountInformation : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_accountNumber;
    NSString *_routingNumber;
    NSString *_bankName;
    NSString *_identifier;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (Class)_classForType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *routingNumber; // @synthesize routingNumber=_routingNumber;
@property(copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)maskedAccountNumber;
- (id)accountSuffix;
- (BOOL)isValid;
- (void)deleteAllLocalBankInformation;
- (void)deleteAllBankInformation;
- (void)_commonDeleteAllBankInformation;
- (void)updateToLatestKeychainData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

