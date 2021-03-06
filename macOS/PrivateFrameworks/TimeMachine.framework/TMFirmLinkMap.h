//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TMFirmLinkMap : NSObject
{
    struct _fakelink_group *_group;
    NSString *_systemVolumeMountPoint;
    NSString *_dataVolumeMountPoint;
}

+ (id)currentRootFirmLinkMap;
@property(readonly, copy) NSString *dataVolumeMountPoint; // @synthesize dataVolumeMountPoint=_dataVolumeMountPoint;
@property(readonly, copy) NSString *systemVolumeMountPoint; // @synthesize systemVolumeMountPoint=_systemVolumeMountPoint;
- (id)firmLinkedPathByUnresolvingAbsolutePathOnDataVolume:(id)arg1;
- (id)absolutePathOnDataVolumeByResolvingFirmLinkInPath:(id)arg1;
@property(readonly, copy) NSArray *virtualLinksOnSystemVolume;
- (void)dealloc;
- (id)initWithSystemMountPoint:(id)arg1 dataMountPoint:(id)arg2 firmLinkManifest:(id)arg3 syntheticManifest:(id)arg4;
- (id)initWithMountPoint:(id)arg1;

@end

