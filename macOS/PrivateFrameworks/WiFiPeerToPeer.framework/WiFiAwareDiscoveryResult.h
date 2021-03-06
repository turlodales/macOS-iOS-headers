//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSString, WiFiAwarePublishServiceSpecificInfo, WiFiMACAddress;

@interface WiFiAwareDiscoveryResult : NSObject <NSSecureCoding>
{
    long long _datapathCipherSuite;
    long long _fsdFunction;
    unsigned char _subscribeID;
    unsigned char _publishID;
    BOOL _datapathSupported;
    NSString *_serviceName;
    WiFiAwarePublishServiceSpecificInfo *_serviceSpecificInfo;
    WiFiMACAddress *_publisherAddress;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL datapathSupported; // @synthesize datapathSupported=_datapathSupported;
@property(readonly, nonatomic) WiFiMACAddress *publisherAddress; // @synthesize publisherAddress=_publisherAddress;
@property(readonly, nonatomic) unsigned char publishID; // @synthesize publishID=_publishID;
@property(readonly, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)description;
- (const char *)fsdFunctionString;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL furtherServiceDiscoveryRequired;
- (long long)fsdFunction;
@property(readonly, nonatomic) BOOL datapathSecurityRequired;
- (long long)datapathCipherSuite;
- (unsigned char)subscribeID;
- (BOOL)serviceSpecificInfoEqual:(id)arg1;
- (id)initWithServiceName:(id)arg1 serviceSpecificInfo:(id)arg2 publishID:(unsigned char)arg3 subscribeID:(unsigned char)arg4 publisherAddressKey:(id)arg5 datapathSupported:(BOOL)arg6 datapathCipherSuite:(long long)arg7 fsdFunction:(long long)arg8;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

