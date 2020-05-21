//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CHHandle : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    NSString *_value;
    NSString *_normalizedValue;
}

+ (long long)handleTypeForValue:(id)arg1;
+ (id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2;
+ (id)normalizedGenericHandleForValue:(id)arg1;
+ (id)normalizedEmailAddressHandleForValue:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *normalizedValue; // @synthesize normalizedValue=_normalizedValue;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (BOOL)isEqualToHandle:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)initWithHandle:(id)arg1;
- (id)init;

@end

