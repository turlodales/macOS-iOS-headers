//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFSpawn : NSObject
{
    int _pid;
    int _termstatus;
}

+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 redirect:(id)arg4;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;
@property(readonly) int terminationStatus;
@property(readonly) int processID;
- (void)waitUntilExit;

@end

