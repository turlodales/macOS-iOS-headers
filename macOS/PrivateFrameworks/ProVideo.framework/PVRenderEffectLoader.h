//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVRenderEffectLoader : NSObject
{
    struct deque<PVLoadedEffectItem, std::__1::allocator<PVLoadedEffectItem>> *_loadedEffects;
    struct HGSynchronizable *_lock;
    _Bool _flushesOnEffectStackChanges;
    float _unusedEffectTimeout;
}

@property(nonatomic) float unusedEffectTimeout; // @synthesize unusedEffectTimeout=_unusedEffectTimeout;
- (void)_removeTimedOutEffects_noLock;
- (void)_loadEffects_noLock:(id)arg1;
- (void)_removeUnusedEffects_noLock:(id)arg1;
- (void)ageOutEffects;
- (void)unloadEffects;
- (void)loadEffectsForGraphs:(id)arg1 loadContext:(HGRef_6bae45d3)arg2;
- (void)dealloc;
- (id)init;

@end

