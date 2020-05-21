//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CKDVolume : NSObject
{
    NSUUID *_volumeUUID;
    NSNumber *_deviceID;
    NSString *_mountToPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mountToPath; // @synthesize mountToPath=_mountToPath;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSUUID *volumeUUID; // @synthesize volumeUUID=_volumeUUID;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithVolumeUUID:(id)arg1 deviceID:(id)arg2 mountToPath:(id)arg3;

@end

