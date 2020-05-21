//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Network/NWHostEndpoint.h>

@class NSData, NSString;

@interface NWAddressEndpoint : NWHostEndpoint
{
}

+ (id)endpointWithAddress:(const struct sockaddr *)arg1;
+ (id)endpointWithHostname:(id)arg1 port:(id)arg2;
+ (unsigned int)endpointType;
@property(readonly, nonatomic) unsigned long long addressFamily;
@property(readonly, nonatomic) const struct sockaddr *address;
@property(readonly, nonatomic) NSString *addressStringNoPort;
@property(readonly, nonatomic) NSString *addressString;
@property(readonly, nonatomic) NSData *addressData;
- (id)ethernetAddress;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;

@end

