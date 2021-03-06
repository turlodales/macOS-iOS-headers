//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenSharing/NSMachPortDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, RDMutex;

@interface PerformSelectorOnThreadManager : NSObject <NSMachPortDelegate>
{
    NSMutableDictionary *_threadToPortMap;
    NSArray *_modes;
    RDMutex *_lock;
    NSMutableArray *_commandQueue;
}

+ (id)sharedManager;
- (id)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
- (void)threadWrapper:(id)arg1;
- (void)handlePortMessage:(id)arg1;
- (void)performSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 onThread:(id)arg4;
- (void)unregisterCurrentThread;
- (void)registerCurrentThread;
- (id)makeKeyForThread:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

