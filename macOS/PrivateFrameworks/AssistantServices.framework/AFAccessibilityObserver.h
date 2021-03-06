//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFAccessibilityState, NSHashTable;
@protocol OS_dispatch_queue;

@interface AFAccessibilityObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _stateLock;
    AFAccessibilityState *_state;
    unsigned long long _stateDirtyFlags;
    NSHashTable *_listeners;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (void)_setState:(id)arg1 clearDirtyFlags:(unsigned long long)arg2;
- (void)_updateVibrationDisabledPreference;
- (void)_updateVoiceOverTouchEnabledPreference;
- (BOOL)_fetchIsVibrationDisabled;
- (BOOL)_fetchIsVoiceOverTouchEnabled;
- (void)vibrationDisabledPreferenceDidChange:(id)arg1;
- (void)voiceOverTouchEnabledPreferenceDidChange:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)getStateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) AFAccessibilityState *state;
- (id)currentState;
- (id)init;

@end

