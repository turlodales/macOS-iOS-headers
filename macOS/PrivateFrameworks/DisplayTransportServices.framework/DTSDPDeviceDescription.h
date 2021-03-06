//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DisplayTransportServices/DTSDeviceDescription-Protocol.h>
#import <DisplayTransportServices/NSSecureCoding-Protocol.h>

@protocol DTSDisplayPortDeviceInfo;

@interface DTSDPDeviceDescription : NSObject <DTSDeviceDescription, NSSecureCoding>
{
    unsigned int _port;
    unsigned int _framebufferIndex;
    unsigned long long _registryEntryID;
    id <DTSDisplayPortDeviceInfo> _info;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <DTSDisplayPortDeviceInfo> info; // @synthesize info=_info;
@property(readonly, nonatomic) unsigned int framebufferIndex; // @synthesize framebufferIndex=_framebufferIndex;
@property(readonly, nonatomic) unsigned int port; // @synthesize port=_port;
@property(readonly, nonatomic) unsigned long long registryEntryID; // @synthesize registryEntryID=_registryEntryID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRegistryEntryID:(unsigned long long)arg1 port:(unsigned int)arg2 framebufferIndex:(unsigned int)arg3 info:(id)arg4;
- (id)initWithDescription:(id)arg1;

@end

