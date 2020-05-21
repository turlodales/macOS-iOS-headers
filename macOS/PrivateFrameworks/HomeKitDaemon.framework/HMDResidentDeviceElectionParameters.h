//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDHomeKitVersion, HMDResidentDevice, HMFBoolean, HMFProductInfo, NSArray, NSSet;

@interface HMDResidentDeviceElectionParameters : HMFObject
{
    HMFProductInfo *_productInfo;
    HMDHomeKitVersion *_version;
    NSSet *_accessories;
    HMDResidentDevice *_resident;
    HMFBoolean *_enabled;
    long long _location;
}

- (void).cxx_destruct;
@property(readonly) long long location; // @synthesize location=_location;
@property(readonly, copy, getter=isEnabled) HMFBoolean *enabled; // @synthesize enabled=_enabled;
@property(readonly) HMDResidentDevice *resident; // @synthesize resident=_resident;
- (id)serializedPayload;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSArray *accessories;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithResident:(id)arg1 enabled:(id)arg2 location:(long long)arg3 accessories:(id)arg4;
- (id)initWithResident:(id)arg1 serializedPayload:(id)arg2;
- (id)init;

@end

