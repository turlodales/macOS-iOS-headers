//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VolumeInfoObject : NSObject
{
    NSString *_bsdName;
    NSString *_volName;
    short _vRefNum;
    struct FSRef _fsRef;
    NSString *_mountPoint;
}

+ (id)mountPointFoBSDPath:(id)arg1;
+ (id)volumeInfoObject:(char (*)[512])arg1 volumeName:(struct HFSUniStr255 *)arg2 volumeRefNum:(short)arg3 fileSystemRef:(struct FSRef *)arg4;
+ (int)unmountPartitions:(id)arg1;
+ (id)getVolumeInfoFromService:(unsigned int)arg1;
- (id)volumePath;
- (void)getRootDirFSRef:(struct FSRef *)arg1;
- (void)setVRefNum:(short)arg1;
- (short)vRefNum;
- (void)setMountPoint:(id)arg1;
- (id)mountPoint;
- (void)setVolName:(id)arg1;
- (id)volName;
- (void)setBsdName:(id)arg1;
- (id)bsdName;
- (id)description;
- (void)dealloc;
- (id)initWithBSDName:(char (*)[512])arg1 volumeName:(struct HFSUniStr255 *)arg2 volumeRefNum:(short)arg3 fileSystemRef:(struct FSRef *)arg4;

@end

