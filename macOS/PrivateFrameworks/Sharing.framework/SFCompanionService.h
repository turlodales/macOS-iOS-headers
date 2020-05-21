//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_deviceName;
    NSString *_deviceID;
    NSString *_serviceType;
    NSString *_managerID;
    NSString *_ipAddress;
    NSString *_identifier;
    NSNumber *_nsxpcVersion;
}

+ (BOOL)supportsSecureCoding;
+ (id)serviceFromAuthorData:(id)arg1;
+ (id)serviceFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSNumber *nsxpcVersion; // @synthesize nsxpcVersion=_nsxpcVersion;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(copy) NSString *managerID; // @synthesize managerID=_managerID;
@property(copy) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToService:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageData;
- (id)initWithServiceName:(id)arg1;

@end

