//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NWAddressEndpoint;

@interface NEIKEv2TrafficSelector : NSObject <NSCopying>
{
    unsigned char _ipProtocol;
    unsigned short _startPort;
    unsigned short _endPort;
    NWAddressEndpoint *_startAddress;
    NWAddressEndpoint *_endAddress;
}

+ (id)copyAllIPv4;
+ (id)copyAllIPv6;
+ (id)copyConstrainedTrafficSelectorsForRequest:(id)arg1 reply:(id)arg2;
- (void).cxx_destruct;
@property unsigned char ipProtocol; // @synthesize ipProtocol=_ipProtocol;
@property unsigned short endPort; // @synthesize endPort=_endPort;
@property unsigned short startPort; // @synthesize startPort=_startPort;
@property(retain) NWAddressEndpoint *endAddress; // @synthesize endAddress=_endAddress;
@property(retain) NWAddressEndpoint *startAddress; // @synthesize startAddress=_startAddress;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long type;
- (id)description;
- (id)init;

@end

