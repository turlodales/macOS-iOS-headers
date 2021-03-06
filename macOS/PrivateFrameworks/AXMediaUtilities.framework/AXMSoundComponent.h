//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMOutputComponent.h>

@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent : AXMOutputComponent
{
    AVAudioEngine *_engine;
    AVAudioPlayerNode *_oneShotSoundPlayer;
    NSMutableArray *_activeSounds;
    id _configChangedObserverToken;
}

+ (BOOL)isSupported;
- (void).cxx_destruct;
@property(retain, nonatomic) id configChangedObserverToken; // @synthesize configChangedObserverToken=_configChangedObserverToken;
- (void)_logAudioFileInfo:(id)arg1;
- (void)_stopActiveSound:(id)arg1;
- (BOOL)_startEngineIfNeeded:(id *)arg1;
- (void)_scheduleOneShotSound:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_scheduleActiveSound:(id)arg1;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (void)transitionToState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

