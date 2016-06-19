//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface ABCNPostalAddress : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_street;
    NSString *_subLocality;
    NSString *_city;
    NSString *_subAdministrativeArea;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_countryCode;
}

+ (BOOL)supportsSecureCoding;
+ (id)postalAddressWithDictionaryRepresentation:(id)arg1;
+ (id)postalAddress;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(readonly, copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, copy, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(readonly, copy, nonatomic) NSString *street; // @synthesize street=_street;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPostalAddress:(id)arg1;

@end

