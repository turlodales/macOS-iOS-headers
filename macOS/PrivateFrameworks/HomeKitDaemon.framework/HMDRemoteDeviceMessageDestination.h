//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDDevice, HMDDeviceHandle;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination
{
    HMDDevice *_device;
    HMDDeviceHandle *_preferredHandle;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(copy, nonatomic) HMDDeviceHandle *preferredHandle; // @synthesize preferredHandle=_preferredHandle;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (id)remoteDestinationString;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 device:(id)arg2;
- (id)initWithTarget:(id)arg1;

@end

