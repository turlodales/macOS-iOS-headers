//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNAudioOutputSetting, NSArray, NSHashTable;
@protocol OS_dispatch_queue;

@interface MNAudioOutputSettingsManager : NSObject
{
    NSHashTable *_observers;
    unsigned long long _routeSelection;
    NSArray *_audioSettings;
    NSArray *_pickableRoutes;
    MNAudioOutputSetting *_currentSetting;
    MNAudioOutputSetting *_currentSettingForSystem;
    BOOL _isCurrentSettingCached;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(readonly, nonatomic) unsigned long long routeSelection; // @synthesize routeSelection=_routeSelection;
- (void)_pickableRoutesChanged;
- (void)updateRouteSelectionObservers;
- (void)updatedCurrentSettingForVoicePromptObservers;
- (void)updateCurrentSettingObservers;
- (void)updateSettingsObservers;
- (void)updatePickableRoutes;
- (void)updatePickableRoutesWithHandler:(CDUnknownBlockType)arg1;
- (void)reloadSettings;
- (BOOL)_pickCurrentSetting;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
@property(retain, nonatomic) MNAudioOutputSetting *currentSetting;
@property(readonly, nonatomic) MNAudioOutputSetting *currentSettingForVoicePrompt;
- (void)updateRouteSelection;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_mediaServerConnectionDied;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)init;

@end

