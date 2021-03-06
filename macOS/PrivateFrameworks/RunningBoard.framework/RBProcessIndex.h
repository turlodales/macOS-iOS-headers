//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSFastEnumeration-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface RBProcessIndex : NSObject <NSFastEnumeration>
{
    struct os_unfair_lock_s _lock;
    unsigned long long _capacity;
    NSMutableOrderedSet *_processes;
    NSMutableDictionary *_processByIdentity;
    NSMutableDictionary *_processByInstance;
    NSMutableDictionary *_processByIdentifier;
}

+ (id)indexWithCapacity:(unsigned long long)arg1;
+ (id)index;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)_lock_removeProcess:(id)arg1;
- (void)removeAllObjects;
- (id)processForIdentity:(id)arg1;
- (id)processForInstance:(id)arg1;
- (id)processForIdentifier:(id)arg1;
- (BOOL)containsIdentity:(id)arg1;
- (BOOL)containsIdentifier:(id)arg1;
- (BOOL)containsInstance:(id)arg1;
- (BOOL)containsProcess:(id)arg1;
- (BOOL)removeProcess:(id)arg1;
- (BOOL)addProcess:(id)arg1;
- (id)allProcesses;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

