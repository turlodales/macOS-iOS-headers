//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DMManager.h"

@interface DMManager (TMExtensions)
+ (id)managerForThread;
- (struct __DADisk *)tm_containerForMountPoint:(id)arg1 error:(id *)arg2;
- (struct __DADisk *)tm_diskForMountPoint:(id)arg1 error:(id *)arg2;
- (struct __DADisk *)tm_diskForUUID:(id)arg1 error:(id *)arg2;
- (BOOL)forciblyUnmountAndEjectWholeDiskOfDisk:(struct __DADisk *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ejectDisk:(struct __DADisk *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unmountDisk:(struct __DADisk *)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)canDiskBeEncryptedWithoutDestroyingOtherPartitions:(struct __DADisk *)arg1;
- (BOOL)canDiskBeReformattedAsHFSWithoutDestroyingOtherPartitions:(struct __DADisk *)arg1;
- (long long)numberOfUserVolumesOnWholeDisk:(struct __DADisk *)arg1;
- (id)nameAndSizeForDisk:(struct __DADisk *)arg1;
- (id)nameForDisk:(struct __DADisk *)arg1;
- (BOOL)isEncryptedDisk:(struct __DADisk *)arg1;
- (BOOL)isCoreStorageDisk:(struct __DADisk *)arg1;
- (struct __DADisk *)copyDiskForPath:(id)arg1;
- (void)cleanUp;
- (struct __DASession *)diskArbSession;
@end

