//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class DeviceConfigurationMO, NSSet, NSString, VolumePolicyMO;

__attribute__((visibility("hidden")))
@interface PortMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) DeviceConfigurationMO *configuration; // @dynamic configuration;
@property(retain, nonatomic) NSSet *contentDSP; // @dynamic contentDSP;
@property(retain, nonatomic) NSSet *dspModule; // @dynamic dspModule;
@property(retain, nonatomic) NSSet *hwDSP; // @dynamic hwDSP;
@property(retain, nonatomic) NSSet *ioStreamFormat; // @dynamic ioStreamFormat;
@property(retain, nonatomic) NSSet *micConfiguration; // @dynamic micConfiguration;
@property(copy, nonatomic) NSString *portType; // @dynamic portType;
@property(nonatomic) int virtualChannelCount; // @dynamic virtualChannelCount;
@property(retain, nonatomic) VolumePolicyMO *volumePolicy; // @dynamic volumePolicy;

@end

