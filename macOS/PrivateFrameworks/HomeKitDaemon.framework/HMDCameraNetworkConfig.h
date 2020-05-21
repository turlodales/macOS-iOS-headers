//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface HMDCameraNetworkConfig : HMFObject <NSCopying>
{
    CDUnion_fab80606 _ipv4SockAddress;
    CDUnion_fab80606 _ipv6SockAddress;
    BOOL _ipv6;
    NSString *_ipAddress;
    NSNumber *_rtpPort;
}

+ (id)localIPAddress;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *rtpPort; // @synthesize rtpPort=_rtpPort;
@property(nonatomic) BOOL ipv6; // @synthesize ipv6=_ipv6;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddress:(id)arg1 ipv6:(BOOL)arg2 rtpPort:(id)arg3;
- (id)init;

@end

