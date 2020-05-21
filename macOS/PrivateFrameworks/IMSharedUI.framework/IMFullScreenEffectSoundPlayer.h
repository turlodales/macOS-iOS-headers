//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMAudioControllerDelegate.h"
#import "IMFullScreenEffectSoundPlayer.h"

@class IMAudioController, NSString, NSURL;

@interface IMFullScreenEffectSoundPlayer : NSObject <IMAudioControllerDelegate, IMFullScreenEffectSoundPlayer>
{
    BOOL _started;
    BOOL _hasHapticTrack;
    float _currentVolume;
    id <IMFullScreenEffectSoundPlayerDelegate> _delegate;
    IMAudioController *_audioController;
    NSURL *_soundURL;
}

- (void).cxx_destruct;
@property(nonatomic) float currentVolume; // @synthesize currentVolume=_currentVolume;
@property(readonly, nonatomic) BOOL hasHapticTrack; // @synthesize hasHapticTrack=_hasHapticTrack;
@property(readonly, nonatomic) NSURL *soundURL; // @synthesize soundURL=_soundURL;
@property(nonatomic) BOOL started; // @synthesize started=_started;
@property(retain, nonatomic) IMAudioController *audioController; // @synthesize audioController=_audioController;
@property __weak id <IMFullScreenEffectSoundPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_supportsSoundEffects;
- (void)_audioSessionOptionsWillChange:(id)arg1;
- (void)audioController:(id)arg1 didPrepareToPlayContentAtURL:(id)arg2 successfully:(BOOL)arg3;
- (void)audioController:(id)arg1 didChangeProgressForContentAtURL:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)startPlayingSound;
- (void)prepareToPlaySound;
- (void)stopPlayingSound;
- (void)_didPrepare;
- (void)_didStart;
- (void)_didStop;
- (id)_ensureAudioPlayer;
- (id)initWithSoundURL:(id)arg1 hasHapticTrack:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

