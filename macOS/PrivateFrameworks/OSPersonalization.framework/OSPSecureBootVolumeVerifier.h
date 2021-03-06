//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OSPersonalization/SKManagerListener-Protocol.h>

@class NSString, NSURL, OSPDevice, SKDisk;
@protocol OS_dispatch_semaphore;

@interface OSPSecureBootVolumeVerifier : NSObject <SKManagerListener>
{
    unsigned long long _policy;
    NSURL *_volumeURL;
    SKDisk *_targetDisk;
    SKDisk *_prebootDisk;
    OSPDevice *_device;
    NSObject<OS_dispatch_semaphore> *_initialPopulateCompleteSemaphore;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_semaphore> *initialPopulateCompleteSemaphore; // @synthesize initialPopulateCompleteSemaphore=_initialPopulateCompleteSemaphore;
@property(retain) OSPDevice *device; // @synthesize device=_device;
@property(retain) SKDisk *prebootDisk; // @synthesize prebootDisk=_prebootDisk;
@property(retain) SKDisk *targetDisk; // @synthesize targetDisk=_targetDisk;
@property(retain) NSURL *volumeURL; // @synthesize volumeURL=_volumeURL;
@property unsigned long long policy; // @synthesize policy=_policy;
- (void)initialPopulateComplete;
- (BOOL)_unmountDisk:(id)arg1;
- (BOOL)_mountDisk:(id)arg1;
- (id)_prebootDiskForDisk:(id)arg1;
- (BOOL)verify;
- (id)initWithVolume:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

