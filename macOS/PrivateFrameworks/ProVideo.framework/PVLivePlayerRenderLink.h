//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PVLivePlayer;

@interface PVLivePlayerRenderLink : NSObject
{
    CDStruct_1b6d18a9 _lastTime;
    unsigned int _throttledFPS;
    struct HGSynchronizable *_lock;
    PVLivePlayer *_player;
}

- (void).cxx_destruct;
- (void)signalDroppedRenderLink;
- (void)signalPlayer:(CDStruct_1b6d18a9)arg1;
- (unsigned int)_throttledRenderLinkFPS_NoLock;
- (BOOL)skipThrottledRenderLinkTime:(CDStruct_1b6d18a9)arg1;
- (void)rebuild;
- (void)teardown;
- (unsigned int)thermalPolicyThrottledFPS;
- (unsigned int)throttledFPS;
- (BOOL)setThrottledFPS:(unsigned int)arg1;
- (void)registerWithPlayer:(id)arg1;
- (void)dealloc;
- (id)init;

@end

