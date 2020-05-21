//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSString;

@interface IDSRegisteredDevice : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_hardwareVersion;
    NSData *_pushToken;
    NSArray *_URIs;
    NSData *_publicDeviceIdentity;
}

+ (BOOL)supportsSecureCoding;
+ (id)registeredDeviceFromDependentRegistrationDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *publicDeviceIdentity; // @synthesize publicDeviceIdentity=_publicDeviceIdentity;
@property(readonly, nonatomic) NSArray *URIs; // @synthesize URIs=_URIs;
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToRegisteredDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 hardwareVersion:(id)arg2 pushToken:(id)arg3 URIs:(id)arg4 publicDeviceIdentity:(id)arg5;

@end

