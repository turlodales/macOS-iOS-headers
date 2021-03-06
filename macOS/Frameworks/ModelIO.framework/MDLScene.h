//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSMutableArray;

@interface MDLScene : NSObject
{
    struct mutex *_sceneMutex;
    struct vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *>> _sceneObjects;
    struct vector<MDLLight *, std::__1::allocator<MDLLight *>> _sceneLights;
    NSMutableArray *_objects;
    int _signature;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (id)raytraceSceneWithCamera:(const struct RTCamera *)arg1 reflection:(id)arg2 irradiance:(id)arg3 size: /* Error: Ran out of types for this method. */;
- (void)clear;
- (void)addObject:(id)arg1;
- (BOOL)castRayFrom:(struct RTCamera *)arg1 withDirection:(struct RTIntersectionResult *)arg2 usingCamera:result: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)hitTestRayFrom:(id)arg1 withDirection:usingCamera: /* Error: Ran out of types for this method. */;
- (void)releaseLockGuard:(int)arg1;
- (int)acquireLockGuard;
- (void)dealloc;
- (id)init;

@end

