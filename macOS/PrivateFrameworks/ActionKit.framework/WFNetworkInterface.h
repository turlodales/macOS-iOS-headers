//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WFNetworkInterface : NSObject
{
    NSString *_interfaceName;
}

+ (id)wifiNetworkInterfaces;
+ (id)defaultNetworkInterfaces;
+ (id)activeNetworkInterface;
+ (id)networkInterfaceWithInterface:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (id)ipAddressForFamily:(unsigned char)arg1;
@property(readonly, nonatomic) NSString *IPv6Address;
@property(readonly, nonatomic) NSString *IPv4Address;
@property(readonly, nonatomic) NSString *BSSID;
@property(readonly, nonatomic) NSString *SSID;
- (id)initWithInterface:(id)arg1;

@end

