//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSCopying-Protocol.h>
#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class WiFiAwarePublishDatapathSecurityConfiguration, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwarePublishDatapathConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    long long _serviceType;
    WiFiAwarePublishDatapathSecurityConfiguration *_securityConfiguration;
    WiFiAwarePublishDatapathServiceSpecificInfo *_serviceSpecificInfo;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;
@property(readonly, nonatomic) WiFiAwarePublishDatapathSecurityConfiguration *securityConfiguration; // @synthesize securityConfiguration=_securityConfiguration;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)serviceSpecificInfoEqual:(id)arg1;
- (BOOL)securityConfigurationEqual:(id)arg1;
- (id)initWithServiceType:(long long)arg1 securityConfiguration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

